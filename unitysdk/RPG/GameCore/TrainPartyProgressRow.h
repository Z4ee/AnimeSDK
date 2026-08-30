#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYPROGRESSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D538B80)
#define RPG_GAMECORE_TRAINPARTYPROGRESSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D538EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyProgressRow_TypeDefinitionIndex = 15136;

	class TrainPartyProgressRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TeamIDList; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockPassengerList; // 0x18
		::System::String* PassengerUnlockActPath; // 0x20
		::RPG::Client::TextID ProgressTitle; // 0x28
		::System::UInt32 StatRatio; // 0x38
		::System::UInt32 ProgressID; // 0x3C
		::System::UInt32 InitialStatExp; // 0x40
		::System::UInt32 UnlcokRequireArea; // 0x44
		::System::UInt32 CoinRatio; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPROGRESSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyProgressRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyProgressRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPROGRESSROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

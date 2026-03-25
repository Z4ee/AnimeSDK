#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TravelBrochurePasterType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PASTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1748DD40)
#define RPG_GAMECORE_PASTERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1748E0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PasterConfigRow_TypeDefinitionIndex = 14110;

	class PasterConfigRow : public ::System::Object
	{
	public:
		::System::String* TextPasterPrefab; // 0x10
		::Il2CppArray<::System::UInt32>* TravelBrochureID; // 0x18
		::RPG::Client::TextID PasterUnlockDesc; // 0x20
		::System::UInt32 ID; // 0x30
		::System::Boolean DefaultUnlock; // 0x34
		::RPG::Client::TextID PasterTextmap; // 0x38
		::System::UInt32 IncreaseCompletion; // 0x48
		::RPG::GameCore::TravelBrochurePasterType Type; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PasterConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PasterConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

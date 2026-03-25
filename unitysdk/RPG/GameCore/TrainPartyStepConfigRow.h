#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYSTEPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178B0820)
#define RPG_GAMECORE_TRAINPARTYSTEPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178B0BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyStepConfigRow_TypeDefinitionIndex = 14073;

	class TrainPartyStepConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StaticPropIDList; // 0x10
		::System::String* ImgPath; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::System::Boolean HasPreview; // 0x30
		::System::Boolean HasCutScene; // 0x31
		::System::UInt32 SortID; // 0x34
		::System::UInt32 GroupID; // 0x38
		::System::UInt32 CoinCost; // 0x3C
		::System::UInt32 ID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTEPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyStepConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyStepConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTEPCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

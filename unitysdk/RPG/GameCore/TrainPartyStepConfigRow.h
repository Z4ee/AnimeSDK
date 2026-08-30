#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYSTEPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D539FE0)
#define RPG_GAMECORE_TRAINPARTYSTEPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D53A390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyStepConfigRow_TypeDefinitionIndex = 15157;

	class TrainPartyStepConfigRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::Il2CppArray<::System::UInt32>* StaticPropIDList; // 0x18
		::System::UInt32 GroupID; // 0x20
		::System::Boolean HasCutScene; // 0x24
		::System::Boolean HasPreview; // 0x25
		::System::UInt32 SortID; // 0x28
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 CoinCost; // 0x40
		::System::UInt32 ID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTEPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyStepConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyStepConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTEPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

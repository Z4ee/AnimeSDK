#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIRRECOMMENDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4CE390)
#define RPG_GAMECORE_PIXAIRRECOMMENDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CE600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirRecommendConfigRow_TypeDefinitionIndex = 11667;

	class PixAirRecommendConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EquipList; // 0x10
		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* CoreRecommendTags; // 0x18
		::RPG::Client::TextID Title; // 0x20
		::System::UInt32 CoreID; // 0x30
		::System::UInt32 ID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRRECOMMENDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirRecommendConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirRecommendConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRRECOMMENDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

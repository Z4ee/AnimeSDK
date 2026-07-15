#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/RPG/GameCore/GridFightEquipDressType.h"
#include "unitysdk/RPG/GameCore/GridFightEquipFuncType.h"
#include "unitysdk/RPG/GameCore/GridFightEquipType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTEQUIPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C5C9630)
#define RPG_GAMECORE_GRIDFIGHTEQUIPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C9BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipConfigRow_TypeDefinitionIndex = 12949;

	class GridFightEquipConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EquipFuncParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::System::String* AbilityName; // 0x20
		::Il2CppArray<::System::UInt32>* DressRuleParamList; // 0x28
		::System::String* JsonPath; // 0x30
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* GeneralPropertyList; // 0x38
		::Il2CppArray<::System::UInt32>* EquipmentTagList; // 0x40
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x48
		::RPG::GameCore::GridFightEquipType EquipType; // 0x50
		::RPG::GameCore::GridFightEquipCategory EquipCategory; // 0x54
		::System::Boolean IsDisplaySpecialParam; // 0x58
		::RPG::GameCore::GridFightEquipDressType DressRule; // 0x5C
		::System::UInt32 ID; // 0x60
		::RPG::GameCore::GridFightEquipFuncType EquipFunc; // 0x64
		::RPG::Client::TextID EquipDesc; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightEquipConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightEquipConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

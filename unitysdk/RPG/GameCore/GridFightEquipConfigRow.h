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

#define RPG_GAMECORE_GRIDFIGHTEQUIPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE65B30)
#define RPG_GAMECORE_GRIDFIGHTEQUIPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE660C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipConfigRow_TypeDefinitionIndex = 13340;

	class GridFightEquipConfigRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::System::String* JsonPath; // 0x18
		::Il2CppArray<::System::UInt32>* EquipmentTagList; // 0x20
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* GeneralPropertyList; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x30
		::Il2CppArray<::System::UInt32>* EquipFuncParamList; // 0x38
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x40
		::Il2CppArray<::System::UInt32>* DressRuleParamList; // 0x48
		::System::UInt32 ID; // 0x50
		::RPG::GameCore::GridFightEquipFuncType EquipFunc; // 0x54
		::RPG::GameCore::GridFightEquipDressType DressRule; // 0x58
		::RPG::GameCore::GridFightEquipType EquipType; // 0x5C
		::RPG::Client::TextID EquipDesc; // 0x60
		::System::Boolean IsDisplaySpecialParam; // 0x70
		::RPG::GameCore::GridFightEquipCategory EquipCategory; // 0x74

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

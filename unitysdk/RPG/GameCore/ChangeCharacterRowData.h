#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChangeCharacterSkillRowDataItem; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHANGECHARACTERROWDATA_METHOD_3_2FF8528CF89FDB22_OFFSET UNITYSDK_OFFSET(0x1D537E00)
#define RPG_GAMECORE_CHANGECHARACTERROWDATA_METHOD_3_5CC26542B1A12867_OFFSET UNITYSDK_OFFSET(0x1D537D50)
#define RPG_GAMECORE_CHANGECHARACTERROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D537DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeCharacterRowData_TypeDefinitionIndex = 23677;

	class ChangeCharacterRowData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* SPNeedSet; // 0x20
		::RPG::GameCore::DynamicFloat* SPNeedAdd; // 0x28
		::RPG::GameCore::AvatarBaseType MainAvatarBaseType; // 0x30
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* SubAvatarTypeList; // 0x38
		::RPG::GameCore::AttackDamageType DamageType; // 0x40
		::Il2CppArray<::RPG::GameCore::ChangeCharacterSkillRowDataItem*>* Skills; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERROWDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5CC26542B1A12867(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterRowData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterRowData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERROWDATA_METHOD_3_5CC26542B1A12867_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2FF8528CF89FDB22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterRowData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERROWDATA_METHOD_3_2FF8528CF89FDB22_OFFSET))(a1, a2);
		}
	};
}

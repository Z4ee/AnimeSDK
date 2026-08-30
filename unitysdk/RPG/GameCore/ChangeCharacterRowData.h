#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChangeCharacterSkillRowDataItem; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHANGECHARACTERROWDATA_METHOD_3_D9589E00203CC88E_OFFSET UNITYSDK_OFFSET(0x1D116960)
#define RPG_GAMECORE_CHANGECHARACTERROWDATA_METHOD_3_EB1A3F8516F4697A_OFFSET UNITYSDK_OFFSET(0x1D1168A0)
#define RPG_GAMECORE_CHANGECHARACTERROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D116910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeCharacterRowData_TypeDefinitionIndex = 23405;

	class ChangeCharacterRowData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* SPNeedSet; // 0x20
		::RPG::GameCore::DynamicFloat* SPNeedAdd; // 0x28
		::RPG::GameCore::AvatarBaseType MainAvatarBaseType; // 0x30
		::RPG::GameCore::AvatarBaseType SubAvatarBaseType; // 0x34
		::RPG::GameCore::AttackDamageType DamageType; // 0x38
		::Il2CppArray<::RPG::GameCore::ChangeCharacterSkillRowDataItem*>* Skills; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERROWDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EB1A3F8516F4697A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterRowData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterRowData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERROWDATA_METHOD_3_EB1A3F8516F4697A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D9589E00203CC88E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterRowData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterRowData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERROWDATA_METHOD_3_D9589E00203CC88E_OFFSET))(a1, a2);
		}
	};
}

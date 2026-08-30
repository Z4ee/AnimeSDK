#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SkillDataPropertyModifyItem; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYSLOT_METHOD_3_288A74FE15143C3A_OFFSET UNITYSDK_OFFSET(0x1D2B7D90)
#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYSLOT_METHOD_3_7AE2F18BE876FE89_OFFSET UNITYSDK_OFFSET(0x1D2B7E30)
#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B7DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifySkillPropertyBySlot_TypeDefinitionIndex = 23291;

	class ModifySkillPropertyBySlot : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ControlSkillType SkillType; // 0x20
		::Il2CppArray<::RPG::GameCore::SkillDataPropertyModifyItem*>* Properties; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYSLOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_288A74FE15143C3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifySkillPropertyBySlot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifySkillPropertyBySlot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYSLOT_METHOD_3_288A74FE15143C3A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7AE2F18BE876FE89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifySkillPropertyBySlot* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifySkillPropertyBySlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYSLOT_METHOD_3_7AE2F18BE876FE89_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SkillDataPropertyModifyItem; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYTYPE_METHOD_3_8C081278B6BE0DAC_OFFSET UNITYSDK_OFFSET(0x19958F50)
#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYTYPE_METHOD_3_CDCBC2338512BE1E_OFFSET UNITYSDK_OFFSET(0x19959020)
#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19958FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifySkillPropertyByType_TypeDefinitionIndex = 22274;

	class ModifySkillPropertyByType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::SkillType>* SkillTypes; // 0x20
		::Il2CppArray<::RPG::GameCore::SkillDataPropertyModifyItem*>* Properties; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8C081278B6BE0DAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifySkillPropertyByType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifySkillPropertyByType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYTYPE_METHOD_3_8C081278B6BE0DAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CDCBC2338512BE1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifySkillPropertyByType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifySkillPropertyByType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYTYPE_METHOD_3_CDCBC2338512BE1E_OFFSET))(a1, a2);
		}
	};
}

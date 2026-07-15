#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SkillDataPropertyModifyItem; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYNAME_METHOD_3_65737B02DECE7ED3_OFFSET UNITYSDK_OFFSET(0x1B1AD7F0)
#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYNAME_METHOD_3_DDE150CC7175EDDC_OFFSET UNITYSDK_OFFSET(0x1B1AD890)
#define RPG_GAMECORE_MODIFYSKILLPROPERTYBYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1AD850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifySkillPropertyByName_TypeDefinitionIndex = 22713;

	class ModifySkillPropertyByName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* SkillTriggerKeyList; // 0x20
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* SkillIndexList; // 0x28
		::Il2CppArray<::RPG::GameCore::SkillDataPropertyModifyItem*>* Properties; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_65737B02DECE7ED3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifySkillPropertyByName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifySkillPropertyByName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYNAME_METHOD_3_65737B02DECE7ED3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DDE150CC7175EDDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifySkillPropertyByName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifySkillPropertyByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSKILLPROPERTYBYNAME_METHOD_3_DDE150CC7175EDDC_OFFSET))(a1, a2);
		}
	};
}

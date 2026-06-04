#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_VE_RTSKILLPROPERTY_METHOD_3_921C8603D092D850_OFFSET UNITYSDK_OFFSET(0x19E45590)
#define RPG_GAMECORE_VE_RTSKILLPROPERTY_METHOD_3_A16ECDCA731A6571_OFFSET UNITYSDK_OFFSET(0x19E45550)
#define RPG_GAMECORE_VE_RTSKILLPROPERTY_METHOD_3_A7196DB1B7411B41_OFFSET UNITYSDK_OFFSET(0x19E457A0)
#define RPG_GAMECORE_VE_RTSKILLPROPERTY_METHOD_3_DC7112964EE86D3F_OFFSET UNITYSDK_OFFSET(0x19E457D0)
#define RPG_GAMECORE_VE_RTSKILLPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x19E45580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtSkillProperty_TypeDefinitionIndex = 22950;

	class VE_RtSkillProperty : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* SkillName; // 0x28
		::RPG::GameCore::RtSkillPropertyType Property; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTSKILLPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A16ECDCA731A6571(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtSkillProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtSkillProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTSKILLPROPERTY_METHOD_3_A16ECDCA731A6571_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_921C8603D092D850(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtSkillProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtSkillProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTSKILLPROPERTY_METHOD_3_921C8603D092D850_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A7196DB1B7411B41(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtSkillProperty*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtSkillProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTSKILLPROPERTY_METHOD_3_A7196DB1B7411B41_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DC7112964EE86D3F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtSkillProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtSkillProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTSKILLPROPERTY_METHOD_3_DC7112964EE86D3F_OFFSET))(a1, a2);
		}
	};
}

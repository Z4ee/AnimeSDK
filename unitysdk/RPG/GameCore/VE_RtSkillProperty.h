#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_VE_RTSKILLPROPERTY_METHOD_3_90363B0E90DF2CEA_OFFSET UNITYSDK_OFFSET(0x190EF7E0)
#define RPG_GAMECORE_VE_RTSKILLPROPERTY_METHOD_3_F714C8AA35A86937_OFFSET UNITYSDK_OFFSET(0x190EF820)
#define RPG_GAMECORE_VE_RTSKILLPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x190EF810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtSkillProperty_TypeDefinitionIndex = 23283;

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

		static ::System::Void Method_3_90363B0E90DF2CEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtSkillProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtSkillProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTSKILLPROPERTY_METHOD_3_90363B0E90DF2CEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F714C8AA35A86937(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtSkillProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtSkillProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTSKILLPROPERTY_METHOD_3_F714C8AA35A86937_OFFSET))(a1, a2);
		}
	};
}

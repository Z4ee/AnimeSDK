#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ST_BYSKILLINCD_METHOD_4_6ABEF8074343DF97_OFFSET UNITYSDK_OFFSET(0x1D4C6970)
#define RPG_GAMECORE_ST_BYSKILLINCD_METHOD_4_72E2390255B5DB26_OFFSET UNITYSDK_OFFSET(0x1D4C69B0)
#define RPG_GAMECORE_ST_BYSKILLINCD_METHOD_4_B7A495470EBDAEF2_OFFSET UNITYSDK_OFFSET(0x1D4C6B30)
#define RPG_GAMECORE_ST_BYSKILLINCD_METHOD_4_EAF8B3742341BE45_OFFSET UNITYSDK_OFFSET(0x1D4C6B60)
#define RPG_GAMECORE_ST_BYSKILLINCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C69A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_BySkillInCD_TypeDefinitionIndex = 19833;

	class ST_BySkillInCD : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* CDVariableName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYSKILLINCD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6ABEF8074343DF97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_BySkillInCD*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_BySkillInCD*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYSKILLINCD_METHOD_4_6ABEF8074343DF97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_72E2390255B5DB26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_BySkillInCD* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_BySkillInCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYSKILLINCD_METHOD_4_72E2390255B5DB26_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B7A495470EBDAEF2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_BySkillInCD*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_BySkillInCD*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYSKILLINCD_METHOD_4_B7A495470EBDAEF2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EAF8B3742341BE45(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_BySkillInCD* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_BySkillInCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYSKILLINCD_METHOD_4_EAF8B3742341BE45_OFFSET))(a1, a2);
		}
	};
}

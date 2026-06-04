#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ST_BYSKILLINCD_METHOD_4_72E2390255B5DB26_OFFSET UNITYSDK_OFFSET(0x19C160F0)
#define RPG_GAMECORE_ST_BYSKILLINCD_METHOD_4_873F92A00715E64B_OFFSET UNITYSDK_OFFSET(0x19C16270)
#define RPG_GAMECORE_ST_BYSKILLINCD_METHOD_4_CCB822FFB0D7EE78_OFFSET UNITYSDK_OFFSET(0x19C16020)
#define RPG_GAMECORE_ST_BYSKILLINCD_METHOD_4_E37BDEC9143D942A_OFFSET UNITYSDK_OFFSET(0x19C162F0)
#define RPG_GAMECORE_ST_BYSKILLINCD__CTOR_OFFSET UNITYSDK_OFFSET(0x19C160A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_BySkillInCD_TypeDefinitionIndex = 18942;

	class ST_BySkillInCD : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* CDVariableName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYSKILLINCD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CCB822FFB0D7EE78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_BySkillInCD*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_BySkillInCD*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYSKILLINCD_METHOD_4_CCB822FFB0D7EE78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_72E2390255B5DB26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_BySkillInCD* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_BySkillInCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYSKILLINCD_METHOD_4_72E2390255B5DB26_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_873F92A00715E64B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_BySkillInCD*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_BySkillInCD*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYSKILLINCD_METHOD_4_873F92A00715E64B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E37BDEC9143D942A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_BySkillInCD* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_BySkillInCD*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYSKILLINCD_METHOD_4_E37BDEC9143D942A_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_2E4156EB6C95B848_OFFSET UNITYSDK_OFFSET(0x1CF13080)
#define RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_E0EFEFEDE90A451D_OFFSET UNITYSDK_OFFSET(0x1CF13040)
#define RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_EDC82C4EABF67BF3_OFFSET UNITYSDK_OFFSET(0x1CF132F0)
#define RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_F3E8D8BF37431B5C_OFFSET UNITYSDK_OFFSET(0x1CF132C0)
#define RPG_GAMECORE_BYCURRENTSKILLNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF13070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentSkillName_TypeDefinitionIndex = 23241;

	class ByCurrentSkillName : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* SkillName; // 0x20
		::Il2CppArray<::System::String*>* SkillNameList; // 0x28
		::System::Boolean AccessClientActiveSkill; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E0EFEFEDE90A451D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_E0EFEFEDE90A451D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2E4156EB6C95B848(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_2E4156EB6C95B848_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F3E8D8BF37431B5C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillName*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_F3E8D8BF37431B5C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EDC82C4EABF67BF3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_EDC82C4EABF67BF3_OFFSET))(a1, a2);
		}
	};
}

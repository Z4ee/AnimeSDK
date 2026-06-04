#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_2E4156EB6C95B848_OFFSET UNITYSDK_OFFSET(0x19543A60)
#define RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_32E1CE2A91DB45D2_OFFSET UNITYSDK_OFFSET(0x19543990)
#define RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_F757396EC89661BC_OFFSET UNITYSDK_OFFSET(0x19543D20)
#define RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_FF23B4683ED9F561_OFFSET UNITYSDK_OFFSET(0x19543CA0)
#define RPG_GAMECORE_BYCURRENTSKILLNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x19543A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentSkillName_TypeDefinitionIndex = 22224;

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

		static ::System::Void Method_4_32E1CE2A91DB45D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_32E1CE2A91DB45D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2E4156EB6C95B848(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_2E4156EB6C95B848_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FF23B4683ED9F561(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillName*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_FF23B4683ED9F561_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F757396EC89661BC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_F757396EC89661BC_OFFSET))(a1, a2);
		}
	};
}

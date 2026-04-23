#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_695DF84745E3BAEF_OFFSET UNITYSDK_OFFSET(0x187439E0)
#define RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_C4D1695BA513DD0F_OFFSET UNITYSDK_OFFSET(0x18743AB0)
#define RPG_GAMECORE_BYCURRENTSKILLNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x18743A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentSkillName_TypeDefinitionIndex = 22475;

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

		static ::System::Void Method_4_695DF84745E3BAEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_695DF84745E3BAEF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C4D1695BA513DD0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLNAME_METHOD_4_C4D1695BA513DD0F_OFFSET))(a1, a2);
		}
	};
}

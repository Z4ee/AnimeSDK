#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_575D78A2E938E78D_OFFSET UNITYSDK_OFFSET(0x1CF59190)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_796323C3EA80CF4C_OFFSET UNITYSDK_OFFSET(0x1CF59010)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_A051875F80E491A4_OFFSET UNITYSDK_OFFSET(0x1CF591C0)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_CC32DC2BBFA39D07_OFFSET UNITYSDK_OFFSET(0x1CF59050)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF59040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPropIsCreateByActiveSkill_TypeDefinitionIndex = 20074;

	class ByPropIsCreateByActiveSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_796323C3EA80CF4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_796323C3EA80CF4C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CC32DC2BBFA39D07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_CC32DC2BBFA39D07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_575D78A2E938E78D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_575D78A2E938E78D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A051875F80E491A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_A051875F80E491A4_OFFSET))(a1, a2);
		}
	};
}

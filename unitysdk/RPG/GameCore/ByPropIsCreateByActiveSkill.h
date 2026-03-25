#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_9DF974EAE7378AAD_OFFSET UNITYSDK_OFFSET(0x17039400)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_CC32DC2BBFA39D07_OFFSET UNITYSDK_OFFSET(0x170394D0)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x17039480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPropIsCreateByActiveSkill_TypeDefinitionIndex = 18596;

	class ByPropIsCreateByActiveSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9DF974EAE7378AAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_9DF974EAE7378AAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CC32DC2BBFA39D07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_CC32DC2BBFA39D07_OFFSET))(a1, a2);
		}
	};
}

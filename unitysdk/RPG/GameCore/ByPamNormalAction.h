#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYPAMNORMALACTION_METHOD_4_00DAE05840A18CBD_OFFSET UNITYSDK_OFFSET(0x17037B70)
#define RPG_GAMECORE_BYPAMNORMALACTION_METHOD_4_88EE3127DB4C2DD7_OFFSET UNITYSDK_OFFSET(0x17037C40)
#define RPG_GAMECORE_BYPAMNORMALACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17037BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamNormalAction_TypeDefinitionIndex = 18287;

	class ByPamNormalAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_00DAE05840A18CBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamNormalAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamNormalAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTION_METHOD_4_00DAE05840A18CBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_88EE3127DB4C2DD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamNormalAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamNormalAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMNORMALACTION_METHOD_4_88EE3127DB4C2DD7_OFFSET))(a1, a2);
		}
	};
}

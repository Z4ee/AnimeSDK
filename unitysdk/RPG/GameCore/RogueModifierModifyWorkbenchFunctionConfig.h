#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHFUNCTIONCONFIG_METHOD_3_34638FF6294E5673_OFFSET UNITYSDK_OFFSET(0x1EEFBBE0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHFUNCTIONCONFIG_METHOD_3_EAD48C1BDFD864AF_OFFSET UNITYSDK_OFFSET(0x1EEFBB90)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHFUNCTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFBBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyWorkbenchFunctionConfig_TypeDefinitionIndex = 17674;

	class RogueModifierModifyWorkbenchFunctionConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHFUNCTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EAD48C1BDFD864AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchFunctionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyWorkbenchFunctionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHFUNCTIONCONFIG_METHOD_3_EAD48C1BDFD864AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_34638FF6294E5673(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchFunctionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyWorkbenchFunctionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHFUNCTIONCONFIG_METHOD_3_34638FF6294E5673_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDCURAEONCONFIG_METHOD_6_466ED687D1A70B83_OFFSET UNITYSDK_OFFSET(0x18CF6750)
#define RPG_GAMECORE_ROGUECONDCURAEONCONFIG_METHOD_6_C4CC0BC797CFD6ED_OFFSET UNITYSDK_OFFSET(0x18CF6A00)
#define RPG_GAMECORE_ROGUECONDCURAEONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF68D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondCurAeonConfig_TypeDefinitionIndex = 18783;

	class RogueCondCurAeonConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCURAEONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_466ED687D1A70B83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondCurAeonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondCurAeonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCURAEONCONFIG_METHOD_6_466ED687D1A70B83_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C4CC0BC797CFD6ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondCurAeonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondCurAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCURAEONCONFIG_METHOD_6_C4CC0BC797CFD6ED_OFFSET))(a1, a2);
		}
	};
}

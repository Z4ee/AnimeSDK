#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG_METHOD_6_095363C684CFACF0_OFFSET UNITYSDK_OFFSET(0x18CF6F90)
#define RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG_METHOD_6_3BAD16FDAD655BC6_OFFSET UNITYSDK_OFFSET(0x18CF7240)
#define RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF7110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondItemCountConfig_TypeDefinitionIndex = 18786;

	class RogueCondItemCountConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_095363C684CFACF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondItemCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondItemCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG_METHOD_6_095363C684CFACF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_3BAD16FDAD655BC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondItemCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondItemCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG_METHOD_6_3BAD16FDAD655BC6_OFFSET))(a1, a2);
		}
	};
}

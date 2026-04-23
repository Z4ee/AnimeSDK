#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR_METHOD_3_7FACCE162639D4A3_OFFSET UNITYSDK_OFFSET(0x18A7F280)
#define RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR_METHOD_3_B423EC85AD94D7BC_OFFSET UNITYSDK_OFFSET(0x18A7F210)
#define RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18A7F250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitTeleportByAnchor_TypeDefinitionIndex = 19534;

	class LoopWaitTeleportByAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B423EC85AD94D7BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitTeleportByAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitTeleportByAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR_METHOD_3_B423EC85AD94D7BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7FACCE162639D4A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitTeleportByAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitTeleportByAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR_METHOD_3_7FACCE162639D4A3_OFFSET))(a1, a2);
		}
	};
}

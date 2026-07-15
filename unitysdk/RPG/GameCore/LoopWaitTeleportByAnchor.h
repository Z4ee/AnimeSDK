#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR_METHOD_3_7FACCE162639D4A3_OFFSET UNITYSDK_OFFSET(0x1BCD4F90)
#define RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR_METHOD_3_C2FEBB0E82BF169F_OFFSET UNITYSDK_OFFSET(0x1BCD4F40)
#define RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD4F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitTeleportByAnchor_TypeDefinitionIndex = 19784;

	class LoopWaitTeleportByAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C2FEBB0E82BF169F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitTeleportByAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitTeleportByAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR_METHOD_3_C2FEBB0E82BF169F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7FACCE162639D4A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitTeleportByAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitTeleportByAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR_METHOD_3_7FACCE162639D4A3_OFFSET))(a1, a2);
		}
	};
}

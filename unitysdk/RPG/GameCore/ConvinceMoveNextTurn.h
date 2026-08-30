#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONVINCEMOVENEXTTURN_METHOD_3_447D08A933C1A931_OFFSET UNITYSDK_OFFSET(0x1D003880)
#define RPG_GAMECORE_CONVINCEMOVENEXTTURN_METHOD_3_C516CE7F5BBC32F4_OFFSET UNITYSDK_OFFSET(0x1D0037B0)
#define RPG_GAMECORE_CONVINCEMOVENEXTTURN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D003870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceMoveNextTurn_TypeDefinitionIndex = 21591;

	class ConvinceMoveNextTurn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVENEXTTURN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C516CE7F5BBC32F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceMoveNextTurn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceMoveNextTurn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVENEXTTURN_METHOD_3_C516CE7F5BBC32F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_447D08A933C1A931(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceMoveNextTurn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceMoveNextTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVENEXTTURN_METHOD_3_447D08A933C1A931_OFFSET))(a1, a2);
		}
	};
}

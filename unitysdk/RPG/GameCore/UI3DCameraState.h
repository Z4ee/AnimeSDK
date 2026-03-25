#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UI3DCameraStateBase.h"

#define RPG_GAMECORE_UI3DCAMERASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xAAECC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DCameraState_TypeDefinitionIndex = 46366;

	class UI3DCameraState : public ::RPG::GameCore::UI3DCameraStateBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATE__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UITRAININGROOMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F97D90)

namespace MoleMole
{
	inline static constexpr unsigned int UITrainingRoomContext_TypeDefinitionIndex = 61589;

	class UITrainingRoomContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGROOMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

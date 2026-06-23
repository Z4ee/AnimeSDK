#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIVIRTUALNPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1158AE20)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirtualNpcConfig_TypeDefinitionIndex = 64805;

	class UIVirtualNpcConfig : public ::System::Object
	{
	public:
		::System::Int32 Npc; // 0x10
		::System::Single Y; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALNPCCONFIG__CTOR_OFFSET))(this);
		}
	};
}

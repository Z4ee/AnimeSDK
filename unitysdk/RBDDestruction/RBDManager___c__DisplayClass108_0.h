#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RBDDestruction/RBDManager_SingleBuildingInfo.h"
#include "unitysdk/System/Object.h"

namespace RBDDestruction { class RBDManager; }

#define RBDDESTRUCTION_RBDMANAGER___C__DISPLAYCLASS108_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0783A0)
#define RBDDESTRUCTION_RBDMANAGER___C__DISPLAYCLASS108_0__INIT_B__0_OFFSET UNITYSDK_OFFSET(0x1B0783B0)

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDManager___c__DisplayClass108_0_TypeDefinitionIndex = 29722;

	class RBDManager___c__DisplayClass108_0 : public ::System::Object
	{
	public:
		::RBDDestruction::RBDManager* __4__this; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER___C__DISPLAYCLASS108_0__CTOR_OFFSET))(this);
		}

		::RBDDestruction::RBDManager_SingleBuildingInfo _Init_b__0(::System::Int32 j)
		{
			return ((::RBDDestruction::RBDManager_SingleBuildingInfo(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER___C__DISPLAYCLASS108_0__INIT_B__0_OFFSET))(this, j);
		}
	};
}

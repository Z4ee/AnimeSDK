#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RBDDestruction/RBDManager_DestroyEvent.h"
#include "unitysdk/System/Object.h"

namespace RBDDestruction { class RBDManager; }

#define RBDDESTRUCTION_RBDMANAGER___C__DISPLAYCLASS104_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B078360)
#define RBDDESTRUCTION_RBDMANAGER___C__DISPLAYCLASS104_0__PROCESSDESTROYEVENTS_B__0_OFFSET UNITYSDK_OFFSET(0x1B078370)

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDManager___c__DisplayClass104_0_TypeDefinitionIndex = 29721;

	class RBDManager___c__DisplayClass104_0 : public ::System::Object
	{
	public:
		::RBDDestruction::RBDManager* __4__this; // 0x10
		::System::Int32 buildingTypeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER___C__DISPLAYCLASS104_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessDestroyEvents_b__0(::Il2CppArray<::RBDDestruction::RBDManager_DestroyEvent>* batch)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RBDDestruction::RBDManager_DestroyEvent>*))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER___C__DISPLAYCLASS104_0__PROCESSDESTROYEVENTS_B__0_OFFSET))(this, batch);
		}
	};
}

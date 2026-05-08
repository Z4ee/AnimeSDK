#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RBDDestruction/RBDManager_HitEvent.h"
#include "unitysdk/System/Object.h"

namespace RBDDestruction { class RBDManager; }

#define RBDDESTRUCTION_RBDMANAGER___C__DISPLAYCLASS103_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0782A0)
#define RBDDESTRUCTION_RBDMANAGER___C__DISPLAYCLASS103_0__PROCESSHITEVENTS_B__0_OFFSET UNITYSDK_OFFSET(0x1B0782B0)

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDManager___c__DisplayClass103_0_TypeDefinitionIndex = 29720;

	class RBDManager___c__DisplayClass103_0 : public ::System::Object
	{
	public:
		::RBDDestruction::RBDManager* __4__this; // 0x10
		::System::Int32 buildingTypeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER___C__DISPLAYCLASS103_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessHitEvents_b__0(::Il2CppArray<::RBDDestruction::RBDManager_HitEvent>* batch)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RBDDestruction::RBDManager_HitEvent>*))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER___C__DISPLAYCLASS103_0__PROCESSHITEVENTS_B__0_OFFSET))(this, batch);
		}
	};
}

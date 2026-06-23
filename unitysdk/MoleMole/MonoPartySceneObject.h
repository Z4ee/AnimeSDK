#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

#define MOLEMOLE_MONOPARTYSCENEOBJECT_ONASSOCIATEDENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x18CE8450)
#define MOLEMOLE_MONOPARTYSCENEOBJECT_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x18CE8400)
#define MOLEMOLE_MONOPARTYSCENEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE8490)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPartySceneObject_TypeDefinitionIndex = 68306;

	class MonoPartySceneObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::System::Int32 sceneObjectID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSCENEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnDoUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSCENEOBJECT_ONDOUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnAssociatedEntityRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPARTYSCENEOBJECT_ONASSOCIATEDENTITYREMOVED_OFFSET))(this);
		}
	};
}

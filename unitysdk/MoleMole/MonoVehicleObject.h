#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

namespace System { class String; }

#define MOLEMOLE_MONOVEHICLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x129D63B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoVehicleObject_TypeDefinitionIndex = 51200;

	class MonoVehicleObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::System::String* assetPath; // 0x28
		::System::String* ScriptConfigPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOVEHICLEOBJECT__CTOR_OFFSET))(this);
		}
	};
}

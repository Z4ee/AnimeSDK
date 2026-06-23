#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEntityGameObject.h"

namespace System { class String; }

#define MOLEMOLE_MONOSCENEOBJECTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x11634E30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSceneObjectBase_TypeDefinitionIndex = 55638;

	class MonoSceneObjectBase : public ::MoleMole::MonoEntityGameObject
	{
	public:
		::System::String* ObjectName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEOBJECTBASE__CTOR_OFFSET))(this);
		}
	};
}

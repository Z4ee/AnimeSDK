#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

#define MOLEMOLE_MONOSCENEMOVEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B9FF00)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSceneMoveObject_TypeDefinitionIndex = 77803;

	class MonoSceneMoveObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::System::Single length; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEMOVEOBJECT__CTOR_OFFSET))(this);
		}
	};
}

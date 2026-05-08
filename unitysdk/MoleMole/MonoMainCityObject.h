#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

#define MOLEMOLE_MONOMAINCITYOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x17827920)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMainCityObject_TypeDefinitionIndex = 73636;

	class MonoMainCityObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::System::Int32 TemplateID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMAINCITYOBJECT__CTOR_OFFSET))(this);
		}
	};
}

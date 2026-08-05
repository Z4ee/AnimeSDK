#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

#define MOLEMOLE_MONOINTERESTPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x173909B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInterestPoint_TypeDefinitionIndex = 78038;

	class MonoInterestPoint : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::System::Boolean UseOverrideDistance; // 0x28
		::System::Single OverrideDistance; // 0x2C
		::System::Boolean UseOverrideAngle; // 0x30
		::System::Single OverrideAngle; // 0x34
		::System::Int32 Weight; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERESTPOINT__CTOR_OFFSET))(this);
		}
	};
}

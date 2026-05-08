#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_MONOUIADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x12360AE0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIAdaptor_TypeDefinitionIndex = 75421;

	class MonoUIAdaptor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIADAPTOR__CTOR_OFFSET))(this);
		}
	};
}

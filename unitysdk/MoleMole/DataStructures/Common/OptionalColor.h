#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Common/Optional_1.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9BDC50)

namespace MoleMole::DataStructures::Common
{
	inline static constexpr unsigned int OptionalColor_TypeDefinitionIndex = 28809;

	class OptionalColor : public ::MoleMole::DataStructures::Common::Optional_1<::UnityEngine::Color>
	{
	public:
		::System::Void _ctor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALCOLOR__CTOR_OFFSET))(this, a1);
		}
	};
}

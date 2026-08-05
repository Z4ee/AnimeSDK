#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Common/Optional_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9BDCE0)

namespace MoleMole::DataStructures::Common
{
	inline static constexpr unsigned int OptionalVector2_TypeDefinitionIndex = 28830;

	class OptionalVector2 : public ::MoleMole::DataStructures::Common::Optional_1<::UnityEngine::Vector2>
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALVECTOR2__CTOR_OFFSET))(this, a1);
		}
	};
}

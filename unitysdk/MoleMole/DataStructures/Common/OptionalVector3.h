#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Common/Optional_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B2410)

namespace MoleMole::DataStructures::Common
{
	inline static constexpr unsigned int OptionalVector3_TypeDefinitionIndex = 28291;

	class OptionalVector3 : public ::MoleMole::DataStructures::Common::Optional_1<::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALVECTOR3__CTOR_OFFSET))(this, a1);
		}
	};
}

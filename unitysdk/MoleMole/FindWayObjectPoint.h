#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_190E3717882702BE_5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_FINDWAYOBJECTPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x19238BC0)

namespace MoleMole
{
	inline static constexpr unsigned int FindWayObjectPoint_TypeDefinitionIndex = 65468;

	class FindWayObjectPoint : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 position; // 0x10
		::Enum_3_190E3717882702BE_5 pointFuncType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FINDWAYOBJECTPOINT__CTOR_OFFSET))(this);
		}
	};
}

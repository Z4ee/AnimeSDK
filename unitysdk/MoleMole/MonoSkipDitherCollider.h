#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_91322E66F4CC7ECA.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOSKIPDITHERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1909CDB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSkipDitherCollider_TypeDefinitionIndex = 71032;

	class MonoSkipDitherCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Enum_3_91322E66F4CC7ECA skipReason; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSKIPDITHERCOLLIDER__CTOR_OFFSET))(this);
		}
	};
}

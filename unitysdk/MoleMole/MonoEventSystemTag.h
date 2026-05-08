#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C5CF16B9F11707EA.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOEVENTSYSTEMTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x17823880)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEventSystemTag_TypeDefinitionIndex = 49697;

	class MonoEventSystemTag : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Enum_3_C5CF16B9F11707EA Tag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTSYSTEMTAG__CTOR_OFFSET))(this);
		}
	};
}

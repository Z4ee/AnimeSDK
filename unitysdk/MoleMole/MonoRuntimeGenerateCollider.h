#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONORUNTIMEGENERATECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1514AD10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRuntimeGenerateCollider_TypeDefinitionIndex = 44585;

	class MonoRuntimeGenerateCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORUNTIMEGENERATECOLLIDER__CTOR_OFFSET))(this);
		}
	};
}

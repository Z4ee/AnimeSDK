#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOPHOTOWALLEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1235F840)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPhotoWallEdge_TypeDefinitionIndex = 61023;

	class MonoPhotoWallEdge : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPHOTOWALLEDGE__CTOR_OFFSET))(this);
		}
	};
}

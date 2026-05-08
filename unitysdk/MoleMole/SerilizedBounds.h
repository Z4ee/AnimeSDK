#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_SERILIZEDBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x11DEDDC0)

namespace MoleMole
{
	inline static constexpr unsigned int SerilizedBounds_TypeDefinitionIndex = 54464;

	class SerilizedBounds : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Bounds Bounds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SERILIZEDBOUNDS__CTOR_OFFSET))(this);
		}
	};
}

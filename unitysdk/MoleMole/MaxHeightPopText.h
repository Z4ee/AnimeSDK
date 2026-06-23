#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MAXHEIGHTPOPTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x182F9A70)

namespace MoleMole
{
	inline static constexpr unsigned int MaxHeightPopText_TypeDefinitionIndex = 59097;

	class MaxHeightPopText : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 MaxHeight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAXHEIGHTPOPTEXT__CTOR_OFFSET))(this);
		}
	};
}

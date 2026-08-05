#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define MOLEMOLE_MAPOVERRIDEBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x19B2E540)

namespace MoleMole
{
	inline static constexpr unsigned int MapOverrideBounds_TypeDefinitionIndex = 69129;

	class MapOverrideBounds : public ::System::Object
	{
	public:
		::System::Int32 AreaId; // 0x10
		::UnityEngine::Bounds OverrideBounds; // 0x14
		::System::Int32 Layer; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAPOVERRIDEBOUNDS__CTOR_OFFSET))(this);
		}
	};
}

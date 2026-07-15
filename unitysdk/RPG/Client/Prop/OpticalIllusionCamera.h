#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_PROP_OPTICALILLUSIONCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x14855870)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionCamera_TypeDefinitionIndex = 74744;

	class OpticalIllusionCamera : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Position; // 0x10
		::System::Single OrthographicSize; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONCAMERA__CTOR_OFFSET))(this);
		}
	};
}

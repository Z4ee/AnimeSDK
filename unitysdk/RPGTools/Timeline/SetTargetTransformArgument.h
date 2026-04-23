#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPGTOOLS_TIMELINE_SETTARGETTRANSFORMARGUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB9127D0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SetTargetTransformArgument_TypeDefinitionIndex = 45149;

	class SetTargetTransformArgument : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Vector3 Roation; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETTARGETTRANSFORMARGUMENT__CTOR_OFFSET))(this);
		}
	};
}

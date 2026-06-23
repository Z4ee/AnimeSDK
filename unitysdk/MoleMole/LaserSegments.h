#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class LineRenderer; }

#define MOLEMOLE_LASERSEGMENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1582AC00)

namespace MoleMole
{
	inline static constexpr unsigned int LaserSegments_TypeDefinitionIndex = 61282;

	class LaserSegments : public ::System::Object
	{
	public:
		::UnityEngine::LineRenderer* Start; // 0x10
		::UnityEngine::LineRenderer* Loop; // 0x18
		::UnityEngine::LineRenderer* End; // 0x20
		::System::Single StartSegmentLength; // 0x28
		::System::Single LoopSegmentLength; // 0x2C
		::System::Single EndSegmentLength; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LASERSEGMENTS__CTOR_OFFSET))(this);
		}
	};
}

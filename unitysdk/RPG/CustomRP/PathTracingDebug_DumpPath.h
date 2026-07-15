#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/PathTracingDebug_DumpVertex.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CUSTOMRP_PATHTRACINGDEBUG_DUMPPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x106A8730)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PathTracingDebug_DumpPath_TypeDefinitionIndex = 49479;

	class PathTracingDebug_DumpPath : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 L; // 0x10
		::Il2CppArray<::RPG::CustomRP::PathTracingDebug_DumpVertex>* Vertices; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_DUMPPATH__CTOR_OFFSET))(this);
		}
	};
}

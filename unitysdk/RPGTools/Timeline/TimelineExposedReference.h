#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class IExposedPropertyTable; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_TIMELINEEXPOSEDREFERENCE_METHOD_2_2A6F443B470AAF12_OFFSET UNITYSDK_OFFSET(0xE5080)
#define RPGTOOLS_TIMELINE_TIMELINEEXPOSEDREFERENCE_METHOD_2_6038703EDAED5BDB_OFFSET UNITYSDK_OFFSET(0xE5090)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TimelineExposedReference_TypeDefinitionIndex = 45230;

	struct alignas(8) TimelineExposedReference
	{
		::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*> reference; // 0x10
		::System::String* nodePath; // 0x20

		::UnityEngine::GameObject* Method_2_2A6F443B470AAF12(::UnityEngine::IExposedPropertyTable* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::IExposedPropertyTable*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEXPOSEDREFERENCE_METHOD_2_2A6F443B470AAF12_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* Method_2_6038703EDAED5BDB(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEXPOSEDREFERENCE_METHOD_2_6038703EDAED5BDB_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class IExposedPropertyTable; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_TIMELINEEXPOSEDREFERENCE_METHOD_2_6038703EDAED5BDB_OFFSET UNITYSDK_OFFSET(0x15FA80)
#define RPGTOOLS_TIMELINE_TIMELINEEXPOSEDREFERENCE_METHOD_2_DD1FB2CDC42A698F_OFFSET UNITYSDK_OFFSET(0x15FA70)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TimelineExposedReference_TypeDefinitionIndex = 48972;

	struct alignas(8) TimelineExposedReference
	{
		::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*> reference; // 0x10
		::System::String* nodePath; // 0x20
		::System::String* attachPointName; // 0x28

		::UnityEngine::GameObject* Method_2_DD1FB2CDC42A698F(::UnityEngine::IExposedPropertyTable* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::IExposedPropertyTable*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEXPOSEDREFERENCE_METHOD_2_DD1FB2CDC42A698F_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* Method_2_6038703EDAED5BDB(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEXPOSEDREFERENCE_METHOD_2_6038703EDAED5BDB_OFFSET))(this, a1, a2);
		}
	};
}

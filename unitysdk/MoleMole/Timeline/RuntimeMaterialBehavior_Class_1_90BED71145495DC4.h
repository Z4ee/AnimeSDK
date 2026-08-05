#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class RuntimeMaterialCompRecorderInfo; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_CLASS_1_90BED71145495DC4_METHOD_1_DF14857B44893A48_OFFSET UNITYSDK_OFFSET(0x11D7BC60)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_CLASS_1_90BED71145495DC4__CTOR_OFFSET UNITYSDK_OFFSET(0x11D7BC50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialBehavior_Class_1_90BED71145495DC4_TypeDefinitionIndex = 85346;

	class RuntimeMaterialBehavior_Class_1_90BED71145495DC4 : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_CLASS_1_90BED71145495DC4__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_DF14857B44893A48(::MoleMole::Timeline::RuntimeMaterialCompRecorderInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::RuntimeMaterialCompRecorderInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_CLASS_1_90BED71145495DC4_METHOD_1_DF14857B44893A48_OFFSET))(this, a1);
		}
	};
}

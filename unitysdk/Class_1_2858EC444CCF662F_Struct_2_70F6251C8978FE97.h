#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class Camera; }

#define CLASS_1_2858EC444CCF662F_STRUCT_2_70F6251C8978FE97_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x735580)
#define CLASS_1_2858EC444CCF662F_STRUCT_2_70F6251C8978FE97_EQUALS_OFFSET UNITYSDK_OFFSET(0x735540)
#define CLASS_1_2858EC444CCF662F_STRUCT_2_70F6251C8978FE97_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x735680)

inline static constexpr unsigned int Class_1_2858EC444CCF662F_Struct_2_70F6251C8978FE97_TypeDefinitionIndex = 51960;

struct alignas(8) Class_1_2858EC444CCF662F_Struct_2_70F6251C8978FE97
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x1C
	::System::Single Field_2_2; // 0x20
	::UnityEngine::Vector3 Field_2_3; // 0x24
	::UnityEngine::Quaternion Field_2_4; // 0x30
	::UnityEngine::Camera* Field_2_5; // 0x40

	::System::Boolean Equals(::Class_1_2858EC444CCF662F_Struct_2_70F6251C8978FE97 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2858EC444CCF662F_Struct_2_70F6251C8978FE97))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_STRUCT_2_70F6251C8978FE97_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_STRUCT_2_70F6251C8978FE97_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2858EC444CCF662F_STRUCT_2_70F6251C8978FE97_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};

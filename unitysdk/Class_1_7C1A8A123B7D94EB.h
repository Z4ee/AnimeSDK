#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_7C1A8A123B7D94EB__CTOR_OFFSET UNITYSDK_OFFSET(0x9268A70)

inline static constexpr unsigned int Class_1_7C1A8A123B7D94EB_TypeDefinitionIndex = 47894;

class Class_1_7C1A8A123B7D94EB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_0; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Boolean Field_1_5; // 0x2C
	::UnityEngine::Vector3 Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C1A8A123B7D94EB__CTOR_OFFSET))(this);
	}
};

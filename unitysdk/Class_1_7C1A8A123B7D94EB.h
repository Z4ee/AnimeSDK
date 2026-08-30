#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_7C1A8A123B7D94EB__CTOR_OFFSET UNITYSDK_OFFSET(0x17E09120)

inline static constexpr unsigned int Class_1_7C1A8A123B7D94EB_TypeDefinitionIndex = 52180;

class Class_1_7C1A8A123B7D94EB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* ONDPCNNKLOE; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* KJEBCFIOPHB; // 0x18
	::UnityEngine::Transform* KBBHFADBJCP; // 0x20
	::UnityEngine::Vector3 HDKDECNKEEC; // 0x28
	::System::Boolean AAAHCOIMADJ; // 0x34
	::System::Int32 IGCDCFGJMCL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C1A8A123B7D94EB__CTOR_OFFSET))(this);
	}
};

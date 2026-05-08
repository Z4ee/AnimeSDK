#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_CB33FB1C921481D2_CLASS_1_CFF4DF0CB5B399FB_METHOD_1_1AFB5CFB60E6950D_OFFSET UNITYSDK_OFFSET(0x16628440)
#define CLASS_1_CB33FB1C921481D2_CLASS_1_CFF4DF0CB5B399FB__CTOR_OFFSET UNITYSDK_OFFSET(0x16628430)

inline static constexpr unsigned int Class_1_CB33FB1C921481D2_Class_1_CFF4DF0CB5B399FB_TypeDefinitionIndex = 40008;

class Class_1_CB33FB1C921481D2_Class_1_CFF4DF0CB5B399FB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_CLASS_1_CFF4DF0CB5B399FB__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1AFB5CFB60E6950D(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_CLASS_1_CFF4DF0CB5B399FB_METHOD_1_1AFB5CFB60E6950D_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B14C7DE6F3342DD7_METHOD_1_44AB02E8C2CDFE7E_OFFSET UNITYSDK_OFFSET(0x15917190)
#define CLASS_1_B14C7DE6F3342DD7_METHOD_1_E7AB99EDC5373156_OFFSET UNITYSDK_OFFSET(0x15917000)
#define CLASS_1_B14C7DE6F3342DD7__CTOR_OFFSET UNITYSDK_OFFSET(0x15916D80)

inline static constexpr unsigned int Class_1_B14C7DE6F3342DD7_TypeDefinitionIndex = 61704;

class Class_1_B14C7DE6F3342DD7 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_2; // 0x10
	::UnityEngine::Transform* Field_1_0; // 0x18
	::UnityEngine::Transform* Field_1_1; // 0x20

	::System::Void _ctor(::UnityEngine::Transform* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B14C7DE6F3342DD7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E7AB99EDC5373156(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B14C7DE6F3342DD7_METHOD_1_E7AB99EDC5373156_OFFSET))(this, a1);
	}

	::System::Void Method_1_44AB02E8C2CDFE7E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B14C7DE6F3342DD7_METHOD_1_44AB02E8C2CDFE7E_OFFSET))(this, a1);
	}
};

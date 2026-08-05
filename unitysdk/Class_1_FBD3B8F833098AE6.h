#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_1_FBD3B8F833098AE6_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1949D200)
#define CLASS_1_FBD3B8F833098AE6_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1949D0E0)
#define CLASS_1_FBD3B8F833098AE6_METHOD_1_BB71C7423EF47273_OFFSET UNITYSDK_OFFSET(0x1949D150)
#define CLASS_1_FBD3B8F833098AE6__CTOR_OFFSET UNITYSDK_OFFSET(0x1949D0D0)

inline static constexpr unsigned int Class_1_FBD3B8F833098AE6_TypeDefinitionIndex = 55595;

class Class_1_FBD3B8F833098AE6 : public ::System::Object
{
public:
	::UnityEngine::Animation* Field_1_2; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_0; // 0x20

	::System::Void _ctor(::UnityEngine::Animation* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FBD3B8F833098AE6__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBD3B8F833098AE6_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_BB71C7423EF47273(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FBD3B8F833098AE6_METHOD_1_BB71C7423EF47273_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBD3B8F833098AE6_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}
};

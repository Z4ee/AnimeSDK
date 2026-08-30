#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_20045032BB3051FB_METHOD_2_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0x1613EF80)
#define CLASS_2_20045032BB3051FB_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x1613EF20)
#define CLASS_2_20045032BB3051FB__CTOR_OFFSET UNITYSDK_OFFSET(0x1613EFE0)
#define CLASS_2_20045032BB3051FB__ONBIND_OFFSET UNITYSDK_OFFSET(0x1613EE30)

inline static constexpr unsigned int Class_2_20045032BB3051FB_TypeDefinitionIndex = 71356;

class Class_2_20045032BB3051FB : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::UnityEngine::Transform* NNAKHMJLJPH; // 0x60
	::UnityEngine::Transform* IMCHJKBFJJC; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20045032BB3051FB__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20045032BB3051FB__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20045032BB3051FB_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20045032BB3051FB_METHOD_2_078D85152011B919_1_OFFSET))(this);
	}
};

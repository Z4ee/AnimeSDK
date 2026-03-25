#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_397E33E6745ABD56_METHOD_2_DD0FF11CF4C6DAB1_OFFSET UNITYSDK_OFFSET(0x110D8CE0)
#define CLASS_2_397E33E6745ABD56__CTOR_OFFSET UNITYSDK_OFFSET(0x110D8FD0)
#define CLASS_2_397E33E6745ABD56__ONBIND_OFFSET UNITYSDK_OFFSET(0x110D8BD0)
#define CLASS_2_397E33E6745ABD56___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x110D9000)

inline static constexpr unsigned int Class_2_397E33E6745ABD56_TypeDefinitionIndex = 58729;

class Class_2_397E33E6745ABD56 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_3; // 0x0
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	::UnityEngine::Transform* Field_2_0; // 0x60
	::UnityEngine::RectTransform* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_1; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397E33E6745ABD56__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397E33E6745ABD56__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_DD0FF11CF4C6DAB1(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_397E33E6745ABD56_METHOD_2_DD0FF11CF4C6DAB1_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397E33E6745ABD56___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};

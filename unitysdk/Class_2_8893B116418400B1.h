#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_8893B116418400B1_METHOD_2_A72EC42B275515D0_OFFSET UNITYSDK_OFFSET(0xA7EFF60)
#define CLASS_2_8893B116418400B1__CTOR_OFFSET UNITYSDK_OFFSET(0xA7F01A0)
#define CLASS_2_8893B116418400B1__ONBIND_OFFSET UNITYSDK_OFFSET(0xA7EFED0)
#define CLASS_2_8893B116418400B1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA7F01D0)

inline static constexpr unsigned int Class_2_8893B116418400B1_TypeDefinitionIndex = 66985;

class Class_2_8893B116418400B1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Transform* Field_2_1; // 0x60
	::UnityEngine::Transform* Field_2_2; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8893B116418400B1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8893B116418400B1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_A72EC42B275515D0(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8893B116418400B1_METHOD_2_A72EC42B275515D0_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8893B116418400B1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};

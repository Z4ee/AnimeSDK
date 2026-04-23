#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_A59D996EA4C786B3_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0x9311CE0)
#define CLASS_2_A59D996EA4C786B3_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x9311C50)
#define CLASS_2_A59D996EA4C786B3__CTOR_OFFSET UNITYSDK_OFFSET(0x9311D90)
#define CLASS_2_A59D996EA4C786B3__ONBIND_OFFSET UNITYSDK_OFFSET(0x9311B80)
#define CLASS_2_A59D996EA4C786B3___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x9311DC0)

inline static constexpr unsigned int Class_2_A59D996EA4C786B3_TypeDefinitionIndex = 66645;

class Class_2_A59D996EA4C786B3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Animation* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::UnityEngine::UI::Image* Field_2_2; // 0x70
	::System::Nullable_1<::System::Boolean> Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A59D996EA4C786B3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A59D996EA4C786B3__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A59D996EA4C786B3_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0CFDB5F5B1DB2D6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A59D996EA4C786B3_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A59D996EA4C786B3___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};

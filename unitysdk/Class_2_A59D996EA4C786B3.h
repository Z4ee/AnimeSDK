#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_A59D996EA4C786B3_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0xB74B7D0)
#define CLASS_2_A59D996EA4C786B3_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xB74B740)
#define CLASS_2_A59D996EA4C786B3__CTOR_OFFSET UNITYSDK_OFFSET(0xB74B880)
#define CLASS_2_A59D996EA4C786B3__ONBIND_OFFSET UNITYSDK_OFFSET(0xB74B670)

inline static constexpr unsigned int Class_2_A59D996EA4C786B3_TypeDefinitionIndex = 72267;

class Class_2_A59D996EA4C786B3 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
	::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x68
	::UnityEngine::Transform* GHGAKNDLKGM; // 0x70
	::System::Nullable_1<::System::Boolean> IAPJFCPEOBL; // 0x78

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
};

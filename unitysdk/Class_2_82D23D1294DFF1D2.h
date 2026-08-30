#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/System/Nullable_1.h"

namespace UnityEngine { class Animation; }

#define CLASS_2_82D23D1294DFF1D2_METHOD_2_6EF9EB98D700CE7D_OFFSET UNITYSDK_OFFSET(0x152278F0)
#define CLASS_2_82D23D1294DFF1D2__CTOR_OFFSET UNITYSDK_OFFSET(0x15227A10)
#define CLASS_2_82D23D1294DFF1D2__ONBIND_OFFSET UNITYSDK_OFFSET(0x152279B0)

inline static constexpr unsigned int Class_2_82D23D1294DFF1D2_TypeDefinitionIndex = 72279;

class Class_2_82D23D1294DFF1D2 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
	::System::Nullable_1<::System::Boolean> IAPJFCPEOBL; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82D23D1294DFF1D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6EF9EB98D700CE7D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_82D23D1294DFF1D2_METHOD_2_6EF9EB98D700CE7D_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82D23D1294DFF1D2__ONBIND_OFFSET))(this);
	}
};

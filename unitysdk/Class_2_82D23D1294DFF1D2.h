#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/System/Nullable_1.h"

namespace UnityEngine { class Animation; }

#define CLASS_2_82D23D1294DFF1D2_METHOD_2_6EF9EB98D700CE7D_OFFSET UNITYSDK_OFFSET(0x1194B230)
#define CLASS_2_82D23D1294DFF1D2__CTOR_OFFSET UNITYSDK_OFFSET(0x1194B350)
#define CLASS_2_82D23D1294DFF1D2__ONBIND_OFFSET UNITYSDK_OFFSET(0x1194B2F0)
#define CLASS_2_82D23D1294DFF1D2___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1194B380)

inline static constexpr unsigned int Class_2_82D23D1294DFF1D2_TypeDefinitionIndex = 66656;

class Class_2_82D23D1294DFF1D2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Animation* Field_2_1; // 0x60
	::System::Nullable_1<::System::Boolean> Field_2_0; // 0x68

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

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82D23D1294DFF1D2___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};

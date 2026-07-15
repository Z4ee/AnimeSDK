#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/System/Nullable_1.h"

namespace UnityEngine { class Animator; }

#define CLASS_2_2B07AF5D18F465DC_METHOD_2_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x16DA33F0)
#define CLASS_2_2B07AF5D18F465DC__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA34F0)
#define CLASS_2_2B07AF5D18F465DC__ONBIND_OFFSET UNITYSDK_OFFSET(0x16DA3390)

inline static constexpr unsigned int Class_2_2B07AF5D18F465DC_TypeDefinitionIndex = 68371;

class Class_2_2B07AF5D18F465DC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Animator* Field_2_0; // 0x60
	::System::Int32 Field_2_1; // 0x68
	::System::Int32 Field_2_2; // 0x6C
	::System::Nullable_1<::System::Boolean> Field_2_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B07AF5D18F465DC__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B07AF5D18F465DC__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2B07AF5D18F465DC_METHOD_2_1CD1133DC003C11C_OFFSET))(this, a1);
	}
};

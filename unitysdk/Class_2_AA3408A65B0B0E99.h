#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/System/Nullable_1.h"

namespace UnityEngine { class Animator; }

#define CLASS_2_AA3408A65B0B0E99_METHOD_2_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0x87885A0)
#define CLASS_2_AA3408A65B0B0E99__CTOR_OFFSET UNITYSDK_OFFSET(0x87886B0)
#define CLASS_2_AA3408A65B0B0E99__ONBIND_OFFSET UNITYSDK_OFFSET(0x87884F0)
#define CLASS_2_AA3408A65B0B0E99___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8788720)

inline static constexpr unsigned int Class_2_AA3408A65B0B0E99_TypeDefinitionIndex = 58670;

class Class_2_AA3408A65B0B0E99 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Animator* Field_2_1; // 0x60
	::System::Nullable_1<::System::Boolean> Field_2_0; // 0x68
	::System::Int32 Field_2_3; // 0x6C
	::System::Int32 Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA3408A65B0B0E99__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA3408A65B0B0E99__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AA3408A65B0B0E99_METHOD_2_60451B2DE9D371C9_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA3408A65B0B0E99___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};

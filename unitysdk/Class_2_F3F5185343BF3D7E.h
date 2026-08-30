#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_F3F5185343BF3D7E_METHOD_2_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x17032F30)
#define CLASS_2_F3F5185343BF3D7E_METHOD_2_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x17033140)
#define CLASS_2_F3F5185343BF3D7E__CTOR_OFFSET UNITYSDK_OFFSET(0x170331D0)
#define CLASS_2_F3F5185343BF3D7E__ONBIND_OFFSET UNITYSDK_OFFSET(0x17032ED0)

inline static constexpr unsigned int Class_2_F3F5185343BF3D7E_TypeDefinitionIndex = 71785;

class Class_2_F3F5185343BF3D7E : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* CJONLJJPLJM; // 0x0
	// static const ::System::String* JHNBEJJJLCO; // 0x0
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
	::System::Boolean AKBPNMEFGAO; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F5185343BF3D7E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3F5185343BF3D7E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F3F5185343BF3D7E_METHOD_2_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F3F5185343BF3D7E_METHOD_2_848FDD59AB054F3D_OFFSET))(this, a1);
	}
};

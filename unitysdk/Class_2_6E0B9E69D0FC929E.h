#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_6E0B9E69D0FC929E_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x118EE3C0)
#define CLASS_2_6E0B9E69D0FC929E_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x118EE4B0)
#define CLASS_2_6E0B9E69D0FC929E_METHOD_2_3DFCA4C89D58D97F_OFFSET UNITYSDK_OFFSET(0x118EE300)
#define CLASS_2_6E0B9E69D0FC929E_METHOD_2_9D86A9A378EEE9C7_OFFSET UNITYSDK_OFFSET(0x118EE290)
#define CLASS_2_6E0B9E69D0FC929E__CTOR_OFFSET UNITYSDK_OFFSET(0x118EE560)
#define CLASS_2_6E0B9E69D0FC929E__ONBIND_OFFSET UNITYSDK_OFFSET(0x118EE230)
#define CLASS_2_6E0B9E69D0FC929E___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x118EE590)

inline static constexpr unsigned int Class_2_6E0B9E69D0FC929E_TypeDefinitionIndex = 66327;

class Class_2_6E0B9E69D0FC929E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::UnityEngine::Animation* Field_2_1; // 0x60
	::UnityEngine::GameObject* Field_2_0; // 0x68
	::System::Boolean Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E0B9E69D0FC929E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E0B9E69D0FC929E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9D86A9A378EEE9C7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6E0B9E69D0FC929E_METHOD_2_9D86A9A378EEE9C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E0B9E69D0FC929E_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6E0B9E69D0FC929E_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_3DFCA4C89D58D97F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6E0B9E69D0FC929E_METHOD_2_3DFCA4C89D58D97F_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E0B9E69D0FC929E___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};

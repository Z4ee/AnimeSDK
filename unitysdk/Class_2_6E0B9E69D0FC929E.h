#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_6E0B9E69D0FC929E_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xCFA15B0)
#define CLASS_2_6E0B9E69D0FC929E_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0xCFA16A0)
#define CLASS_2_6E0B9E69D0FC929E_METHOD_2_3DFCA4C89D58D97F_OFFSET UNITYSDK_OFFSET(0xCFA14F0)
#define CLASS_2_6E0B9E69D0FC929E_METHOD_2_9D86A9A378EEE9C7_OFFSET UNITYSDK_OFFSET(0xCFA1480)
#define CLASS_2_6E0B9E69D0FC929E__CTOR_OFFSET UNITYSDK_OFFSET(0xCFA1740)
#define CLASS_2_6E0B9E69D0FC929E__ONBIND_OFFSET UNITYSDK_OFFSET(0xCFA1420)

inline static constexpr unsigned int Class_2_6E0B9E69D0FC929E_TypeDefinitionIndex = 71929;

class Class_2_6E0B9E69D0FC929E : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* AILCOOFIDPG; // 0x0
	// static const ::System::String* IIPEBGKKNLC; // 0x0
	// static const ::System::String* BIAMKKCKMLG; // 0x0
	// static const ::System::String* FHDKPLKOEAD; // 0x0
	::UnityEngine::Animation* PMOJILOJEPE; // 0x60
	::UnityEngine::GameObject* ADBCGAPLGOL; // 0x68
	::System::Boolean FMNEEONAMNO; // 0x70

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
};

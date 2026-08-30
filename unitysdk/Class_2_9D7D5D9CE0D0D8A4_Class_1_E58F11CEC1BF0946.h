#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class Class_1_303D5A33D1401D59;

#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_E58F11CEC1BF0946_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x160EF020)
#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_E58F11CEC1BF0946_METHOD_1_3B899891800169B0_OFFSET UNITYSDK_OFFSET(0x160F0210)
#define CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_E58F11CEC1BF0946__CTOR_OFFSET UNITYSDK_OFFSET(0x160F3330)

inline static constexpr unsigned int Class_2_9D7D5D9CE0D0D8A4_Class_1_E58F11CEC1BF0946_TypeDefinitionIndex = 60725;

class Class_2_9D7D5D9CE0D0D8A4_Class_1_E58F11CEC1BF0946 : public ::System::Object
{
public:
	::Class_1_303D5A33D1401D59* DMOKGPMOFGM; // 0x10
	::System::Boolean LIKCBPAJJFN; // 0x18
	::UnityEngine::Matrix4x4 HGPFBOLEACI; // 0x1C

	::System::Void _ctor(::Class_1_303D5A33D1401D59* a1, ::UnityEngine::Matrix4x4 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::UnityEngine::Matrix4x4, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_E58F11CEC1BF0946__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3B899891800169B0(::UnityEngine::Matrix4x4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_E58F11CEC1BF0946_METHOD_1_3B899891800169B0_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D7D5D9CE0D0D8A4_CLASS_1_E58F11CEC1BF0946_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}
};

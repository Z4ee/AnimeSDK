#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_4.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_2_031991D44AAD700C_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB38F5C0)
#define CLASS_2_031991D44AAD700C_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB38F690)
#define CLASS_2_031991D44AAD700C_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xB38F170)
#define CLASS_2_031991D44AAD700C_METHOD_2_77E3CF907BA6F8B7_OFFSET UNITYSDK_OFFSET(0xB38F3F0)
#define CLASS_2_031991D44AAD700C_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0xB38F4C0)
#define CLASS_2_031991D44AAD700C_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0xB38F220)
#define CLASS_2_031991D44AAD700C_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xB38F330)
#define CLASS_2_031991D44AAD700C__CTOR_OFFSET UNITYSDK_OFFSET(0xB38F730)
#define CLASS_2_031991D44AAD700C__ONBIND_OFFSET UNITYSDK_OFFSET(0xB38F110)

inline static constexpr unsigned int Class_2_031991D44AAD700C_TypeDefinitionIndex = 71815;

class Class_2_031991D44AAD700C : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::UnityEngine::Animator* APPGGMLEPLN; // 0x60
	::System::Int32 LFKAMKNIJKN; // 0x68
	::System::Int32 PFJFHHIGEGO; // 0x6C
	::System::Boolean BHCPLIFADEN; // 0x70
	::System::Boolean AKBPNMEFGAO; // 0x71
	::System::Int32 EBAKNDKIBNB; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_031991D44AAD700C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_031991D44AAD700C__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_031991D44AAD700C_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_031991D44AAD700C_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_031991D44AAD700C_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_77E3CF907BA6F8B7(::Enum_3_ED790DAC948A65A9_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_4))((::PBYTE)hIl2Cpp + CLASS_2_031991D44AAD700C_METHOD_2_77E3CF907BA6F8B7_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_031991D44AAD700C_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_031991D44AAD700C_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_031991D44AAD700C_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

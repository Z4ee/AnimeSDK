#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_0AF9CB237A7F0501;
class Class_2_A80FFA2F42BC210A;
class Class_2_C76B8E50300524A0;
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_CFEDE77CE6B2789D_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x123903D0)
#define CLASS_2_CFEDE77CE6B2789D_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x123905C0)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x12390140)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x123901B0)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x123900F0)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12390810)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x12390310)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_C58BA76DADC5F97D_OFFSET UNITYSDK_OFFSET(0x12390240)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x12390870)
#define CLASS_2_CFEDE77CE6B2789D__CTOR_OFFSET UNITYSDK_OFFSET(0x12390770)
#define CLASS_2_CFEDE77CE6B2789D__ONBIND_OFFSET UNITYSDK_OFFSET(0x12390020)
#define CLASS_2_CFEDE77CE6B2789D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x123908E0)
#define CLASS_2_CFEDE77CE6B2789D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x12390940)
#define CLASS_2_CFEDE77CE6B2789D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x123907B0)

inline static constexpr unsigned int Class_2_CFEDE77CE6B2789D_TypeDefinitionIndex = 66036;

class Class_2_CFEDE77CE6B2789D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	::UnityEngine::Animation* Field_2_0; // 0x60
	::Class_2_0AF9CB237A7F0501* Field_2_3; // 0x68
	::UnityEngine::Animation* Field_2_4; // 0x70
	::Class_2_C76B8E50300524A0* Field_2_2; // 0x78
	::Class_2_A80FFA2F42BC210A* Field_2_1; // 0x80
	::System::Boolean Field_2_5; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_C58BA76DADC5F97D(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_METHOD_2_C58BA76DADC5F97D_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

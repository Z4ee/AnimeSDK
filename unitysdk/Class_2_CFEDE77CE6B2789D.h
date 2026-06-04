#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_A80FFA2F42BC210A;
class Class_2_C41EA7620AD7D128;
class Class_2_C76B8E50300524A0;
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_CFEDE77CE6B2789D_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCECEF40)
#define CLASS_2_CFEDE77CE6B2789D_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCECF150)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_19CCC07C980409E4_1_OFFSET UNITYSDK_OFFSET(0xCECED40)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xCECECD0)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xCECEC80)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xCECF3C0)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xCECEEA0)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_C58BA76DADC5F97D_OFFSET UNITYSDK_OFFSET(0xCECEDD0)
#define CLASS_2_CFEDE77CE6B2789D_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0xCECF420)
#define CLASS_2_CFEDE77CE6B2789D__CTOR_OFFSET UNITYSDK_OFFSET(0xCECF320)
#define CLASS_2_CFEDE77CE6B2789D__ONBIND_OFFSET UNITYSDK_OFFSET(0xCECEBB0)
#define CLASS_2_CFEDE77CE6B2789D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCECF480)
#define CLASS_2_CFEDE77CE6B2789D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCECF4E0)
#define CLASS_2_CFEDE77CE6B2789D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xCECF360)

inline static constexpr unsigned int Class_2_CFEDE77CE6B2789D_TypeDefinitionIndex = 66969;

class Class_2_CFEDE77CE6B2789D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::Class_2_A80FFA2F42BC210A* Field_2_3; // 0x60
	::UnityEngine::Animation* Field_2_4; // 0x68
	::UnityEngine::Animation* Field_2_5; // 0x70
	::Class_2_C41EA7620AD7D128* Field_2_6; // 0x78
	::Class_2_C76B8E50300524A0* Field_2_7; // 0x80
	::System::Boolean Field_2_8; // 0x88

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

	::System::Void Method_2_19CCC07C980409E4_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_METHOD_2_19CCC07C980409E4_1_OFFSET))(this, a1);
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

	::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CFEDE77CE6B2789D_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
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

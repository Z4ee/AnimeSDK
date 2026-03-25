#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_23F67DD15593C8D6;
class Class_1_8279BFFA57BC2D0E;
class Class_2_6AA87DFE3140AF51;
namespace RPG::Client { class PrefabLoadMeta; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_2_47C05B055FCC48B3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1068F510)
#define CLASS_2_47C05B055FCC48B3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1068F5D0)
#define CLASS_2_47C05B055FCC48B3_METHOD_2_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x1068EDA0)
#define CLASS_2_47C05B055FCC48B3_METHOD_2_50CCDD1FE0CC143C_OFFSET UNITYSDK_OFFSET(0x1068EAF0)
#define CLASS_2_47C05B055FCC48B3_METHOD_2_538009D0B11159B3_OFFSET UNITYSDK_OFFSET(0x1068E9D0)
#define CLASS_2_47C05B055FCC48B3_METHOD_2_76E4E7F209D84980_OFFSET UNITYSDK_OFFSET(0x1068EA80)
#define CLASS_2_47C05B055FCC48B3_METHOD_2_7F9D0B78E96BFB0E_OFFSET UNITYSDK_OFFSET(0x1068E8F0)
#define CLASS_2_47C05B055FCC48B3_METHOD_2_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x1068EF00)
#define CLASS_2_47C05B055FCC48B3_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x1068F0B0)
#define CLASS_2_47C05B055FCC48B3_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1068F400)
#define CLASS_2_47C05B055FCC48B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1068F670)
#define CLASS_2_47C05B055FCC48B3__ONBIND_OFFSET UNITYSDK_OFFSET(0x1068E590)
#define CLASS_2_47C05B055FCC48B3___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1068F820)
#define CLASS_2_47C05B055FCC48B3___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1068F880)
#define CLASS_2_47C05B055FCC48B3___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1068F7C0)

inline static constexpr unsigned int Class_2_47C05B055FCC48B3_TypeDefinitionIndex = 59133;

class Class_2_47C05B055FCC48B3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::UInt32 Field_2_5 = 0x3; // 0x0
	// static const ::System::Single Field_2_6; // 0x0
	// static const ::System::Single Field_2_7; // 0x0
	// static const ::System::Single Field_2_8; // 0x0
	::System::Collections::Generic::Queue_1<::Class_1_8279BFFA57BC2D0E*>* Field_2_2; // 0x60
	::RPG::Client::PrefabLoadMeta* Field_2_0; // 0x68
	::System::Collections::Generic::Stack_1<::Class_2_6AA87DFE3140AF51*>* Field_2_1; // 0x70
	::Class_1_23F67DD15593C8D6* Field_2_4; // 0x78
	::System::Collections::Generic::Queue_1<::Class_2_6AA87DFE3140AF51*>* Field_2_3; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C05B055FCC48B3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C05B055FCC48B3__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_7F9D0B78E96BFB0E(::Class_2_6AA87DFE3140AF51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6AA87DFE3140AF51*))((::PBYTE)hIl2Cpp + CLASS_2_47C05B055FCC48B3_METHOD_2_7F9D0B78E96BFB0E_OFFSET))(this, a1);
	}

	::System::Void Method_2_538009D0B11159B3(::Class_1_8279BFFA57BC2D0E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8279BFFA57BC2D0E*))((::PBYTE)hIl2Cpp + CLASS_2_47C05B055FCC48B3_METHOD_2_538009D0B11159B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_76E4E7F209D84980(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_47C05B055FCC48B3_METHOD_2_76E4E7F209D84980_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_50CCDD1FE0CC143C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C05B055FCC48B3_METHOD_2_50CCDD1FE0CC143C_OFFSET))(this);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C05B055FCC48B3_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C05B055FCC48B3_METHOD_2_28C834B59E1D0120_OFFSET))(this);
	}

	::System::Void Method_2_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C05B055FCC48B3_METHOD_2_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_47C05B055FCC48B3_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C05B055FCC48B3_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C05B055FCC48B3_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C05B055FCC48B3___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C05B055FCC48B3___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C05B055FCC48B3___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

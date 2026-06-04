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

#define CLASS_2_2E24E31B9E151332_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF1B500)
#define CLASS_2_2E24E31B9E151332_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAF1B5F0)
#define CLASS_2_2E24E31B9E151332_METHOD_2_50CCDD1FE0CC143C_OFFSET UNITYSDK_OFFSET(0xAF1AAA0)
#define CLASS_2_2E24E31B9E151332_METHOD_2_6F03F79E54DE121E_OFFSET UNITYSDK_OFFSET(0xAF1AD60)
#define CLASS_2_2E24E31B9E151332_METHOD_2_76E4E7F209D84980_OFFSET UNITYSDK_OFFSET(0xAF1AA30)
#define CLASS_2_2E24E31B9E151332_METHOD_2_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0xAF1AEE0)
#define CLASS_2_2E24E31B9E151332_METHOD_2_7F9D0B78E96BFB0E_OFFSET UNITYSDK_OFFSET(0xAF1A890)
#define CLASS_2_2E24E31B9E151332_METHOD_2_9A6D1D47E588E644_OFFSET UNITYSDK_OFFSET(0xAF1A970)
#define CLASS_2_2E24E31B9E151332_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0xAF1B0C0)
#define CLASS_2_2E24E31B9E151332_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xAF1B440)
#define CLASS_2_2E24E31B9E151332__CTOR_OFFSET UNITYSDK_OFFSET(0xAF1B6C0)
#define CLASS_2_2E24E31B9E151332__ONBIND_OFFSET UNITYSDK_OFFSET(0xAF1A3B0)
#define CLASS_2_2E24E31B9E151332___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAF1B870)
#define CLASS_2_2E24E31B9E151332___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAF1B8D0)
#define CLASS_2_2E24E31B9E151332___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAF1B810)

inline static constexpr unsigned int Class_2_2E24E31B9E151332_TypeDefinitionIndex = 67464;

class Class_2_2E24E31B9E151332 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::UInt32 Field_2_0 = 0x3; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	// static const ::System::Single Field_2_3; // 0x0
	::System::Collections::Generic::Queue_1<::Class_1_8279BFFA57BC2D0E*>* Field_2_4; // 0x60
	::System::Collections::Generic::Stack_1<::Class_2_6AA87DFE3140AF51*>* Field_2_5; // 0x68
	::System::Collections::Generic::Queue_1<::Class_2_6AA87DFE3140AF51*>* Field_2_6; // 0x70
	::RPG::Client::PrefabLoadMeta* Field_2_7; // 0x78
	::Class_1_23F67DD15593C8D6* Field_2_8; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_7F9D0B78E96BFB0E(::Class_2_6AA87DFE3140AF51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6AA87DFE3140AF51*))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332_METHOD_2_7F9D0B78E96BFB0E_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A6D1D47E588E644(::Class_1_8279BFFA57BC2D0E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8279BFFA57BC2D0E*))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332_METHOD_2_9A6D1D47E588E644_OFFSET))(this, a1);
	}

	::System::Void Method_2_76E4E7F209D84980(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332_METHOD_2_76E4E7F209D84980_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_50CCDD1FE0CC143C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332_METHOD_2_50CCDD1FE0CC143C_OFFSET))(this);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_2_6F03F79E54DE121E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332_METHOD_2_6F03F79E54DE121E_OFFSET))(this);
	}

	::System::Void Method_2_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332_METHOD_2_7E1BADD1D133FA1C_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

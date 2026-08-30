#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_23F67DD15593C8D6;
class Class_1_8279BFFA57BC2D0E;
class Class_2_6AA87DFE3140AF51;
namespace RPG::Client { class PrefabLoadMeta; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_2_2E24E31B9E151332_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x198E4420)
#define CLASS_2_2E24E31B9E151332_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x198E4510)
#define CLASS_2_2E24E31B9E151332_METHOD_2_50CCDD1FE0CC143C_OFFSET UNITYSDK_OFFSET(0x198E39A0)
#define CLASS_2_2E24E31B9E151332_METHOD_2_6F03F79E54DE121E_OFFSET UNITYSDK_OFFSET(0x198E3C50)
#define CLASS_2_2E24E31B9E151332_METHOD_2_76E4E7F209D84980_OFFSET UNITYSDK_OFFSET(0x198E3930)
#define CLASS_2_2E24E31B9E151332_METHOD_2_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0x198E3DD0)
#define CLASS_2_2E24E31B9E151332_METHOD_2_7F9D0B78E96BFB0E_OFFSET UNITYSDK_OFFSET(0x198E3790)
#define CLASS_2_2E24E31B9E151332_METHOD_2_9A6D1D47E588E644_OFFSET UNITYSDK_OFFSET(0x198E3870)
#define CLASS_2_2E24E31B9E151332_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x198E3FB0)
#define CLASS_2_2E24E31B9E151332_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x198E4330)
#define CLASS_2_2E24E31B9E151332__CTOR_OFFSET UNITYSDK_OFFSET(0x198E45E0)
#define CLASS_2_2E24E31B9E151332__ONBIND_OFFSET UNITYSDK_OFFSET(0x198E32B0)

inline static constexpr unsigned int Class_2_2E24E31B9E151332_TypeDefinitionIndex = 72144;

class Class_2_2E24E31B9E151332 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::UInt32 KJOKKLHJNDD = 0x3; // 0x0
	// static const ::System::Single JIJPGDHDJOK; // 0x0
	// static const ::System::Single KPJDILBCFBF; // 0x0
	// static const ::System::Single HCOLAPFKGJN; // 0x0
	::RPG::Client::PrefabLoadMeta* KJMOEBKALPF; // 0x60
	::System::Collections::Generic::Stack_1<::Class_2_6AA87DFE3140AF51*>* ACGCNLDGEBJ; // 0x68
	::Class_1_23F67DD15593C8D6* GAAOODNCNEJ; // 0x70
	::System::Collections::Generic::Queue_1<::Class_2_6AA87DFE3140AF51*>* CCPJFLJECCF; // 0x78
	::System::Collections::Generic::Queue_1<::Class_1_8279BFFA57BC2D0E*>* OPIHGPHHBDB; // 0x80

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

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E24E31B9E151332_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

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

#define CLASS_2_2E24E31B9E151332_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15EA0500)
#define CLASS_2_2E24E31B9E151332_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15EA05F0)
#define CLASS_2_2E24E31B9E151332_METHOD_2_50CCDD1FE0CC143C_OFFSET UNITYSDK_OFFSET(0x15E9FA80)
#define CLASS_2_2E24E31B9E151332_METHOD_2_6F03F79E54DE121E_OFFSET UNITYSDK_OFFSET(0x15E9FD30)
#define CLASS_2_2E24E31B9E151332_METHOD_2_76E4E7F209D84980_OFFSET UNITYSDK_OFFSET(0x15E9FA10)
#define CLASS_2_2E24E31B9E151332_METHOD_2_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0x15E9FEB0)
#define CLASS_2_2E24E31B9E151332_METHOD_2_7F9D0B78E96BFB0E_OFFSET UNITYSDK_OFFSET(0x15E9F870)
#define CLASS_2_2E24E31B9E151332_METHOD_2_9A6D1D47E588E644_OFFSET UNITYSDK_OFFSET(0x15E9F950)
#define CLASS_2_2E24E31B9E151332_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x15EA0090)
#define CLASS_2_2E24E31B9E151332_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x15EA0410)
#define CLASS_2_2E24E31B9E151332__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA06C0)
#define CLASS_2_2E24E31B9E151332__ONBIND_OFFSET UNITYSDK_OFFSET(0x15E9F380)

inline static constexpr unsigned int Class_2_2E24E31B9E151332_TypeDefinitionIndex = 68945;

class Class_2_2E24E31B9E151332 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::UInt32 Field_2_0 = 0x3; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	// static const ::System::Single Field_2_3; // 0x0
	::System::Collections::Generic::Queue_1<::Class_2_6AA87DFE3140AF51*>* Field_2_4; // 0x60
	::System::Collections::Generic::Stack_1<::Class_2_6AA87DFE3140AF51*>* Field_2_5; // 0x68
	::Class_1_23F67DD15593C8D6* Field_2_6; // 0x70
	::System::Collections::Generic::Queue_1<::Class_1_8279BFFA57BC2D0E*>* Field_2_7; // 0x78
	::RPG::Client::PrefabLoadMeta* Field_2_8; // 0x80

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

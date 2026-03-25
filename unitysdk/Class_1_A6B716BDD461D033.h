#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E59E664392939D7E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A6B716BDD461D033_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x109877B0)
#define CLASS_1_A6B716BDD461D033_METHOD_1_5110E061C0DF5692_OFFSET UNITYSDK_OFFSET(0x10987600)
#define CLASS_1_A6B716BDD461D033_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x10987850)
#define CLASS_1_A6B716BDD461D033_METHOD_1_952453844D88CADD_OFFSET UNITYSDK_OFFSET(0x10987740)
#define CLASS_1_A6B716BDD461D033_METHOD_1_D31158F0CD6D711E_OFFSET UNITYSDK_OFFSET(0x10987510)
#define CLASS_1_A6B716BDD461D033_METHOD_1_F2B94768004EB1C1_OFFSET UNITYSDK_OFFSET(0x109873B0)
#define CLASS_1_A6B716BDD461D033__CTOR_OFFSET UNITYSDK_OFFSET(0x10987490)

inline static constexpr unsigned int Class_1_A6B716BDD461D033_TypeDefinitionIndex = 57076;

class Class_1_A6B716BDD461D033 : public ::System::Object
{
public:
	static ::Class_1_A6B716BDD461D033** StaticGet_Field_1_0()
	{
		return (::Class_1_A6B716BDD461D033**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6B716BDD461D033_TypeDefinitionIndex)->GetStaticField(0x41010);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E59E664392939D7E*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6B716BDD461D033__CTOR_OFFSET))(this);
	}

	static ::Class_1_A6B716BDD461D033* Method_1_F2B94768004EB1C1()
	{
		return ((::Class_1_A6B716BDD461D033*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6B716BDD461D033_METHOD_1_F2B94768004EB1C1_OFFSET))();
	}

	::Class_1_E59E664392939D7E* Method_1_D31158F0CD6D711E(::System::String* a1)
	{
		return ((::Class_1_E59E664392939D7E*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6B716BDD461D033_METHOD_1_D31158F0CD6D711E_OFFSET))(this, a1);
	}

	::System::Void Method_1_5110E061C0DF5692(::Class_1_E59E664392939D7E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E59E664392939D7E*))((::PBYTE)hIl2Cpp + CLASS_1_A6B716BDD461D033_METHOD_1_5110E061C0DF5692_OFFSET))(this, a1);
	}

	::System::Void Method_1_952453844D88CADD(::Class_1_E59E664392939D7E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E59E664392939D7E*))((::PBYTE)hIl2Cpp + CLASS_1_A6B716BDD461D033_METHOD_1_952453844D88CADD_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6B716BDD461D033_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6B716BDD461D033_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}
};

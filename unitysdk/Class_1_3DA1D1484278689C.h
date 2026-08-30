#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3DA1D1484278689C_ReceiveMode.h"
#include "unitysdk/System/Object.h"

class Class_1_78A7ED2C7E071DF9;
class Class_1_DDEA15C15400616B;
class Class_3_9F40BD36E5F30CAE;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3DA1D1484278689C_METHOD_1_05EE12C63B704E40_OFFSET UNITYSDK_OFFSET(0x1C098630)
#define CLASS_1_3DA1D1484278689C_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x1C0981B0)
#define CLASS_1_3DA1D1484278689C_METHOD_1_F2ADD6F25E60952D_OFFSET UNITYSDK_OFFSET(0x1C098380)
#define CLASS_1_3DA1D1484278689C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0980F0)

inline static constexpr unsigned int Class_1_3DA1D1484278689C_TypeDefinitionIndex = 36215;

class Class_1_3DA1D1484278689C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_78A7ED2C7E071DF9*>* HJDCJIJJFCH; // 0x10
	::System::Action_1<::Class_1_78A7ED2C7E071DF9*>* MHGNKLFKMHA; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* AHGGAFJBEPH; // 0x20
	::Class_3_9F40BD36E5F30CAE* FLMODBLFAGD; // 0x28
	::System::Action_1<::Class_1_78A7ED2C7E071DF9*>* IFGNNFBOGIA; // 0x30
	::Class_1_3DA1D1484278689C_ReceiveMode NMLENCDBHAA; // 0x38

	::System::Void _ctor(::Class_3_9F40BD36E5F30CAE* a1, ::System::Action_1<::Class_1_78A7ED2C7E071DF9*>* a2, ::System::Action_1<::Class_1_78A7ED2C7E071DF9*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9F40BD36E5F30CAE*, ::System::Action_1<::Class_1_78A7ED2C7E071DF9*>*, ::System::Action_1<::Class_1_78A7ED2C7E071DF9*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DA1D1484278689C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_DDEA15C15400616B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDEA15C15400616B*))((::PBYTE)hIl2Cpp + CLASS_1_3DA1D1484278689C_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_05EE12C63B704E40(::Class_1_78A7ED2C7E071DF9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_78A7ED2C7E071DF9*))((::PBYTE)hIl2Cpp + CLASS_1_3DA1D1484278689C_METHOD_1_05EE12C63B704E40_OFFSET))(this, a1);
	}

	::Class_1_78A7ED2C7E071DF9* Method_1_F2ADD6F25E60952D(::System::Collections::Generic::List_1<::Class_1_78A7ED2C7E071DF9*>* a1)
	{
		return ((::Class_1_78A7ED2C7E071DF9*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_78A7ED2C7E071DF9*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DA1D1484278689C_METHOD_1_F2ADD6F25E60952D_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3DA1D1484278689C_ReceiveMode.h"
#include "unitysdk/System/Object.h"

class Class_1_B9F5BC78FB41D3C3;
class Class_1_DDEA15C15400616B;
class Class_3_C66DEDBB208C643C;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3DA1D1484278689C_METHOD_1_251904A09062A162_OFFSET UNITYSDK_OFFSET(0x17D39AF0)
#define CLASS_1_3DA1D1484278689C_METHOD_1_494534CC89DF3AF5_OFFSET UNITYSDK_OFFSET(0x17D39D90)
#define CLASS_1_3DA1D1484278689C_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x17D398F0)
#define CLASS_1_3DA1D1484278689C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D39830)

inline static constexpr unsigned int Class_1_3DA1D1484278689C_TypeDefinitionIndex = 34404;

class Class_1_3DA1D1484278689C : public ::System::Object
{
public:
	::Class_3_C66DEDBB208C643C* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_1_B9F5BC78FB41D3C3*>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x20
	::System::Action_1<::Class_1_B9F5BC78FB41D3C3*>* Field_1_2; // 0x28
	::System::Action_1<::Class_1_B9F5BC78FB41D3C3*>* Field_1_1; // 0x30
	::Class_1_3DA1D1484278689C_ReceiveMode Field_1_0; // 0x38

	::System::Void _ctor(::Class_3_C66DEDBB208C643C* a1, ::System::Action_1<::Class_1_B9F5BC78FB41D3C3*>* a2, ::System::Action_1<::Class_1_B9F5BC78FB41D3C3*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C66DEDBB208C643C*, ::System::Action_1<::Class_1_B9F5BC78FB41D3C3*>*, ::System::Action_1<::Class_1_B9F5BC78FB41D3C3*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DA1D1484278689C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_DDEA15C15400616B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDEA15C15400616B*))((::PBYTE)hIl2Cpp + CLASS_1_3DA1D1484278689C_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_494534CC89DF3AF5(::Class_1_B9F5BC78FB41D3C3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9F5BC78FB41D3C3*))((::PBYTE)hIl2Cpp + CLASS_1_3DA1D1484278689C_METHOD_1_494534CC89DF3AF5_OFFSET))(this, a1);
	}

	::Class_1_B9F5BC78FB41D3C3* Method_1_251904A09062A162(::System::Collections::Generic::List_1<::Class_1_B9F5BC78FB41D3C3*>* a1)
	{
		return ((::Class_1_B9F5BC78FB41D3C3*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_B9F5BC78FB41D3C3*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DA1D1484278689C_METHOD_1_251904A09062A162_OFFSET))(this, a1);
	}
};

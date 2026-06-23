#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_193;
class Class_0_16E4307DCC419505_257;
class Class_3_DEF6B8E2ED2D1FB3;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A013D4D938AEDF60_METHOD_1_23D70CEE089430BE_OFFSET UNITYSDK_OFFSET(0x12E93B30)
#define CLASS_1_A013D4D938AEDF60_METHOD_1_75D342994F4FD41F_OFFSET UNITYSDK_OFFSET(0x12E94060)
#define CLASS_1_A013D4D938AEDF60_METHOD_1_7D5A4712CC807470_OFFSET UNITYSDK_OFFSET(0x12E93CC0)
#define CLASS_1_A013D4D938AEDF60_METHOD_1_D9D3B397A53C54A4_OFFSET UNITYSDK_OFFSET(0x12E940C0)
#define CLASS_1_A013D4D938AEDF60__CTOR_OFFSET UNITYSDK_OFFSET(0x12E94050)

inline static constexpr unsigned int Class_1_A013D4D938AEDF60_TypeDefinitionIndex = 48365;

class Class_1_A013D4D938AEDF60 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>* Field_1_2; // 0x10
	::Class_3_DEF6B8E2ED2D1FB3* Field_1_1; // 0x18
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A013D4D938AEDF60__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_23D70CEE089430BE(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A013D4D938AEDF60_METHOD_1_23D70CEE089430BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_75D342994F4FD41F(::Class_0_16E4307DCC419505_193*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_193*&))((::PBYTE)hIl2Cpp + CLASS_1_A013D4D938AEDF60_METHOD_1_75D342994F4FD41F_OFFSET))(this, a1);
	}

	static ::Class_1_A013D4D938AEDF60* Method_1_D9D3B397A53C54A4(::Class_3_DEF6B8E2ED2D1FB3* a1, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>* a2)
	{
		return ((::Class_1_A013D4D938AEDF60*(*)(::Class_3_DEF6B8E2ED2D1FB3*, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>*))((::PBYTE)hIl2Cpp + CLASS_1_A013D4D938AEDF60_METHOD_1_D9D3B397A53C54A4_OFFSET))(a1, a2);
	}

	::Class_0_16E4307DCC419505_257* Method_1_7D5A4712CC807470(::Class_3_DEF6B8E2ED2D1FB3* a1, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_257*(*)(::PVOID, ::Class_3_DEF6B8E2ED2D1FB3*, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>*))((::PBYTE)hIl2Cpp + CLASS_1_A013D4D938AEDF60_METHOD_1_7D5A4712CC807470_OFFSET))(this, a1, a2);
	}
};

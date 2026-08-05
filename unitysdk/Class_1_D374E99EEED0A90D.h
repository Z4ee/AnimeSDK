#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_217;
class Class_0_16E4307DCC419505_493;
class Class_3_DEF6B8E2ED2D1FB3;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D374E99EEED0A90D_METHOD_1_65C6D8A8AAB3A53E_OFFSET UNITYSDK_OFFSET(0x17892C20)
#define CLASS_1_D374E99EEED0A90D_METHOD_1_ADDAC32BD715C643_OFFSET UNITYSDK_OFFSET(0x17892A90)
#define CLASS_1_D374E99EEED0A90D_METHOD_1_B095CE20DABD7246_OFFSET UNITYSDK_OFFSET(0x17893060)
#define CLASS_1_D374E99EEED0A90D_METHOD_1_D9D3B397A53C54A4_OFFSET UNITYSDK_OFFSET(0x17892FD0)
#define CLASS_1_D374E99EEED0A90D__CTOR_OFFSET UNITYSDK_OFFSET(0x17892FC0)

inline static constexpr unsigned int Class_1_D374E99EEED0A90D_TypeDefinitionIndex = 52085;

class Class_1_D374E99EEED0A90D : public ::System::Object
{
public:
	::Class_3_DEF6B8E2ED2D1FB3* Field_1_1; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D374E99EEED0A90D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ADDAC32BD715C643(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D374E99EEED0A90D_METHOD_1_ADDAC32BD715C643_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_493* Method_1_65C6D8A8AAB3A53E(::Class_3_DEF6B8E2ED2D1FB3* a1, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_493*(*)(::PVOID, ::Class_3_DEF6B8E2ED2D1FB3*, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>*))((::PBYTE)hIl2Cpp + CLASS_1_D374E99EEED0A90D_METHOD_1_65C6D8A8AAB3A53E_OFFSET))(this, a1, a2);
	}

	static ::Class_1_D374E99EEED0A90D* Method_1_D9D3B397A53C54A4(::Class_3_DEF6B8E2ED2D1FB3* a1, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>* a2)
	{
		return ((::Class_1_D374E99EEED0A90D*(*)(::Class_3_DEF6B8E2ED2D1FB3*, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>*))((::PBYTE)hIl2Cpp + CLASS_1_D374E99EEED0A90D_METHOD_1_D9D3B397A53C54A4_OFFSET))(a1, a2);
	}

	::System::Void Method_1_B095CE20DABD7246(::Class_0_16E4307DCC419505_217*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_217*&))((::PBYTE)hIl2Cpp + CLASS_1_D374E99EEED0A90D_METHOD_1_B095CE20DABD7246_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_152;
class Class_0_16E4307DCC419505_316;
class Class_3_DEF6B8E2ED2D1FB3_4;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D374E99EEED0A90D_METHOD_1_23D70CEE089430BE_OFFSET UNITYSDK_OFFSET(0x18E20D00)
#define CLASS_1_D374E99EEED0A90D_METHOD_1_65C6D8A8AAB3A53E_OFFSET UNITYSDK_OFFSET(0x18E20E90)
#define CLASS_1_D374E99EEED0A90D_METHOD_1_75D342994F4FD41F_OFFSET UNITYSDK_OFFSET(0x18E212D0)
#define CLASS_1_D374E99EEED0A90D_METHOD_1_D9D3B397A53C54A4_OFFSET UNITYSDK_OFFSET(0x18E21240)
#define CLASS_1_D374E99EEED0A90D__CTOR_OFFSET UNITYSDK_OFFSET(0x18E21230)

inline static constexpr unsigned int Class_1_D374E99EEED0A90D_TypeDefinitionIndex = 72795;

class Class_1_D374E99EEED0A90D : public ::System::Object
{
public:
	::Class_3_DEF6B8E2ED2D1FB3_4* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3_4*>* Field_1_2; // 0x18
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D374E99EEED0A90D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_23D70CEE089430BE(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D374E99EEED0A90D_METHOD_1_23D70CEE089430BE_OFFSET))(this, a1);
	}

	static ::Class_1_D374E99EEED0A90D* Method_1_D9D3B397A53C54A4(::Class_3_DEF6B8E2ED2D1FB3_4* a1, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3_4*>* a2)
	{
		return ((::Class_1_D374E99EEED0A90D*(*)(::Class_3_DEF6B8E2ED2D1FB3_4*, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3_4*>*))((::PBYTE)hIl2Cpp + CLASS_1_D374E99EEED0A90D_METHOD_1_D9D3B397A53C54A4_OFFSET))(a1, a2);
	}

	::Class_0_16E4307DCC419505_152* Method_1_65C6D8A8AAB3A53E(::Class_3_DEF6B8E2ED2D1FB3_4* a1, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3_4*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_152*(*)(::PVOID, ::Class_3_DEF6B8E2ED2D1FB3_4*, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3_4*>*))((::PBYTE)hIl2Cpp + CLASS_1_D374E99EEED0A90D_METHOD_1_65C6D8A8AAB3A53E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_75D342994F4FD41F(::Class_0_16E4307DCC419505_316*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_316*&))((::PBYTE)hIl2Cpp + CLASS_1_D374E99EEED0A90D_METHOD_1_75D342994F4FD41F_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_99.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_431.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2DC13AC83C96874A_METHOD_2_BD6AA304BFEAAD46_OFFSET UNITYSDK_OFFSET(0x1331BE10)
#define CLASS_2_2DC13AC83C96874A_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1331BDD0)
#define CLASS_2_2DC13AC83C96874A_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1331C030)
#define CLASS_2_2DC13AC83C96874A_METHOD_2_F3FE4B1C21DCE6C1_OFFSET UNITYSDK_OFFSET(0x1331BDE0)
#define CLASS_2_2DC13AC83C96874A__CTOR_OFFSET UNITYSDK_OFFSET(0x1331BDC0)

inline static constexpr unsigned int Class_2_2DC13AC83C96874A_TypeDefinitionIndex = 14695;

class Class_2_2DC13AC83C96874A : public ::Class_1_5DA2E7556103D5A3_99
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0xA8
	::System::Int32 Field_2_1; // 0xB0

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_431 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_431, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_2DC13AC83C96874A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2DC13AC83C96874A_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_F3FE4B1C21DCE6C1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DC13AC83C96874A_METHOD_2_F3FE4B1C21DCE6C1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_BD6AA304BFEAAD46()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DC13AC83C96874A_METHOD_2_BD6AA304BFEAAD46_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DC13AC83C96874A_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};

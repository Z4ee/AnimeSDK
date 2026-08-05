#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_145.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_602.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2DC13AC83C96874A_METHOD_2_14E82F4A27262E75_OFFSET UNITYSDK_OFFSET(0x18F81490)
#define CLASS_2_2DC13AC83C96874A_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x18F81450)
#define CLASS_2_2DC13AC83C96874A_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18F816B0)
#define CLASS_2_2DC13AC83C96874A_METHOD_2_F3FE4B1C21DCE6C1_OFFSET UNITYSDK_OFFSET(0x18F81460)
#define CLASS_2_2DC13AC83C96874A__CTOR_OFFSET UNITYSDK_OFFSET(0x18F81440)

inline static constexpr unsigned int Class_2_2DC13AC83C96874A_TypeDefinitionIndex = 10765;

class Class_2_2DC13AC83C96874A : public ::Class_1_5DA2E7556103D5A3_145
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0xA8
	::System::Int32 Field_2_0; // 0xB0

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_602 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_602, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_2DC13AC83C96874A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2DC13AC83C96874A_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_F3FE4B1C21DCE6C1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DC13AC83C96874A_METHOD_2_F3FE4B1C21DCE6C1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_14E82F4A27262E75()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DC13AC83C96874A_METHOD_2_14E82F4A27262E75_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DC13AC83C96874A_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};

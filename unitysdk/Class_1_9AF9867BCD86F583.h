#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_1_7BCD0D3615CD642E;

#define CLASS_1_9AF9867BCD86F583_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x17AFCD40)
#define CLASS_1_9AF9867BCD86F583_METHOD_1_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0x17AFC940)
#define CLASS_1_9AF9867BCD86F583_METHOD_1_579786708239FCD6_OFFSET UNITYSDK_OFFSET(0x17AFCB90)
#define CLASS_1_9AF9867BCD86F583_METHOD_1_D40087D928D87F7B_OFFSET UNITYSDK_OFFSET(0x17AFC9C0)
#define CLASS_1_9AF9867BCD86F583_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x17AFBE30)
#define CLASS_1_9AF9867BCD86F583_METHOD_1_E7227A7B42464C09_OFFSET UNITYSDK_OFFSET(0x17AFCA60)
#define CLASS_1_9AF9867BCD86F583_METHOD_1_F3AC50F991E001D9_OFFSET UNITYSDK_OFFSET(0x17AFCC20)
#define CLASS_1_9AF9867BCD86F583__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AFC8C0)
#define CLASS_1_9AF9867BCD86F583__CTOR_OFFSET UNITYSDK_OFFSET(0x17AFC8B0)

inline static constexpr unsigned int Class_1_9AF9867BCD86F583_TypeDefinitionIndex = 35703;

class Class_1_9AF9867BCD86F583 : public ::System::Object
{
public:
	::System::UInt64 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x1C
	::System::Int32 Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::RPG::MVector3 Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AF9867BCD86F583__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9AF9867BCD86F583* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AF9867BCD86F583*))((::PBYTE)hIl2Cpp + CLASS_1_9AF9867BCD86F583__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D40087D928D87F7B(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::UInt64 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9AF9867BCD86F583_METHOD_1_D40087D928D87F7B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_E7227A7B42464C09(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9AF9867BCD86F583_METHOD_1_E7227A7B42464C09_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_579786708239FCD6(::RPG::MVector3 a1, ::System::UInt64 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9AF9867BCD86F583_METHOD_1_579786708239FCD6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F3AC50F991E001D9(::RPG::MVector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9AF9867BCD86F583_METHOD_1_F3AC50F991E001D9_OFFSET))(this, a1, a2);
	}

	::Class_1_9AF9867BCD86F583* Method_1_16E792B668863BDD(::Class_1_9AF9867BCD86F583* a1)
	{
		return ((::Class_1_9AF9867BCD86F583*(*)(::PVOID, ::Class_1_9AF9867BCD86F583*))((::PBYTE)hIl2Cpp + CLASS_1_9AF9867BCD86F583_METHOD_1_16E792B668863BDD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DE45EA3A177BC33B(::Class_1_9AF9867BCD86F583* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AF9867BCD86F583*))((::PBYTE)hIl2Cpp + CLASS_1_9AF9867BCD86F583_METHOD_1_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_7BCD0D3615CD642E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7BCD0D3615CD642E*))((::PBYTE)hIl2Cpp + CLASS_1_9AF9867BCD86F583_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_218ED161703401BD;
class Class_1_5EBE290801EA4DF2;
class Class_2_21055A9FA74B791E;
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_17148030AA2B3E1D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1870AC20)
#define CLASS_2_17148030AA2B3E1D_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x1870AE40)
#define CLASS_2_17148030AA2B3E1D_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1870BD20)
#define CLASS_2_17148030AA2B3E1D_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x1870BC30)
#define CLASS_2_17148030AA2B3E1D_METHOD_2_A4FC9423DE081646_OFFSET UNITYSDK_OFFSET(0x1870BA30)
#define CLASS_2_17148030AA2B3E1D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1870BCD0)
#define CLASS_2_17148030AA2B3E1D_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x1870B950)
#define CLASS_2_17148030AA2B3E1D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1870BD10)
#define CLASS_2_17148030AA2B3E1D_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x1870B850)
#define CLASS_2_17148030AA2B3E1D_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1870B8D0)
#define CLASS_2_17148030AA2B3E1D_TICK_OFFSET UNITYSDK_OFFSET(0x1870B1D0)
#define CLASS_2_17148030AA2B3E1D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1870BD90)
#define CLASS_2_17148030AA2B3E1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1870BD30)

inline static constexpr unsigned int Class_2_17148030AA2B3E1D_TypeDefinitionIndex = 49724;

class Class_2_17148030AA2B3E1D : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17148030AA2B3E1D_TypeDefinitionIndex)->GetStaticField(0xF710);
	}
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17148030AA2B3E1D_TypeDefinitionIndex)->GetStaticField(0xF714);
	}
	::RPG::GameCore::TransformComponent* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_218ED161703401BD*>* Field_2_3; // 0x20
	::Class_2_21055A9FA74B791E* Field_2_4; // 0x28
	::Class_1_218ED161703401BD* Field_2_5; // 0x30
	::System::Collections::Generic::List_1<::Class_1_5EBE290801EA4DF2*>* Field_2_6; // 0x38
	::System::Boolean Field_2_7; // 0x40
	::System::Boolean Field_2_8; // 0x41
	::System::Boolean Field_2_9; // 0x42

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_TICK_OFFSET))(this, a1);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_5EBE290801EA4DF2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5EBE290801EA4DF2*))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A4FC9423DE081646(::Class_1_5EBE290801EA4DF2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5EBE290801EA4DF2*))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_METHOD_2_A4FC9423DE081646_OFFSET))(this, a1);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_218ED161703401BD* Method_2_24748FC20F375725()
	{
		return ((::Class_1_218ED161703401BD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17148030AA2B3E1D_METHOD_2_24748FC20F375725_OFFSET))(this);
	}
};

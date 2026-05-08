#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_688FBF6C0FC439E7_Class_2_2B2DA72811ABBD65.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_A91D80F07F0E8E57_METHOD_3_306557FBC8D140DA_OFFSET UNITYSDK_OFFSET(0x13ADC810)
#define CLASS_3_A91D80F07F0E8E57_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13ADC660)
#define CLASS_3_A91D80F07F0E8E57_METHOD_3_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0x13ADC210)
#define CLASS_3_A91D80F07F0E8E57_METHOD_3_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x13ADC570)
#define CLASS_3_A91D80F07F0E8E57_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x13ADC5C0)
#define CLASS_3_A91D80F07F0E8E57_METHOD_3_9FCF6E4AC6BAD4E7_OFFSET UNITYSDK_OFFSET(0x13ADC200)
#define CLASS_3_A91D80F07F0E8E57_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13ADC780)
#define CLASS_3_A91D80F07F0E8E57_METHOD_3_D760E44660A9C0B6_OFFSET UNITYSDK_OFFSET(0x13ADC2B0)
#define CLASS_3_A91D80F07F0E8E57__CTOR_OFFSET UNITYSDK_OFFSET(0x13ADC1A0)

inline static constexpr unsigned int Class_3_A91D80F07F0E8E57_TypeDefinitionIndex = 47719;

class Class_3_A91D80F07F0E8E57 : public ::Class_1_688FBF6C0FC439E7_Class_2_2B2DA72811ABBD65
{
public:
	::System::String* Field_3_0; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt16>* Field_3_1; // 0x30

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A91D80F07F0E8E57__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt16>* Method_3_9FCF6E4AC6BAD4E7()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A91D80F07F0E8E57_METHOD_3_9FCF6E4AC6BAD4E7_OFFSET))(this);
	}

	::System::Void Method_3_6597F9D2D4A0542F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A91D80F07F0E8E57_METHOD_3_6597F9D2D4A0542F_OFFSET))(this);
	}

	::System::Void Method_3_D760E44660A9C0B6(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A91D80F07F0E8E57_METHOD_3_D760E44660A9C0B6_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A91D80F07F0E8E57_METHOD_3_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A91D80F07F0E8E57_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A91D80F07F0E8E57_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A91D80F07F0E8E57_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_306557FBC8D140DA(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A91D80F07F0E8E57_METHOD_3_306557FBC8D140DA_OFFSET))(this, a1, a2);
	}
};

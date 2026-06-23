#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_5BCD6F6823A1066E.h"

class Class_1_D38A41C10D32116A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_2306013804C6C9F9_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xB7ADC80)
#define CLASS_3_2306013804C6C9F9_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB7ADDE0)
#define CLASS_3_2306013804C6C9F9_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xB7ADD60)
#define CLASS_3_2306013804C6C9F9_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xB7ADA80)
#define CLASS_3_2306013804C6C9F9__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7ADCD0)
#define CLASS_3_2306013804C6C9F9__CTOR_OFFSET UNITYSDK_OFFSET(0xB7ADD50)

inline static constexpr unsigned int Class_3_2306013804C6C9F9_TypeDefinitionIndex = 40950;

class Class_3_2306013804C6C9F9 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0x35; // 0x0
	::System::Collections::Generic::Dictionary_2<::Enum_3_5BCD6F6823A1066E, ::Class_1_D38A41C10D32116A*>* Field_3_0; // 0x48
	::System::Boolean Field_3_1; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2306013804C6C9F9__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2306013804C6C9F9__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2306013804C6C9F9_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2306013804C6C9F9_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_2306013804C6C9F9* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_2306013804C6C9F9*(*)())((::PBYTE)hIl2Cpp + CLASS_3_2306013804C6C9F9_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2306013804C6C9F9_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};

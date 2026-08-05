#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_61A5922E5046F385_6_Struct_2_9FAA954B513974AC.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1_7.h"
#include "unitysdk/Enum_3_190E3717882702BE_7.h"
#include "unitysdk/Enum_3_398BD10BC5EFDB3C.h"

class Class_0_16E4307DCC419505_402;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_61A5922E5046F385_6_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12FBF120)
#define CLASS_3_61A5922E5046F385_6_METHOD_3_792AB6C2A2B589B3_OFFSET UNITYSDK_OFFSET(0x12FBF330)
#define CLASS_3_61A5922E5046F385_6_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12FBF2A0)
#define CLASS_3_61A5922E5046F385_6_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12FBF460)
#define CLASS_3_61A5922E5046F385_6_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12FBF060)
#define CLASS_3_61A5922E5046F385_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FBF170)
#define CLASS_3_61A5922E5046F385_6__CTOR_OFFSET UNITYSDK_OFFSET(0x12FBF1F0)

inline static constexpr unsigned int Class_3_61A5922E5046F385_6_TypeDefinitionIndex = 90366;

class Class_3_61A5922E5046F385_6 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_23 = 0xA9; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_402*>* Field_3_16; // 0x48
	::MoleMole::Battle::Entity* Field_3_2; // 0x50
	::System::Collections::Generic::List_1<::Class_3_61A5922E5046F385_6_Struct_2_9FAA954B513974AC>* Field_3_17; // 0x58
	::MoleMole::Battle::Entity* Field_3_1; // 0x60
	::System::Boolean Field_3_13; // 0x68
	::System::Boolean Field_3_12; // 0x69
	::System::Boolean Field_3_4; // 0x6A
	::System::Boolean Field_3_10; // 0x6B
	::System::Single Field_3_8; // 0x6C
	::Enum_3_190E3717882702BE_7 Field_3_9; // 0x70
	::System::Int32 Field_3_14; // 0x74
	::Enum_3_398BD10BC5EFDB3C Field_3_7; // 0x78
	::System::Boolean Field_3_18; // 0x7C
	::System::Boolean Field_3_5; // 0x7D
	::System::Single Field_3_6; // 0x80
	::Enum_3_121CF606CB7E9CD1_7 Field_3_0; // 0x84
	::System::Boolean Field_3_19; // 0x88
	::System::Boolean Field_3_11; // 0x89
	::System::Boolean Field_3_15; // 0x8A

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_6__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_6_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_6_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_6_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_61A5922E5046F385_6* Method_3_792AB6C2A2B589B3()
	{
		return ((::Class_3_61A5922E5046F385_6*(*)())((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_6_METHOD_3_792AB6C2A2B589B3_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_6_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

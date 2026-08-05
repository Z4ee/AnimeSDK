#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"

class Class_3_7339E2B0B6BCD798_Class_3_690B4E0207F7991E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_7339E2B0B6BCD798_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12D694E0)
#define CLASS_3_7339E2B0B6BCD798_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12D69720)
#define CLASS_3_7339E2B0B6BCD798_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x12D697B0)
#define CLASS_3_7339E2B0B6BCD798_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12D69370)
#define CLASS_3_7339E2B0B6BCD798__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D69530)
#define CLASS_3_7339E2B0B6BCD798__CTOR_OFFSET UNITYSDK_OFFSET(0x12D695B0)

inline static constexpr unsigned int Class_3_7339E2B0B6BCD798_TypeDefinitionIndex = 62522;

class Class_3_7339E2B0B6BCD798 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_5 = 0x4C; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MonsterStrengthType, ::System::Int32>* Field_3_1; // 0x48
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_7; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_0; // 0x58
	::Class_3_7339E2B0B6BCD798_Class_3_690B4E0207F7991E* Field_3_6; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_7339E2B0B6BCD798__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7339E2B0B6BCD798__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7339E2B0B6BCD798_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7339E2B0B6BCD798_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7339E2B0B6BCD798_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_7339E2B0B6BCD798* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_7339E2B0B6BCD798*(*)())((::PBYTE)hIl2Cpp + CLASS_3_7339E2B0B6BCD798_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};

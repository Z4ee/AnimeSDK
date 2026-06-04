#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_371;
class Class_1_71EAE0D13B3DF503;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_B3B329E8E3BAC557_GET_DRESSEDENPCF07_OFFSET UNITYSDK_OFFSET(0xAFF1A00)
#define CLASS_1_B3B329E8E3BAC557_GET_ENPCF07IDS_OFFSET UNITYSDK_OFFSET(0xAFF19F0)
#define CLASS_1_B3B329E8E3BAC557_METHOD_1_791D4B1CD66F90F0_1_OFFSET UNITYSDK_OFFSET(0xAFF1AF0)
#define CLASS_1_B3B329E8E3BAC557_METHOD_1_791D4B1CD66F90F0_OFFSET UNITYSDK_OFFSET(0xAFF1A30)
#define CLASS_1_B3B329E8E3BAC557_SET_DRESSEDENPCF07_OFFSET UNITYSDK_OFFSET(0xAFF1A10)
#define CLASS_1_B3B329E8E3BAC557__CTOR_OFFSET UNITYSDK_OFFSET(0xAFF1A20)

inline static constexpr unsigned int Class_1_B3B329E8E3BAC557_TypeDefinitionIndex = 48532;

class Class_1_B3B329E8E3BAC557 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _ENpcF07Ids_k__BackingField; // 0x10
	::Class_1_71EAE0D13B3DF503* _DressedENpcF07_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_371* Field_1_2; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_371* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_371*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B3B329E8E3BAC557__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_ENpcF07Ids()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3B329E8E3BAC557_GET_ENPCF07IDS_OFFSET))(this);
	}

	::Class_1_71EAE0D13B3DF503* get_DressedENpcF07()
	{
		return ((::Class_1_71EAE0D13B3DF503*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3B329E8E3BAC557_GET_DRESSEDENPCF07_OFFSET))(this);
	}

	::System::Void set_DressedENpcF07(::Class_1_71EAE0D13B3DF503* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_71EAE0D13B3DF503*))((::PBYTE)hIl2Cpp + CLASS_1_B3B329E8E3BAC557_SET_DRESSEDENPCF07_OFFSET))(this, a1);
	}

	::System::Void Method_1_791D4B1CD66F90F0(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B3B329E8E3BAC557_METHOD_1_791D4B1CD66F90F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_791D4B1CD66F90F0_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B3B329E8E3BAC557_METHOD_1_791D4B1CD66F90F0_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_0FE4ABC043BDF8EF_Struct_2_0839504A496058D2.h"

class Class_3_0FE4ABC043BDF8EF_Class_1_A0BFCF19234E844F;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0FE4ABC043BDF8EF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xDEBF470)
#define CLASS_3_0FE4ABC043BDF8EF_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xDEBF710)
#define CLASS_3_0FE4ABC043BDF8EF_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xDEBF690)
#define CLASS_3_0FE4ABC043BDF8EF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xDEBF2B0)
#define CLASS_3_0FE4ABC043BDF8EF__CCTOR_OFFSET UNITYSDK_OFFSET(0xDEBF4C0)
#define CLASS_3_0FE4ABC043BDF8EF__CTOR_OFFSET UNITYSDK_OFFSET(0xDEBF540)

inline static constexpr unsigned int Class_3_0FE4ABC043BDF8EF_TypeDefinitionIndex = 61661;

class Class_3_0FE4ABC043BDF8EF : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0xBA; // 0x0
	::System::Collections::Generic::List_1<::Class_3_0FE4ABC043BDF8EF_Struct_2_0839504A496058D2>* Field_3_1; // 0x48
	::System::Collections::Generic::List_1<::Class_3_0FE4ABC043BDF8EF_Class_1_A0BFCF19234E844F*>* Field_3_0; // 0x50
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_2; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_6; // 0x60
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_4; // 0x68
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_3; // 0x70
	::System::Boolean Field_3_5; // 0x78

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0FE4ABC043BDF8EF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FE4ABC043BDF8EF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FE4ABC043BDF8EF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FE4ABC043BDF8EF_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_0FE4ABC043BDF8EF* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_0FE4ABC043BDF8EF*(*)())((::PBYTE)hIl2Cpp + CLASS_3_0FE4ABC043BDF8EF_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0FE4ABC043BDF8EF_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};

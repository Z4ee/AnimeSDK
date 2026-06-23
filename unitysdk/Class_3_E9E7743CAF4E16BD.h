#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Struct_2_11FD83788053949F.h"
#include "unitysdk/Struct_2_23357730042A2DE8.h"
#include "unitysdk/Struct_2_7D9908C3EA3882B7.h"
#include "unitysdk/Struct_2_A840136A4E657746.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E9E7743CAF4E16BD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15861F00)
#define CLASS_3_E9E7743CAF4E16BD_METHOD_3_107247B6331E64C6_OFFSET UNITYSDK_OFFSET(0x15862CA0)
#define CLASS_3_E9E7743CAF4E16BD_METHOD_3_273A34F921CC0A5A_OFFSET UNITYSDK_OFFSET(0x158626B0)
#define CLASS_3_E9E7743CAF4E16BD_METHOD_3_43B003DC5FEEB0A7_OFFSET UNITYSDK_OFFSET(0x15862AF0)
#define CLASS_3_E9E7743CAF4E16BD_METHOD_3_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x158621A0)
#define CLASS_3_E9E7743CAF4E16BD_METHOD_3_5304726C363652C1_OFFSET UNITYSDK_OFFSET(0x15862290)
#define CLASS_3_E9E7743CAF4E16BD_METHOD_3_792AB6C2A2B589B3_OFFSET UNITYSDK_OFFSET(0x158624C0)
#define CLASS_3_E9E7743CAF4E16BD_METHOD_3_7D9FB684EF17D12D_OFFSET UNITYSDK_OFFSET(0x158629F0)
#define CLASS_3_E9E7743CAF4E16BD_METHOD_3_87209452B4E86410_OFFSET UNITYSDK_OFFSET(0x158623B0)
#define CLASS_3_E9E7743CAF4E16BD_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15862B90)
#define CLASS_3_E9E7743CAF4E16BD_METHOD_3_A24A1AC307A571BF_OFFSET UNITYSDK_OFFSET(0x15862C20)
#define CLASS_3_E9E7743CAF4E16BD_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x15862440)
#define CLASS_3_E9E7743CAF4E16BD_METHOD_3_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x15862340)
#define CLASS_3_E9E7743CAF4E16BD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15861BE0)
#define CLASS_3_E9E7743CAF4E16BD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15861F50)
#define CLASS_3_E9E7743CAF4E16BD__CTOR_OFFSET UNITYSDK_OFFSET(0x15861FD0)

inline static constexpr unsigned int Class_3_E9E7743CAF4E16BD_TypeDefinitionIndex = 84289;

class Class_3_E9E7743CAF4E16BD : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Single Field_3_7; // 0x0
	// static const ::System::Int32 Field_3_10 = 0x76; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_6; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_4; // 0x50
	::System::Collections::Generic::List_1<::Struct_2_23357730042A2DE8>* Field_3_8; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_5; // 0x60
	::System::Boolean Field_3_2; // 0x68
	::Struct_2_11FD83788053949F Field_3_0; // 0x6C
	::Struct_2_A840136A4E657746 Field_3_3; // 0x78
	::System::Single Field_3_9; // 0x84
	::Struct_2_7D9908C3EA3882B7 Field_3_1; // 0x88

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E9E7743CAF4E16BD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9E7743CAF4E16BD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9E7743CAF4E16BD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9E7743CAF4E16BD_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E9E7743CAF4E16BD_METHOD_3_459C79521BFE514E_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9E7743CAF4E16BD_METHOD_3_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Int32 Method_3_87209452B4E86410()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9E7743CAF4E16BD_METHOD_3_87209452B4E86410_OFFSET))(this);
	}

	static ::Class_3_E9E7743CAF4E16BD* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_E9E7743CAF4E16BD*(*)())((::PBYTE)hIl2Cpp + CLASS_3_E9E7743CAF4E16BD_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::Class_3_E9E7743CAF4E16BD* Method_3_792AB6C2A2B589B3()
	{
		return ((::Class_3_E9E7743CAF4E16BD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9E7743CAF4E16BD_METHOD_3_792AB6C2A2B589B3_OFFSET))(this);
	}

	::System::Void Method_3_273A34F921CC0A5A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E9E7743CAF4E16BD_METHOD_3_273A34F921CC0A5A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_7D9FB684EF17D12D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9E7743CAF4E16BD_METHOD_3_7D9FB684EF17D12D_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9E7743CAF4E16BD_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_3_5304726C363652C1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9E7743CAF4E16BD_METHOD_3_5304726C363652C1_OFFSET))(this);
	}

	::System::Single Method_3_43B003DC5FEEB0A7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9E7743CAF4E16BD_METHOD_3_43B003DC5FEEB0A7_OFFSET))(this);
	}

	::System::Single Method_3_A24A1AC307A571BF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9E7743CAF4E16BD_METHOD_3_A24A1AC307A571BF_OFFSET))(this);
	}

	::System::Boolean Method_3_107247B6331E64C6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9E7743CAF4E16BD_METHOD_3_107247B6331E64C6_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_71A741F5D691F2DB.h"
#include "unitysdk/Enum_3_2383C6C1B6DFD4E4.h"
#include "unitysdk/Enum_3_8C5B5B31A78ED626.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_7AC8164CC7B8672E;
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6EB79A7690DA19C1_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x14E5EC80)
#define CLASS_2_6EB79A7690DA19C1_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x14E5EE60)
#define CLASS_2_6EB79A7690DA19C1_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x14E5EC30)
#define CLASS_2_6EB79A7690DA19C1_METHOD_2_D2B19127039F724A_OFFSET UNITYSDK_OFFSET(0x14E5EF00)
#define CLASS_2_6EB79A7690DA19C1__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E5F5C0)
#define CLASS_2_6EB79A7690DA19C1__CTOR_OFFSET UNITYSDK_OFFSET(0x14E5EC40)

inline static constexpr unsigned int Class_2_6EB79A7690DA19C1_TypeDefinitionIndex = 78894;

class Class_2_6EB79A7690DA19C1 : public ::Class_1_71A741F5D691F2DB
{
public:
	static ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>** StaticGet_Field_2_2()
	{
		return (::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6EB79A7690DA19C1_TypeDefinitionIndex)->GetStaticField(0x459A0);
	}
	::Class_1_7AC8164CC7B8672E* Field_2_3; // 0x50
	::Enum_3_8C5B5B31A78ED626 Field_2_1; // 0x58
	::System::Int32 Field_2_0; // 0x5C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::Enum_3_8C5B5B31A78ED626 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32, ::Enum_3_8C5B5B31A78ED626))((::PBYTE)hIl2Cpp + CLASS_2_6EB79A7690DA19C1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6EB79A7690DA19C1__CCTOR_OFFSET))();
	}

	::Enum_3_2383C6C1B6DFD4E4 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_2383C6C1B6DFD4E4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EB79A7690DA19C1_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EB79A7690DA19C1_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EB79A7690DA19C1_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_D2B19127039F724A(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*&))((::PBYTE)hIl2Cpp + CLASS_2_6EB79A7690DA19C1_METHOD_2_D2B19127039F724A_OFFSET))(this, a1);
	}
};

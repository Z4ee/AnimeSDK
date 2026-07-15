#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3524D4AB5573BC21.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_066AB55B5826B0C9;
class Class_1_1B49CB6EB444241A;
namespace RPG { template <typename T> class PoolList_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1E08A185B3BC6B3A_CLEAR_OFFSET UNITYSDK_OFFSET(0x180DAED0)
#define CLASS_1_1E08A185B3BC6B3A_METHOD_1_010731F4B2FBD19C_OFFSET UNITYSDK_OFFSET(0x180DC040)
#define CLASS_1_1E08A185B3BC6B3A_METHOD_1_295A584DC3D906B0_OFFSET UNITYSDK_OFFSET(0x180DBBF0)
#define CLASS_1_1E08A185B3BC6B3A_METHOD_1_3CAC12A314694432_OFFSET UNITYSDK_OFFSET(0x180DBB00)
#define CLASS_1_1E08A185B3BC6B3A_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x180DAFE0)
#define CLASS_1_1E08A185B3BC6B3A_METHOD_1_A0C13B1C49C40EBE_OFFSET UNITYSDK_OFFSET(0x180DACF0)
#define CLASS_1_1E08A185B3BC6B3A_METHOD_1_A180ACE1C4F838CC_OFFSET UNITYSDK_OFFSET(0x180DB7A0)
#define CLASS_1_1E08A185B3BC6B3A_METHOD_1_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0x180DB030)
#define CLASS_1_1E08A185B3BC6B3A__CTOR_OFFSET UNITYSDK_OFFSET(0x180DC2A0)

inline static constexpr unsigned int Class_1_1E08A185B3BC6B3A_TypeDefinitionIndex = 40475;

class Class_1_1E08A185B3BC6B3A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Struct_2_3524D4AB5573BC21>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E08A185B3BC6B3A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A0C13B1C49C40EBE(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>* a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_1E08A185B3BC6B3A_METHOD_1_A0C13B1C49C40EBE_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E08A185B3BC6B3A_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E08A185B3BC6B3A_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::RPG::PoolList_1<::Struct_2_3524D4AB5573BC21>* Method_1_A180ACE1C4F838CC()
	{
		return ((::RPG::PoolList_1<::Struct_2_3524D4AB5573BC21>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E08A185B3BC6B3A_METHOD_1_A180ACE1C4F838CC_OFFSET))(this);
	}

	::System::Void Method_1_B06F516E4459C742()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E08A185B3BC6B3A_METHOD_1_B06F516E4459C742_OFFSET))(this);
	}

	::System::Boolean Method_1_295A584DC3D906B0(::Class_1_1B49CB6EB444241A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1B49CB6EB444241A*))((::PBYTE)hIl2Cpp + CLASS_1_1E08A185B3BC6B3A_METHOD_1_295A584DC3D906B0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3CAC12A314694432(::Class_1_066AB55B5826B0C9* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_066AB55B5826B0C9*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_1E08A185B3BC6B3A_METHOD_1_3CAC12A314694432_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_010731F4B2FBD19C(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>* a1, ::Class_1_066AB55B5826B0C9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>*, ::Class_1_066AB55B5826B0C9*))((::PBYTE)hIl2Cpp + CLASS_1_1E08A185B3BC6B3A_METHOD_1_010731F4B2FBD19C_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4393199F378B6118;
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A139A18477C7681A_METHOD_1_1B22BAD441DCB63A_OFFSET UNITYSDK_OFFSET(0x157CDAC0)
#define CLASS_1_A139A18477C7681A_METHOD_1_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0x157CFF30)
#define CLASS_1_A139A18477C7681A_METHOD_1_51C53C3175B4DE64_OFFSET UNITYSDK_OFFSET(0x157CFEA0)
#define CLASS_1_A139A18477C7681A_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x157CFF90)
#define CLASS_1_A139A18477C7681A__CCTOR_OFFSET UNITYSDK_OFFSET(0x157D0000)
#define CLASS_1_A139A18477C7681A__CTOR_OFFSET UNITYSDK_OFFSET(0x157CFE90)

inline static constexpr unsigned int Class_1_A139A18477C7681A_TypeDefinitionIndex = 61303;

class Class_1_A139A18477C7681A : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A139A18477C7681A_TypeDefinitionIndex)->GetStaticField(0xF270);
	}
	::System::Collections::Generic::List_1<::Class_1_4393199F378B6118*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A139A18477C7681A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A139A18477C7681A__CCTOR_OFFSET))();
	}

	static ::Class_1_A139A18477C7681A* Method_1_1B22BAD441DCB63A(::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>* a1)
	{
		return ((::Class_1_A139A18477C7681A*(*)(::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_A139A18477C7681A_METHOD_1_1B22BAD441DCB63A_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_23B573F7FD360F67()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_A139A18477C7681A_METHOD_1_23B573F7FD360F67_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A139A18477C7681A_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Boolean Method_1_51C53C3175B4DE64(::RPG::GameCore::RuntimeGroupInfo* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::RuntimeGroupInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A139A18477C7681A_METHOD_1_51C53C3175B4DE64_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4393199F378B6118;
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A139A18477C7681A_METHOD_1_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0x15A31B90)
#define CLASS_1_A139A18477C7681A_METHOD_1_4E627385F34F9D95_OFFSET UNITYSDK_OFFSET(0x15A2F780)
#define CLASS_1_A139A18477C7681A_METHOD_1_51C53C3175B4DE64_OFFSET UNITYSDK_OFFSET(0x15A31DD0)
#define CLASS_1_A139A18477C7681A_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x15A31D60)
#define CLASS_1_A139A18477C7681A__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A31E70)
#define CLASS_1_A139A18477C7681A__CTOR_OFFSET UNITYSDK_OFFSET(0x15A31E60)

inline static constexpr unsigned int Class_1_A139A18477C7681A_TypeDefinitionIndex = 64284;

class Class_1_A139A18477C7681A : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_LDBOLICCMOC()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A139A18477C7681A_TypeDefinitionIndex)->GetStaticField(0x12860);
	}
	::System::Collections::Generic::List_1<::Class_1_4393199F378B6118*>* AFMBJMGJOCG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A139A18477C7681A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A139A18477C7681A__CCTOR_OFFSET))();
	}

	static ::Class_1_A139A18477C7681A* Method_1_4E627385F34F9D95(::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>* a1)
	{
		return ((::Class_1_A139A18477C7681A*(*)(::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_A139A18477C7681A_METHOD_1_4E627385F34F9D95_OFFSET))(a1);
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

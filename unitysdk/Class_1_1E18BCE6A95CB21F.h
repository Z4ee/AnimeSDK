#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6E1B724B14572104_5.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1E18BCE6A95CB21F_METHOD_1_316AA2E9218EF728_OFFSET UNITYSDK_OFFSET(0x11E98780)
#define CLASS_1_1E18BCE6A95CB21F_METHOD_1_426E930136D11E22_OFFSET UNITYSDK_OFFSET(0x11E97DF0)
#define CLASS_1_1E18BCE6A95CB21F__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E97D30)

inline static constexpr unsigned int Class_1_1E18BCE6A95CB21F_TypeDefinitionIndex = 81135;

class Class_1_1E18BCE6A95CB21F : public ::System::Object
{
public:
	static ::Il2CppArray<::Struct_2_6E1B724B14572104_5>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::Struct_2_6E1B724B14572104_5>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E18BCE6A95CB21F_TypeDefinitionIndex)->GetStaticField(0x49EA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::Struct_2_6E1B724B14572104_5>*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::Struct_2_6E1B724B14572104_5>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E18BCE6A95CB21F_TypeDefinitionIndex)->GetStaticField(0x49EA8);
	}
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_7; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E18BCE6A95CB21F__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::Struct_2_6E1B724B14572104_5>* Method_1_426E930136D11E22(::System::Int32 a1)
	{
		return ((::Il2CppArray<::Struct_2_6E1B724B14572104_5>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1E18BCE6A95CB21F_METHOD_1_426E930136D11E22_OFFSET))(a1);
	}

	static ::System::Void Method_1_316AA2E9218EF728(::System::Collections::Generic::List_1<::Struct_2_6E1B724B14572104_5>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Struct_2_6E1B724B14572104_5>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_1E18BCE6A95CB21F_METHOD_1_316AA2E9218EF728_OFFSET))(a1, a2);
	}
};

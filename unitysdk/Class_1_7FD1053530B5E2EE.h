#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_01F9221F8B6A9296_Enum_3_F7B17BC384A28970.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7FD1053530B5E2EE__CCTOR_OFFSET UNITYSDK_OFFSET(0x114C6950)

inline static constexpr unsigned int Class_1_7FD1053530B5E2EE_TypeDefinitionIndex = 63013;

class Class_1_7FD1053530B5E2EE : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_4_01F9221F8B6A9296_Enum_3_F7B17BC384A28970>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::Class_4_01F9221F8B6A9296_Enum_3_F7B17BC384A28970>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FD1053530B5E2EE_TypeDefinitionIndex)->GetStaticField(0x34180);
	}
	static ::System::Collections::Generic::List_1<::Class_4_01F9221F8B6A9296_Enum_3_F7B17BC384A28970>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::Class_4_01F9221F8B6A9296_Enum_3_F7B17BC384A28970>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FD1053530B5E2EE_TypeDefinitionIndex)->GetStaticField(0x34188);
	}
	// static const ::System::Int32 Field_1_0 = 0xB7; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FD1053530B5E2EE__CCTOR_OFFSET))();
	}
};

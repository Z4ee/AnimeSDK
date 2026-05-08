#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_30.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_56DC88185E4E86E0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABC9150)

inline static constexpr unsigned int Class_1_56DC88185E4E86E0_TypeDefinitionIndex = 32381;

class Class_1_56DC88185E4E86E0 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Enum_3_4608E37A1B3D374A_30>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::Enum_3_4608E37A1B3D374A_30>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56DC88185E4E86E0_TypeDefinitionIndex)->GetStaticField(0x25C10);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56DC88185E4E86E0_TypeDefinitionIndex)->GetStaticField(0x25C18);
	}
	static ::System::Collections::Generic::List_1<::Enum_3_4608E37A1B3D374A_30>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::Enum_3_4608E37A1B3D374A_30>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56DC88185E4E86E0_TypeDefinitionIndex)->GetStaticField(0x25C20);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56DC88185E4E86E0_TypeDefinitionIndex)->GetStaticField(0x25C28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_56DC88185E4E86E0__CCTOR_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_28.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_56DC88185E4E86E0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF71FD0)

inline static constexpr unsigned int Class_1_56DC88185E4E86E0_TypeDefinitionIndex = 33930;

class Class_1_56DC88185E4E86E0 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Enum_3_4608E37A1B3D374A_28>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::Enum_3_4608E37A1B3D374A_28>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56DC88185E4E86E0_TypeDefinitionIndex)->GetStaticField(0x275E0);
	}
	static ::System::Collections::Generic::List_1<::Enum_3_4608E37A1B3D374A_28>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::Enum_3_4608E37A1B3D374A_28>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56DC88185E4E86E0_TypeDefinitionIndex)->GetStaticField(0x275E8);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56DC88185E4E86E0_TypeDefinitionIndex)->GetStaticField(0x275F0);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56DC88185E4E86E0_TypeDefinitionIndex)->GetStaticField(0x275F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_56DC88185E4E86E0__CCTOR_OFFSET))();
	}
};

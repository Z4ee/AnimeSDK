#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_01F9221F8B6A9296_Enum_3_4845697BF1CAFCFF.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7FD1053530B5E2EE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1871AB20)

inline static constexpr unsigned int Class_1_7FD1053530B5E2EE_TypeDefinitionIndex = 40279;

class Class_1_7FD1053530B5E2EE : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_4_01F9221F8B6A9296_Enum_3_4845697BF1CAFCFF>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::List_1<::Class_4_01F9221F8B6A9296_Enum_3_4845697BF1CAFCFF>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FD1053530B5E2EE_TypeDefinitionIndex)->GetStaticField(0x31690);
	}
	static ::System::Collections::Generic::List_1<::Class_4_01F9221F8B6A9296_Enum_3_4845697BF1CAFCFF>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_4_01F9221F8B6A9296_Enum_3_4845697BF1CAFCFF>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FD1053530B5E2EE_TypeDefinitionIndex)->GetStaticField(0x31698);
	}
	// static const ::System::Int32 Field_1_2 = 0xB7; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FD1053530B5E2EE__CCTOR_OFFSET))();
	}
};

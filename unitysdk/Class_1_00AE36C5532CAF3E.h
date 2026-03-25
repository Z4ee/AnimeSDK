#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_00AE36C5532CAF3E__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B240C0)

inline static constexpr unsigned int Class_1_00AE36C5532CAF3E_TypeDefinitionIndex = 50510;

class Class_1_00AE36C5532CAF3E : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00AE36C5532CAF3E_TypeDefinitionIndex)->GetStaticField(0x474C0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00AE36C5532CAF3E_TypeDefinitionIndex)->GetStaticField(0x474C8);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00AE36C5532CAF3E_TypeDefinitionIndex)->GetStaticField(0x474D0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00AE36C5532CAF3E_TypeDefinitionIndex)->GetStaticField(0x474D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00AE36C5532CAF3E__CCTOR_OFFSET))();
	}
};

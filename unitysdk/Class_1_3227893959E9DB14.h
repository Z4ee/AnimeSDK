#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_3227893959E9DB14_METHOD_1_FC21FC07A06ACCCD_OFFSET UNITYSDK_OFFSET(0xBF3D870)
#define CLASS_1_3227893959E9DB14__CTOR_OFFSET UNITYSDK_OFFSET(0xBF3DC60)

inline static constexpr unsigned int Class_1_3227893959E9DB14_TypeDefinitionIndex = 63530;

class Class_1_3227893959E9DB14 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3227893959E9DB14_TypeDefinitionIndex)->GetStaticField(0x25560);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3227893959E9DB14__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FC21FC07A06ACCCD(::System::Object*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_3227893959E9DB14_METHOD_1_FC21FC07A06ACCCD_OFFSET))(this, a1);
	}
};

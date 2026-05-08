#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3AAA09564DC7733E.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_91E71DDCF754E6A2__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CE50B0)
#define CLASS_1_91E71DDCF754E6A2__CTOR_OFFSET UNITYSDK_OFFSET(0x14CE50A0)

inline static constexpr unsigned int Class_1_91E71DDCF754E6A2_TypeDefinitionIndex = 81554;

class Class_1_91E71DDCF754E6A2 : public ::System::Object
{
public:
	static ::Class_1_91E71DDCF754E6A2** StaticGet_Field_1_0()
	{
		return (::Class_1_91E71DDCF754E6A2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91E71DDCF754E6A2_TypeDefinitionIndex)->GetStaticField(0x36EF0);
	}
	::System::Collections::Generic::List_1<::Struct_2_3AAA09564DC7733E>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91E71DDCF754E6A2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91E71DDCF754E6A2__CCTOR_OFFSET))();
	}
};

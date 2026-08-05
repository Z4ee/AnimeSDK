#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4AC4C85240EB8F14.h"
#include "unitysdk/Struct_2_9C9516EC1DA3BB28.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_70BD21BFA8AB64FC_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x18B888C0)
#define CLASS_1_70BD21BFA8AB64FC_METHOD_1_5EA5D9E264A70DB2_OFFSET UNITYSDK_OFFSET(0x18B88840)
#define CLASS_1_70BD21BFA8AB64FC_METHOD_1_9E467FFFA5E8F9EF_OFFSET UNITYSDK_OFFSET(0x18B88940)
#define CLASS_1_70BD21BFA8AB64FC_METHOD_1_AF1BFAC85B7620AB_OFFSET UNITYSDK_OFFSET(0x18B88570)
#define CLASS_1_70BD21BFA8AB64FC_METHOD_1_C08C524DD01F1CD6_OFFSET UNITYSDK_OFFSET(0x18B888E0)
#define CLASS_1_70BD21BFA8AB64FC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18B888D0)
#define CLASS_1_70BD21BFA8AB64FC__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B88800)
#define CLASS_1_70BD21BFA8AB64FC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18B88420)
#define CLASS_1_70BD21BFA8AB64FC__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18B886F0)
#define CLASS_1_70BD21BFA8AB64FC__CTOR_OFFSET UNITYSDK_OFFSET(0x18B88410)

inline static constexpr unsigned int Class_1_70BD21BFA8AB64FC_TypeDefinitionIndex = 87898;

class Class_1_70BD21BFA8AB64FC : public ::System::Object
{
public:
	static ::Class_1_70BD21BFA8AB64FC** StaticGet_Field_1_3()
	{
		return (::Class_1_70BD21BFA8AB64FC**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70BD21BFA8AB64FC_TypeDefinitionIndex)->GetStaticField(0x4BAF0);
	}
	::Il2CppArray<::System::Nullable_1<::System::UInt32>>* Field_1_0; // 0x10
	::Struct_2_4AC4C85240EB8F14 Field_1_6; // 0x18
	::System::UInt32 Field_1_7; // 0x28
	::System::UInt32 Field_1_2; // 0x2C
	::System::Boolean Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70BD21BFA8AB64FC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_70BD21BFA8AB64FC__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::Struct_2_9C9516EC1DA3BB28& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_9C9516EC1DA3BB28&))((::PBYTE)hIl2Cpp + CLASS_1_70BD21BFA8AB64FC__CTOR_2_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70BD21BFA8AB64FC__CCTOR_OFFSET))();
	}

	::System::Void Method_1_AF1BFAC85B7620AB(::Struct_2_4AC4C85240EB8F14 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4AC4C85240EB8F14))((::PBYTE)hIl2Cpp + CLASS_1_70BD21BFA8AB64FC_METHOD_1_AF1BFAC85B7620AB_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::UInt32> Method_1_5EA5D9E264A70DB2(::System::UInt32 a1)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_70BD21BFA8AB64FC_METHOD_1_5EA5D9E264A70DB2_OFFSET))(this, a1);
	}

	::Struct_2_4AC4C85240EB8F14& Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_4AC4C85240EB8F14&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70BD21BFA8AB64FC_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70BD21BFA8AB64FC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_C08C524DD01F1CD6(::Struct_2_9C9516EC1DA3BB28 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9C9516EC1DA3BB28))((::PBYTE)hIl2Cpp + CLASS_1_70BD21BFA8AB64FC_METHOD_1_C08C524DD01F1CD6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9E467FFFA5E8F9EF(::Struct_2_9C9516EC1DA3BB28 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9C9516EC1DA3BB28))((::PBYTE)hIl2Cpp + CLASS_1_70BD21BFA8AB64FC_METHOD_1_9E467FFFA5E8F9EF_OFFSET))(this, a1);
	}
};

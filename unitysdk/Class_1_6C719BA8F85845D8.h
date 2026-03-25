#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }

#define CLASS_1_6C719BA8F85845D8_METHOD_1_BCB2E085DC23FF7F_OFFSET UNITYSDK_OFFSET(0x16AE2280)
#define CLASS_1_6C719BA8F85845D8_METHOD_1_FF5D8ADE546B1CA6_OFFSET UNITYSDK_OFFSET(0x16AE2450)
#define CLASS_1_6C719BA8F85845D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AE2590)
#define CLASS_1_6C719BA8F85845D8__CTOR_OFFSET UNITYSDK_OFFSET(0x16AE2580)

inline static constexpr unsigned int Class_1_6C719BA8F85845D8_TypeDefinitionIndex = 33820;

class Class_1_6C719BA8F85845D8 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C719BA8F85845D8_TypeDefinitionIndex)->GetStaticField(0xF10);
	}
	// static const ::System::Int32 Field_1_0 = 0x1000; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C719BA8F85845D8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6C719BA8F85845D8__CCTOR_OFFSET))();
	}

	::System::Int32 Method_1_BCB2E085DC23FF7F(::System::IO::Stream* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6C719BA8F85845D8_METHOD_1_BCB2E085DC23FF7F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FF5D8ADE546B1CA6(::System::IO::Stream* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6C719BA8F85845D8_METHOD_1_FF5D8ADE546B1CA6_OFFSET))(this, a1, a2);
	}
};

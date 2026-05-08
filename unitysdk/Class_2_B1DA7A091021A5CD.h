#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

class Class_1_EA1FEF8121ADE963;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_B1DA7A091021A5CD_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x10581490)
#define CLASS_2_B1DA7A091021A5CD_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x10581060)
#define CLASS_2_B1DA7A091021A5CD_METHOD_2_5205C8E930D73631_OFFSET UNITYSDK_OFFSET(0x105810F0)
#define CLASS_2_B1DA7A091021A5CD_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x10580EF0)
#define CLASS_2_B1DA7A091021A5CD_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x10581350)
#define CLASS_2_B1DA7A091021A5CD_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10581400)
#define CLASS_2_B1DA7A091021A5CD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10581360)
#define CLASS_2_B1DA7A091021A5CD__CCTOR_OFFSET UNITYSDK_OFFSET(0x10580FE0)
#define CLASS_2_B1DA7A091021A5CD__CTOR_OFFSET UNITYSDK_OFFSET(0x10581050)

inline static constexpr unsigned int Class_2_B1DA7A091021A5CD_TypeDefinitionIndex = 40600;

class Class_2_B1DA7A091021A5CD : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_7 = 0xE5; // 0x0
	::Class_1_EA1FEF8121ADE963* Field_2_6; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_5; // 0x28
	::System::Boolean Field_2_4; // 0x30
	::System::Single Field_2_2; // 0x34
	::System::Single Field_2_3; // 0x38
	::System::Single Field_2_1; // 0x3C
	::System::UInt32 Field_2_0; // 0x40

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B1DA7A091021A5CD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1DA7A091021A5CD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1DA7A091021A5CD_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1DA7A091021A5CD_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_5205C8E930D73631(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::Class_1_EA1FEF8121ADE963* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_2_B1DA7A091021A5CD_METHOD_2_5205C8E930D73631_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_EA1FEF8121ADE963* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_2_B1DA7A091021A5CD_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1DA7A091021A5CD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1DA7A091021A5CD_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::Class_1_EA1FEF8121ADE963* Method_2_24748FC20F375725()
	{
		return ((::Class_1_EA1FEF8121ADE963*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1DA7A091021A5CD_METHOD_2_24748FC20F375725_OFFSET))(this);
	}
};

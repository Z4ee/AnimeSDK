#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_13.h"
#include "unitysdk/Foundation/GameManager_1.h"

class Class_1_9B11BDAD3713D22C;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_9F80A8A409014744_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BEDC50)
#define CLASS_3_9F80A8A409014744_METHOD_3_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x13BEE0F0)
#define CLASS_3_9F80A8A409014744_METHOD_3_4661C73DDFEE356C_OFFSET UNITYSDK_OFFSET(0x13BEE330)
#define CLASS_3_9F80A8A409014744_METHOD_3_691B689398153E3B_OFFSET UNITYSDK_OFFSET(0x13BEDFC0)
#define CLASS_3_9F80A8A409014744_METHOD_3_C41AFA73682EBB6F_OFFSET UNITYSDK_OFFSET(0x13BEDE20)
#define CLASS_3_9F80A8A409014744_ONCREATE_OFFSET UNITYSDK_OFFSET(0x13BEDBD0)
#define CLASS_3_9F80A8A409014744_ONSTART_OFFSET UNITYSDK_OFFSET(0x13BEDC10)
#define CLASS_3_9F80A8A409014744_UPDATE_OFFSET UNITYSDK_OFFSET(0x13BEDC90)
#define CLASS_3_9F80A8A409014744__CCTOR_OFFSET UNITYSDK_OFFSET(0x13BEDD80)
#define CLASS_3_9F80A8A409014744__CTOR_OFFSET UNITYSDK_OFFSET(0x13BEDCF0)

inline static constexpr unsigned int Class_3_9F80A8A409014744_TypeDefinitionIndex = 57997;

class Class_3_9F80A8A409014744 : public ::Foundation::GameManager_1<::Class_3_9F80A8A409014744*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_DB663931210BBC27_13, ::Class_1_9B11BDAD3713D22C*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_DB663931210BBC27_13, ::Class_1_9B11BDAD3713D22C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9F80A8A409014744_TypeDefinitionIndex)->GetStaticField(0x3B270);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F80A8A409014744__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9F80A8A409014744__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F80A8A409014744_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F80A8A409014744_ONSTART_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F80A8A409014744_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9F80A8A409014744_UPDATE_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_C41AFA73682EBB6F(::Enum_3_DB663931210BBC27_13 a1, ::Class_1_9B11BDAD3713D22C* a2)
	{
		return ((::System::Boolean(*)(::Enum_3_DB663931210BBC27_13, ::Class_1_9B11BDAD3713D22C*))((::PBYTE)hIl2Cpp + CLASS_3_9F80A8A409014744_METHOD_3_C41AFA73682EBB6F_OFFSET))(a1, a2);
	}

	static ::Class_1_9B11BDAD3713D22C* Method_3_691B689398153E3B(::Enum_3_DB663931210BBC27_13 a1)
	{
		return ((::Class_1_9B11BDAD3713D22C*(*)(::Enum_3_DB663931210BBC27_13))((::PBYTE)hIl2Cpp + CLASS_3_9F80A8A409014744_METHOD_3_691B689398153E3B_OFFSET))(a1);
	}

	::System::Void Method_3_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F80A8A409014744_METHOD_3_4389275F4099DE36_OFFSET))(this);
	}

	::System::Boolean Method_3_4661C73DDFEE356C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F80A8A409014744_METHOD_3_4661C73DDFEE356C_OFFSET))(this);
	}
};

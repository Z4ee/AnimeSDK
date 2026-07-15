#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DAD06FCACDA2E3A8_Class_1_1BC8000783467E3C;
class Class_1_DAD06FCACDA2E3A8_Class_1_E061506C73F7BD11;
class Class_1_DAD06FCACDA2E3A8_Class_2_C602BC08A698AB75;
namespace RPG::Client { class RspHandler; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_19A3FADB40383A1B_OFFSET UNITYSDK_OFFSET(0x146F5500)
#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_284AF9FC95C99488_OFFSET UNITYSDK_OFFSET(0x146F5A90)
#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x146F4DC0)
#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x146F73B0)
#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x146F5DE0)
#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x146F63B0)
#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_5F0F329C4FFEAF09_OFFSET UNITYSDK_OFFSET(0x146F5E80)
#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x146F6280)
#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_84AA5E9F1C992134_OFFSET UNITYSDK_OFFSET(0x146F5C30)
#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_8E4942718F5FA249_OFFSET UNITYSDK_OFFSET(0x146F4A90)
#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x146F6540)
#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_BF328C96669546B2_OFFSET UNITYSDK_OFFSET(0x146F6ED0)
#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x146F6400)
#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x146F6230)
#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x146F66A0)
#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_E2ACF3FF064F9810_OFFSET UNITYSDK_OFFSET(0x146F4CD0)
#define CLASS_1_DAD06FCACDA2E3A8_METHOD_1_E9A040D6645EDC32_OFFSET UNITYSDK_OFFSET(0x146F6AC0)
#define CLASS_1_DAD06FCACDA2E3A8__CCTOR_OFFSET UNITYSDK_OFFSET(0x146F75D0)
#define CLASS_1_DAD06FCACDA2E3A8__CTOR_OFFSET UNITYSDK_OFFSET(0x146F73F0)

inline static constexpr unsigned int Class_1_DAD06FCACDA2E3A8_TypeDefinitionIndex = 69486;

class Class_1_DAD06FCACDA2E3A8 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DAD06FCACDA2E3A8_TypeDefinitionIndex)->GetStaticField(0x6B50);
	}
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x10
	::Class_1_DAD06FCACDA2E3A8_Class_2_C602BC08A698AB75* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::UInt16>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_DAD06FCACDA2E3A8_Class_1_E061506C73F7BD11*>* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::Class_1_DAD06FCACDA2E3A8_Class_1_1BC8000783467E3C*>* Field_1_5; // 0x30
	::System::Boolean Field_1_6; // 0x38
	::System::Boolean Field_1_7; // 0x39
	::System::UInt32 Field_1_8; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8__CCTOR_OFFSET))();
	}

	::System::UInt32 Method_1_8E4942718F5FA249(::System::Single a1, ::System::Single a2, ::System::Action* a3, ::System::Boolean a4, ::System::String* a5)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_8E4942718F5FA249_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_19A3FADB40383A1B(::System::UInt16 a1, ::RPG::Client::RspHandler* a2, ::System::Action* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::RPG::Client::RspHandler*, ::System::Action*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_19A3FADB40383A1B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_284AF9FC95C99488(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_284AF9FC95C99488_OFFSET))(this, a1);
	}

	::System::Void Method_1_84AA5E9F1C992134(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_84AA5E9F1C992134_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_1_5F0F329C4FFEAF09(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_5F0F329C4FFEAF09_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::UInt32 Method_1_E2ACF3FF064F9810()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_E2ACF3FF064F9810_OFFSET))(this);
	}

	::System::Void Method_1_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_A6544B958241856F_OFFSET))(this);
	}

	::System::Void Method_1_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_D155D4917B3D2C6A_OFFSET))(this);
	}

	::System::Void Method_1_E9A040D6645EDC32(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_E9A040D6645EDC32_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_1_BF328C96669546B2(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_BF328C96669546B2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAD06FCACDA2E3A8_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};

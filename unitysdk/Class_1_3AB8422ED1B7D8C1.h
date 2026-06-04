#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCAeonCrossRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3AB8422ED1B7D8C1_METHOD_1_09536A26B366EFE3_OFFSET UNITYSDK_OFFSET(0x18F84660)
#define CLASS_1_3AB8422ED1B7D8C1_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18F84610)
#define CLASS_1_3AB8422ED1B7D8C1_METHOD_1_5902AC5FADD53B76_OFFSET UNITYSDK_OFFSET(0x18F840C0)
#define CLASS_1_3AB8422ED1B7D8C1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F84440)
#define CLASS_1_3AB8422ED1B7D8C1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18F844D0)
#define CLASS_1_3AB8422ED1B7D8C1_METHOD_1_B76766C2C10228FD_OFFSET UNITYSDK_OFFSET(0x18F83DB0)
#define CLASS_1_3AB8422ED1B7D8C1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18F84060)
#define CLASS_1_3AB8422ED1B7D8C1_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18F83E30)
#define CLASS_1_3AB8422ED1B7D8C1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18F84400)
#define CLASS_1_3AB8422ED1B7D8C1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18F84570)
#define CLASS_1_3AB8422ED1B7D8C1_METHOD_1_F79AD20CCEC90FCE_OFFSET UNITYSDK_OFFSET(0x18F84230)
#define CLASS_1_3AB8422ED1B7D8C1__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F84A10)

inline static constexpr unsigned int Class_1_3AB8422ED1B7D8C1_TypeDefinitionIndex = 14007;

class Class_1_3AB8422ED1B7D8C1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AB8422ED1B7D8C1_TypeDefinitionIndex)->GetStaticField(0x383C0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AB8422ED1B7D8C1_TypeDefinitionIndex)->GetStaticField(0x383C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCrossRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCrossRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AB8422ED1B7D8C1_TypeDefinitionIndex)->GetStaticField(0x383D0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AB8422ED1B7D8C1_TypeDefinitionIndex)->GetStaticField(0xB3C0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AB8422ED1B7D8C1_TypeDefinitionIndex)->GetStaticField(0xB3C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AB8422ED1B7D8C1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCrossRow*>* Method_1_B76766C2C10228FD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCrossRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AB8422ED1B7D8C1_METHOD_1_B76766C2C10228FD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AB8422ED1B7D8C1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCrossRow*> Method_1_5902AC5FADD53B76()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCrossRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AB8422ED1B7D8C1_METHOD_1_5902AC5FADD53B76_OFFSET))();
	}

	static ::RPG::GameCore::RogueDLCAeonCrossRow* Method_1_F79AD20CCEC90FCE(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::RogueDLCAeonCrossRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AB8422ED1B7D8C1_METHOD_1_F79AD20CCEC90FCE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AB8422ED1B7D8C1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AB8422ED1B7D8C1_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AB8422ED1B7D8C1_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3AB8422ED1B7D8C1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3AB8422ED1B7D8C1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_3AB8422ED1B7D8C1_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_09536A26B366EFE3(::RPG::GameCore::RogueDLCAeonCrossRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + CLASS_1_3AB8422ED1B7D8C1_METHOD_1_09536A26B366EFE3_OFFSET))(a1);
	}
};

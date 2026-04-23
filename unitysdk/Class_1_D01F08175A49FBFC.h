#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveEmojiSenderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D01F08175A49FBFC_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1840EC30)
#define CLASS_1_D01F08175A49FBFC_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1840EA50)
#define CLASS_1_D01F08175A49FBFC_METHOD_1_3DD0B73AE3C84A1C_OFFSET UNITYSDK_OFFSET(0x1840EC80)
#define CLASS_1_D01F08175A49FBFC_METHOD_1_4F17DA13632FA270_OFFSET UNITYSDK_OFFSET(0x1840E360)
#define CLASS_1_D01F08175A49FBFC_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1840E3E0)
#define CLASS_1_D01F08175A49FBFC_METHOD_1_731927C8223A976D_OFFSET UNITYSDK_OFFSET(0x1840E690)
#define CLASS_1_D01F08175A49FBFC_METHOD_1_982D7B328E0454FE_OFFSET UNITYSDK_OFFSET(0x1840E840)
#define CLASS_1_D01F08175A49FBFC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1840EAF0)
#define CLASS_1_D01F08175A49FBFC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1840E630)
#define CLASS_1_D01F08175A49FBFC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1840EA10)
#define CLASS_1_D01F08175A49FBFC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1840EB90)
#define CLASS_1_D01F08175A49FBFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1840EFE0)

inline static constexpr unsigned int Class_1_D01F08175A49FBFC_TypeDefinitionIndex = 11260;

class Class_1_D01F08175A49FBFC : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D01F08175A49FBFC_TypeDefinitionIndex)->GetStaticField(0x272F0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D01F08175A49FBFC_TypeDefinitionIndex)->GetStaticField(0x272F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiSenderRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiSenderRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D01F08175A49FBFC_TypeDefinitionIndex)->GetStaticField(0x27300);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D01F08175A49FBFC_TypeDefinitionIndex)->GetStaticField(0xA5C0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D01F08175A49FBFC_TypeDefinitionIndex)->GetStaticField(0xA5C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D01F08175A49FBFC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiSenderRow*>* Method_1_4F17DA13632FA270()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiSenderRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D01F08175A49FBFC_METHOD_1_4F17DA13632FA270_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D01F08175A49FBFC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiSenderRow*> Method_1_731927C8223A976D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiSenderRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D01F08175A49FBFC_METHOD_1_731927C8223A976D_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveEmojiSenderRow* Method_1_982D7B328E0454FE(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveEmojiSenderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D01F08175A49FBFC_METHOD_1_982D7B328E0454FE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D01F08175A49FBFC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D01F08175A49FBFC_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D01F08175A49FBFC_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D01F08175A49FBFC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D01F08175A49FBFC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D01F08175A49FBFC_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_3DD0B73AE3C84A1C(::RPG::GameCore::IdleLiveEmojiSenderRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveEmojiSenderRow*))((::PBYTE)hIl2Cpp + CLASS_1_D01F08175A49FBFC_METHOD_1_3DD0B73AE3C84A1C_OFFSET))(a1);
	}
};

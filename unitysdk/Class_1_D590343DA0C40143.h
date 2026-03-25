#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RelicMainAffixAvatarValueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D590343DA0C40143_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16B022E0)
#define CLASS_1_D590343DA0C40143_METHOD_1_252CB53534BD7AA1_OFFSET UNITYSDK_OFFSET(0x16B02330)
#define CLASS_1_D590343DA0C40143_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16B02100)
#define CLASS_1_D590343DA0C40143_METHOD_1_52DA18D75DB5EED4_OFFSET UNITYSDK_OFFSET(0x16B01D40)
#define CLASS_1_D590343DA0C40143_METHOD_1_669CC83D2CFE0E95_OFFSET UNITYSDK_OFFSET(0x16B01EF0)
#define CLASS_1_D590343DA0C40143_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16B01A90)
#define CLASS_1_D590343DA0C40143_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16B021A0)
#define CLASS_1_D590343DA0C40143_METHOD_1_AE8120932EDEAA53_OFFSET UNITYSDK_OFFSET(0x16B01A10)
#define CLASS_1_D590343DA0C40143_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16B01CE0)
#define CLASS_1_D590343DA0C40143_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16B020C0)
#define CLASS_1_D590343DA0C40143_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16B02240)
#define CLASS_1_D590343DA0C40143__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B02690)

inline static constexpr unsigned int Class_1_D590343DA0C40143_TypeDefinitionIndex = 10209;

class Class_1_D590343DA0C40143 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D590343DA0C40143_TypeDefinitionIndex)->GetStaticField(0x27D80);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D590343DA0C40143_TypeDefinitionIndex)->GetStaticField(0x27D88);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D590343DA0C40143_TypeDefinitionIndex)->GetStaticField(0x27D90);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D590343DA0C40143_TypeDefinitionIndex)->GetStaticField(0xD120);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D590343DA0C40143_TypeDefinitionIndex)->GetStaticField(0xD121);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D590343DA0C40143__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*>* Method_1_AE8120932EDEAA53()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D590343DA0C40143_METHOD_1_AE8120932EDEAA53_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D590343DA0C40143_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*> Method_1_52DA18D75DB5EED4()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D590343DA0C40143_METHOD_1_52DA18D75DB5EED4_OFFSET))();
	}

	static ::RPG::GameCore::RelicMainAffixAvatarValueRow* Method_1_669CC83D2CFE0E95(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RelicMainAffixAvatarValueRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D590343DA0C40143_METHOD_1_669CC83D2CFE0E95_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D590343DA0C40143_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D590343DA0C40143_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D590343DA0C40143_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D590343DA0C40143_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D590343DA0C40143_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D590343DA0C40143_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_252CB53534BD7AA1(::RPG::GameCore::RelicMainAffixAvatarValueRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RelicMainAffixAvatarValueRow*))((::PBYTE)hIl2Cpp + CLASS_1_D590343DA0C40143_METHOD_1_252CB53534BD7AA1_OFFSET))(a1);
	}
};

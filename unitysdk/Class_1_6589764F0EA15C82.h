#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/ElfBehaviorStateType.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RestaurantEmojiConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6589764F0EA15C82_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18DAC570)
#define CLASS_1_6589764F0EA15C82_METHOD_1_1EEF8A69301AF020_OFFSET UNITYSDK_OFFSET(0x18DAC180)
#define CLASS_1_6589764F0EA15C82_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18DAC390)
#define CLASS_1_6589764F0EA15C82_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18DABD20)
#define CLASS_1_6589764F0EA15C82_METHOD_1_81688AC0A953F8F6_OFFSET UNITYSDK_OFFSET(0x18DAC5C0)
#define CLASS_1_6589764F0EA15C82_METHOD_1_902E92128F656223_OFFSET UNITYSDK_OFFSET(0x18DABFD0)
#define CLASS_1_6589764F0EA15C82_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18DAC430)
#define CLASS_1_6589764F0EA15C82_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18DABF70)
#define CLASS_1_6589764F0EA15C82_METHOD_1_DD4F5530A484ABEA_OFFSET UNITYSDK_OFFSET(0x18DABCA0)
#define CLASS_1_6589764F0EA15C82_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18DAC350)
#define CLASS_1_6589764F0EA15C82_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18DAC4D0)
#define CLASS_1_6589764F0EA15C82__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DAC920)

inline static constexpr unsigned int Class_1_6589764F0EA15C82_TypeDefinitionIndex = 10885;

class Class_1_6589764F0EA15C82 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmojiConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmojiConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6589764F0EA15C82_TypeDefinitionIndex)->GetStaticField(0x27EE0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6589764F0EA15C82_TypeDefinitionIndex)->GetStaticField(0x27EE8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6589764F0EA15C82_TypeDefinitionIndex)->GetStaticField(0x27EF0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6589764F0EA15C82_TypeDefinitionIndex)->GetStaticField(0xA8F0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6589764F0EA15C82_TypeDefinitionIndex)->GetStaticField(0xA8F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6589764F0EA15C82__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmojiConfigRow*>* Method_1_DD4F5530A484ABEA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmojiConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6589764F0EA15C82_METHOD_1_DD4F5530A484ABEA_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6589764F0EA15C82_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmojiConfigRow*> Method_1_902E92128F656223()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEmojiConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6589764F0EA15C82_METHOD_1_902E92128F656223_OFFSET))();
	}

	static ::RPG::GameCore::RestaurantEmojiConfigRow* Method_1_1EEF8A69301AF020(::RPG::GameCore::ElfBehaviorStateType a1)
	{
		return ((::RPG::GameCore::RestaurantEmojiConfigRow*(*)(::RPG::GameCore::ElfBehaviorStateType))((::PBYTE)hIl2Cpp + CLASS_1_6589764F0EA15C82_METHOD_1_1EEF8A69301AF020_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6589764F0EA15C82_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6589764F0EA15C82_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6589764F0EA15C82_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6589764F0EA15C82_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6589764F0EA15C82_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6589764F0EA15C82_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_81688AC0A953F8F6(::RPG::GameCore::RestaurantEmojiConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RestaurantEmojiConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_6589764F0EA15C82_METHOD_1_81688AC0A953F8F6_OFFSET))(a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RestaurantSpecialBubbleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_621400AABD564A45_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18480D20)
#define CLASS_1_621400AABD564A45_METHOD_1_17E4846385C9C9FF_OFFSET UNITYSDK_OFFSET(0x18480D70)
#define CLASS_1_621400AABD564A45_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18480B40)
#define CLASS_1_621400AABD564A45_METHOD_1_4151865047191A7E_OFFSET UNITYSDK_OFFSET(0x18480780)
#define CLASS_1_621400AABD564A45_METHOD_1_61E7564814498F1B_OFFSET UNITYSDK_OFFSET(0x18480930)
#define CLASS_1_621400AABD564A45_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x184804D0)
#define CLASS_1_621400AABD564A45_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18480BE0)
#define CLASS_1_621400AABD564A45_METHOD_1_AD6213DBCEDDCB79_OFFSET UNITYSDK_OFFSET(0x18480450)
#define CLASS_1_621400AABD564A45_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18480720)
#define CLASS_1_621400AABD564A45_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18480B00)
#define CLASS_1_621400AABD564A45_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18480C80)
#define CLASS_1_621400AABD564A45__CCTOR_OFFSET UNITYSDK_OFFSET(0x184810D0)

inline static constexpr unsigned int Class_1_621400AABD564A45_TypeDefinitionIndex = 10855;

class Class_1_621400AABD564A45 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialBubbleRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialBubbleRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_621400AABD564A45_TypeDefinitionIndex)->GetStaticField(0x2FBE0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_621400AABD564A45_TypeDefinitionIndex)->GetStaticField(0x2FBE8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_621400AABD564A45_TypeDefinitionIndex)->GetStaticField(0x2FBF0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_621400AABD564A45_TypeDefinitionIndex)->GetStaticField(0xBFA0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_621400AABD564A45_TypeDefinitionIndex)->GetStaticField(0xBFA1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_621400AABD564A45__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialBubbleRow*>* Method_1_AD6213DBCEDDCB79()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialBubbleRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_621400AABD564A45_METHOD_1_AD6213DBCEDDCB79_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_621400AABD564A45_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialBubbleRow*> Method_1_4151865047191A7E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSpecialBubbleRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_621400AABD564A45_METHOD_1_4151865047191A7E_OFFSET))();
	}

	static ::RPG::GameCore::RestaurantSpecialBubbleRow* Method_1_61E7564814498F1B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RestaurantSpecialBubbleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_621400AABD564A45_METHOD_1_61E7564814498F1B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_621400AABD564A45_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_621400AABD564A45_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_621400AABD564A45_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_621400AABD564A45_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_621400AABD564A45_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_621400AABD564A45_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_17E4846385C9C9FF(::RPG::GameCore::RestaurantSpecialBubbleRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RestaurantSpecialBubbleRow*))((::PBYTE)hIl2Cpp + CLASS_1_621400AABD564A45_METHOD_1_17E4846385C9C9FF_OFFSET))(a1);
	}
};

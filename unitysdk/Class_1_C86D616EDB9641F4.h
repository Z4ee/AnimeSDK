#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RestaurantBehaviorConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C86D616EDB9641F4_METHOD_1_05BFC7A6E70E597D_OFFSET UNITYSDK_OFFSET(0x16C43B50)
#define CLASS_1_C86D616EDB9641F4_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16C43B00)
#define CLASS_1_C86D616EDB9641F4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C43920)
#define CLASS_1_C86D616EDB9641F4_METHOD_1_46991AF4536FFDB8_OFFSET UNITYSDK_OFFSET(0x16C43260)
#define CLASS_1_C86D616EDB9641F4_METHOD_1_4D4C4D91755E0FC2_OFFSET UNITYSDK_OFFSET(0x16C43590)
#define CLASS_1_C86D616EDB9641F4_METHOD_1_4DE1F04F482A73B6_OFFSET UNITYSDK_OFFSET(0x16C43710)
#define CLASS_1_C86D616EDB9641F4_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C432E0)
#define CLASS_1_C86D616EDB9641F4_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C439C0)
#define CLASS_1_C86D616EDB9641F4_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C43530)
#define CLASS_1_C86D616EDB9641F4_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C438E0)
#define CLASS_1_C86D616EDB9641F4_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C43A60)
#define CLASS_1_C86D616EDB9641F4__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C43E70)

inline static constexpr unsigned int Class_1_C86D616EDB9641F4_TypeDefinitionIndex = 10606;

class Class_1_C86D616EDB9641F4 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantBehaviorConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantBehaviorConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C86D616EDB9641F4_TypeDefinitionIndex)->GetStaticField(0x2B770);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C86D616EDB9641F4_TypeDefinitionIndex)->GetStaticField(0x2B778);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C86D616EDB9641F4_TypeDefinitionIndex)->GetStaticField(0x2B780);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C86D616EDB9641F4_TypeDefinitionIndex)->GetStaticField(0xE720);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C86D616EDB9641F4_TypeDefinitionIndex)->GetStaticField(0xE721);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C86D616EDB9641F4__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantBehaviorConfigRow*>* Method_1_46991AF4536FFDB8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantBehaviorConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C86D616EDB9641F4_METHOD_1_46991AF4536FFDB8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C86D616EDB9641F4_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantBehaviorConfigRow*> Method_1_4D4C4D91755E0FC2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantBehaviorConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C86D616EDB9641F4_METHOD_1_4D4C4D91755E0FC2_OFFSET))();
	}

	static ::RPG::GameCore::RestaurantBehaviorConfigRow* Method_1_4DE1F04F482A73B6(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RestaurantBehaviorConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C86D616EDB9641F4_METHOD_1_4DE1F04F482A73B6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C86D616EDB9641F4_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C86D616EDB9641F4_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C86D616EDB9641F4_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C86D616EDB9641F4_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C86D616EDB9641F4_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C86D616EDB9641F4_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_05BFC7A6E70E597D(::RPG::GameCore::RestaurantBehaviorConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RestaurantBehaviorConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_C86D616EDB9641F4_METHOD_1_05BFC7A6E70E597D_OFFSET))(a1);
	}
};

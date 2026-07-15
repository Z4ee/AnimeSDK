#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RestaurantEventRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_18BA14551590039F_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1ACD4FE0)
#define CLASS_1_18BA14551590039F_METHOD_1_60D49293F529B435_OFFSET UNITYSDK_OFFSET(0x1ACD5030)
#define CLASS_1_18BA14551590039F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1ACD4E10)
#define CLASS_1_18BA14551590039F_METHOD_1_90DA321D78E145EE_OFFSET UNITYSDK_OFFSET(0x1ACD4C40)
#define CLASS_1_18BA14551590039F_METHOD_1_9F2B75673AA14358_OFFSET UNITYSDK_OFFSET(0x1ACD4AD0)
#define CLASS_1_18BA14551590039F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1ACD4EA0)
#define CLASS_1_18BA14551590039F_METHOD_1_CB3E25021F382AEF_OFFSET UNITYSDK_OFFSET(0x1ACD47C0)
#define CLASS_1_18BA14551590039F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1ACD4A70)
#define CLASS_1_18BA14551590039F_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1ACD4840)
#define CLASS_1_18BA14551590039F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1ACD4DD0)
#define CLASS_1_18BA14551590039F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1ACD4F40)
#define CLASS_1_18BA14551590039F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACD53A0)

inline static constexpr unsigned int Class_1_18BA14551590039F_TypeDefinitionIndex = 10940;

class Class_1_18BA14551590039F : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18BA14551590039F_TypeDefinitionIndex)->GetStaticField(0x368C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEventRewardRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEventRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18BA14551590039F_TypeDefinitionIndex)->GetStaticField(0x368C8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18BA14551590039F_TypeDefinitionIndex)->GetStaticField(0x368D0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_18BA14551590039F_TypeDefinitionIndex)->GetStaticField(0x9150);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_18BA14551590039F_TypeDefinitionIndex)->GetStaticField(0x9151);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_18BA14551590039F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEventRewardRow*>* Method_1_CB3E25021F382AEF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEventRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_18BA14551590039F_METHOD_1_CB3E25021F382AEF_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_18BA14551590039F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEventRewardRow*> Method_1_9F2B75673AA14358()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantEventRewardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_18BA14551590039F_METHOD_1_9F2B75673AA14358_OFFSET))();
	}

	static ::RPG::GameCore::RestaurantEventRewardRow* Method_1_90DA321D78E145EE(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RestaurantEventRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_18BA14551590039F_METHOD_1_90DA321D78E145EE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_18BA14551590039F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_18BA14551590039F_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_18BA14551590039F_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_18BA14551590039F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_18BA14551590039F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_18BA14551590039F_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_60D49293F529B435(::RPG::GameCore::RestaurantEventRewardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RestaurantEventRewardRow*))((::PBYTE)hIl2Cpp + CLASS_1_18BA14551590039F_METHOD_1_60D49293F529B435_OFFSET))(a1);
	}
};

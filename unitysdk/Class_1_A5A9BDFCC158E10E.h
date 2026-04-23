#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ShopGoodsPackConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A5A9BDFCC158E10E_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x182F26B0)
#define CLASS_1_A5A9BDFCC158E10E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x182F24D0)
#define CLASS_1_A5A9BDFCC158E10E_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x182F1E90)
#define CLASS_1_A5A9BDFCC158E10E_METHOD_1_8DEAC1AA9114F624_OFFSET UNITYSDK_OFFSET(0x182F22C0)
#define CLASS_1_A5A9BDFCC158E10E_METHOD_1_91FB35BD54E3B780_OFFSET UNITYSDK_OFFSET(0x182F2140)
#define CLASS_1_A5A9BDFCC158E10E_METHOD_1_A46B370B460D5576_OFFSET UNITYSDK_OFFSET(0x182F1E10)
#define CLASS_1_A5A9BDFCC158E10E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x182F2570)
#define CLASS_1_A5A9BDFCC158E10E_METHOD_1_AE0F175570A06FB3_OFFSET UNITYSDK_OFFSET(0x182F2700)
#define CLASS_1_A5A9BDFCC158E10E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x182F20E0)
#define CLASS_1_A5A9BDFCC158E10E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x182F2490)
#define CLASS_1_A5A9BDFCC158E10E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x182F2610)
#define CLASS_1_A5A9BDFCC158E10E__CCTOR_OFFSET UNITYSDK_OFFSET(0x182F2A10)

inline static constexpr unsigned int Class_1_A5A9BDFCC158E10E_TypeDefinitionIndex = 14326;

class Class_1_A5A9BDFCC158E10E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsPackConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsPackConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A5A9BDFCC158E10E_TypeDefinitionIndex)->GetStaticField(0x246F0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A5A9BDFCC158E10E_TypeDefinitionIndex)->GetStaticField(0x246F8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A5A9BDFCC158E10E_TypeDefinitionIndex)->GetStaticField(0x24700);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A5A9BDFCC158E10E_TypeDefinitionIndex)->GetStaticField(0x9820);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A5A9BDFCC158E10E_TypeDefinitionIndex)->GetStaticField(0x9821);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A5A9BDFCC158E10E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsPackConfigRow*>* Method_1_A46B370B460D5576()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsPackConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A5A9BDFCC158E10E_METHOD_1_A46B370B460D5576_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A5A9BDFCC158E10E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsPackConfigRow*> Method_1_91FB35BD54E3B780()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsPackConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A5A9BDFCC158E10E_METHOD_1_91FB35BD54E3B780_OFFSET))();
	}

	static ::RPG::GameCore::ShopGoodsPackConfigRow* Method_1_8DEAC1AA9114F624(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ShopGoodsPackConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A5A9BDFCC158E10E_METHOD_1_8DEAC1AA9114F624_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A5A9BDFCC158E10E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A5A9BDFCC158E10E_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A5A9BDFCC158E10E_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A5A9BDFCC158E10E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A5A9BDFCC158E10E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A5A9BDFCC158E10E_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_AE0F175570A06FB3(::RPG::GameCore::ShopGoodsPackConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ShopGoodsPackConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_A5A9BDFCC158E10E_METHOD_1_AE0F175570A06FB3_OFFSET))(a1);
	}
};

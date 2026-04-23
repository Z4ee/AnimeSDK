#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleSealTalkConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1839DF20)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_0905D84572A27BD7_OFFSET UNITYSDK_OFFSET(0x1839DB30)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1839DD40)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_339BC0830CCE93AD_OFFSET UNITYSDK_OFFSET(0x1839D650)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1839D6D0)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1839DDE0)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_CB3464852E3B9C26_OFFSET UNITYSDK_OFFSET(0x1839D980)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1839D920)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_D6691169A3E3C033_OFFSET UNITYSDK_OFFSET(0x1839DF70)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1839DD00)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1839DE80)
#define CLASS_1_26B4E7AD02FA0BD1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1839E2D0)

inline static constexpr unsigned int Class_1_26B4E7AD02FA0BD1_TypeDefinitionIndex = 11299;

class Class_1_26B4E7AD02FA0BD1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealTalkConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealTalkConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26B4E7AD02FA0BD1_TypeDefinitionIndex)->GetStaticField(0x21680);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26B4E7AD02FA0BD1_TypeDefinitionIndex)->GetStaticField(0x21688);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26B4E7AD02FA0BD1_TypeDefinitionIndex)->GetStaticField(0x21690);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_26B4E7AD02FA0BD1_TypeDefinitionIndex)->GetStaticField(0x8420);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_26B4E7AD02FA0BD1_TypeDefinitionIndex)->GetStaticField(0x8421);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealTalkConfigRow*>* Method_1_339BC0830CCE93AD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealTalkConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_339BC0830CCE93AD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealTalkConfigRow*> Method_1_CB3464852E3B9C26()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealTalkConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_CB3464852E3B9C26_OFFSET))();
	}

	static ::RPG::GameCore::MarbleSealTalkConfigRow* Method_1_0905D84572A27BD7(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleSealTalkConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_0905D84572A27BD7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_D6691169A3E3C033(::RPG::GameCore::MarbleSealTalkConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MarbleSealTalkConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_D6691169A3E3C033_OFFSET))(a1);
	}
};

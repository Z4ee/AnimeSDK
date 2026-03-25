#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMagicRoomRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D367C71A92DF8633_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x17914A90)
#define CLASS_1_D367C71A92DF8633_METHOD_1_1772148BE8B79633_OFFSET UNITYSDK_OFFSET(0x179141C0)
#define CLASS_1_D367C71A92DF8633_METHOD_1_207C8520AA52F1E1_OFFSET UNITYSDK_OFFSET(0x17914AE0)
#define CLASS_1_D367C71A92DF8633_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x179148B0)
#define CLASS_1_D367C71A92DF8633_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x17914240)
#define CLASS_1_D367C71A92DF8633_METHOD_1_92D51D7F5EF486E5_OFFSET UNITYSDK_OFFSET(0x179146A0)
#define CLASS_1_D367C71A92DF8633_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x17914950)
#define CLASS_1_D367C71A92DF8633_METHOD_1_B50B57088156CA40_OFFSET UNITYSDK_OFFSET(0x179144F0)
#define CLASS_1_D367C71A92DF8633_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x17914490)
#define CLASS_1_D367C71A92DF8633_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17914870)
#define CLASS_1_D367C71A92DF8633_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x179149F0)
#define CLASS_1_D367C71A92DF8633__CCTOR_OFFSET UNITYSDK_OFFSET(0x17914E40)

inline static constexpr unsigned int Class_1_D367C71A92DF8633_TypeDefinitionIndex = 13592;

class Class_1_D367C71A92DF8633 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D367C71A92DF8633_TypeDefinitionIndex)->GetStaticField(0x21E20);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D367C71A92DF8633_TypeDefinitionIndex)->GetStaticField(0x21E28);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D367C71A92DF8633_TypeDefinitionIndex)->GetStaticField(0x21E30);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D367C71A92DF8633_TypeDefinitionIndex)->GetStaticField(0x8DF0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D367C71A92DF8633_TypeDefinitionIndex)->GetStaticField(0x8DF1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D367C71A92DF8633__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomRow*>* Method_1_1772148BE8B79633()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D367C71A92DF8633_METHOD_1_1772148BE8B79633_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D367C71A92DF8633_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomRow*> Method_1_B50B57088156CA40()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D367C71A92DF8633_METHOD_1_B50B57088156CA40_OFFSET))();
	}

	static ::RPG::GameCore::RogueMagicRoomRow* Method_1_92D51D7F5EF486E5(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueMagicRoomRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D367C71A92DF8633_METHOD_1_92D51D7F5EF486E5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D367C71A92DF8633_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D367C71A92DF8633_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D367C71A92DF8633_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D367C71A92DF8633_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D367C71A92DF8633_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D367C71A92DF8633_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_207C8520AA52F1E1(::RPG::GameCore::RogueMagicRoomRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueMagicRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_D367C71A92DF8633_METHOD_1_207C8520AA52F1E1_OFFSET))(a1);
	}
};

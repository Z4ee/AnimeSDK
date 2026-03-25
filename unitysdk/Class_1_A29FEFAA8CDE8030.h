#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RogueMagicMarkType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMagicRoomMarkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A29FEFAA8CDE8030_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16BCF150)
#define CLASS_1_A29FEFAA8CDE8030_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16BCEF70)
#define CLASS_1_A29FEFAA8CDE8030_METHOD_1_44E232670B64C2AD_OFFSET UNITYSDK_OFFSET(0x16BCEB70)
#define CLASS_1_A29FEFAA8CDE8030_METHOD_1_4DC14912D8CFC45C_OFFSET UNITYSDK_OFFSET(0x16BCE840)
#define CLASS_1_A29FEFAA8CDE8030_METHOD_1_64FD3C04A68929B9_OFFSET UNITYSDK_OFFSET(0x16BCED20)
#define CLASS_1_A29FEFAA8CDE8030_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16BCE8C0)
#define CLASS_1_A29FEFAA8CDE8030_METHOD_1_877AE6FF03471008_OFFSET UNITYSDK_OFFSET(0x16BCF1A0)
#define CLASS_1_A29FEFAA8CDE8030_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16BCF010)
#define CLASS_1_A29FEFAA8CDE8030_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16BCEB10)
#define CLASS_1_A29FEFAA8CDE8030_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16BCEF30)
#define CLASS_1_A29FEFAA8CDE8030_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16BCF0B0)
#define CLASS_1_A29FEFAA8CDE8030__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BCF550)

inline static constexpr unsigned int Class_1_A29FEFAA8CDE8030_TypeDefinitionIndex = 13596;

class Class_1_A29FEFAA8CDE8030 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A29FEFAA8CDE8030_TypeDefinitionIndex)->GetStaticField(0x27DA0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A29FEFAA8CDE8030_TypeDefinitionIndex)->GetStaticField(0x27DA8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomMarkRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomMarkRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A29FEFAA8CDE8030_TypeDefinitionIndex)->GetStaticField(0x27DB0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A29FEFAA8CDE8030_TypeDefinitionIndex)->GetStaticField(0xD130);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A29FEFAA8CDE8030_TypeDefinitionIndex)->GetStaticField(0xD131);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A29FEFAA8CDE8030__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomMarkRow*>* Method_1_4DC14912D8CFC45C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomMarkRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A29FEFAA8CDE8030_METHOD_1_4DC14912D8CFC45C_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A29FEFAA8CDE8030_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomMarkRow*> Method_1_44E232670B64C2AD()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicRoomMarkRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A29FEFAA8CDE8030_METHOD_1_44E232670B64C2AD_OFFSET))();
	}

	static ::RPG::GameCore::RogueMagicRoomMarkRow* Method_1_64FD3C04A68929B9(::RPG::GameCore::RogueMagicRoomType a1, ::RPG::GameCore::RogueMagicMarkType a2)
	{
		return ((::RPG::GameCore::RogueMagicRoomMarkRow*(*)(::RPG::GameCore::RogueMagicRoomType, ::RPG::GameCore::RogueMagicMarkType))((::PBYTE)hIl2Cpp + CLASS_1_A29FEFAA8CDE8030_METHOD_1_64FD3C04A68929B9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A29FEFAA8CDE8030_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A29FEFAA8CDE8030_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A29FEFAA8CDE8030_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A29FEFAA8CDE8030_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A29FEFAA8CDE8030_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A29FEFAA8CDE8030_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_877AE6FF03471008(::RPG::GameCore::RogueMagicRoomMarkRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueMagicRoomMarkRow*))((::PBYTE)hIl2Cpp + CLASS_1_A29FEFAA8CDE8030_METHOD_1_877AE6FF03471008_OFFSET))(a1);
	}
};

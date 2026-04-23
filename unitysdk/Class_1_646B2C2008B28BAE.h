#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueAdventureRoomRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_646B2C2008B28BAE_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1845BD30)
#define CLASS_1_646B2C2008B28BAE_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1845BB50)
#define CLASS_1_646B2C2008B28BAE_METHOD_1_42C86F3F8CC5A3FB_OFFSET UNITYSDK_OFFSET(0x1845B790)
#define CLASS_1_646B2C2008B28BAE_METHOD_1_663B4362EBA07144_OFFSET UNITYSDK_OFFSET(0x1845B940)
#define CLASS_1_646B2C2008B28BAE_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1845B4E0)
#define CLASS_1_646B2C2008B28BAE_METHOD_1_94653A00F0DB000A_OFFSET UNITYSDK_OFFSET(0x1845BD80)
#define CLASS_1_646B2C2008B28BAE_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1845BBF0)
#define CLASS_1_646B2C2008B28BAE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1845B730)
#define CLASS_1_646B2C2008B28BAE_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1845BB10)
#define CLASS_1_646B2C2008B28BAE_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1845BC90)
#define CLASS_1_646B2C2008B28BAE_METHOD_1_FB00A707C6BD2346_OFFSET UNITYSDK_OFFSET(0x1845B460)
#define CLASS_1_646B2C2008B28BAE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1845C0E0)

inline static constexpr unsigned int Class_1_646B2C2008B28BAE_TypeDefinitionIndex = 13913;

class Class_1_646B2C2008B28BAE : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_646B2C2008B28BAE_TypeDefinitionIndex)->GetStaticField(0x2E520);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAdventureRoomRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAdventureRoomRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_646B2C2008B28BAE_TypeDefinitionIndex)->GetStaticField(0x2E528);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_646B2C2008B28BAE_TypeDefinitionIndex)->GetStaticField(0x2E530);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_646B2C2008B28BAE_TypeDefinitionIndex)->GetStaticField(0xB7C0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_646B2C2008B28BAE_TypeDefinitionIndex)->GetStaticField(0xB7C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_646B2C2008B28BAE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAdventureRoomRow*>* Method_1_FB00A707C6BD2346()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAdventureRoomRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_646B2C2008B28BAE_METHOD_1_FB00A707C6BD2346_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_646B2C2008B28BAE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAdventureRoomRow*> Method_1_42C86F3F8CC5A3FB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAdventureRoomRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_646B2C2008B28BAE_METHOD_1_42C86F3F8CC5A3FB_OFFSET))();
	}

	static ::RPG::GameCore::RogueAdventureRoomRow* Method_1_663B4362EBA07144(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueAdventureRoomRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_646B2C2008B28BAE_METHOD_1_663B4362EBA07144_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_646B2C2008B28BAE_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_646B2C2008B28BAE_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_646B2C2008B28BAE_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_646B2C2008B28BAE_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_646B2C2008B28BAE_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_646B2C2008B28BAE_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_94653A00F0DB000A(::RPG::GameCore::RogueAdventureRoomRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueAdventureRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_646B2C2008B28BAE_METHOD_1_94653A00F0DB000A_OFFSET))(a1);
	}
};

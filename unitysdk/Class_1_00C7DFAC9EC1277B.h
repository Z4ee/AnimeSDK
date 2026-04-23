#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCAdventureRoomRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_00C7DFAC9EC1277B_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x184845F0)
#define CLASS_1_00C7DFAC9EC1277B_METHOD_1_1F18CD540ADB362B_OFFSET UNITYSDK_OFFSET(0x18483D20)
#define CLASS_1_00C7DFAC9EC1277B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18484410)
#define CLASS_1_00C7DFAC9EC1277B_METHOD_1_41631A8778904DAD_OFFSET UNITYSDK_OFFSET(0x18484200)
#define CLASS_1_00C7DFAC9EC1277B_METHOD_1_551C0B83658C2214_OFFSET UNITYSDK_OFFSET(0x18484050)
#define CLASS_1_00C7DFAC9EC1277B_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18483DA0)
#define CLASS_1_00C7DFAC9EC1277B_METHOD_1_72C6C97539B00C49_OFFSET UNITYSDK_OFFSET(0x18484640)
#define CLASS_1_00C7DFAC9EC1277B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x184844B0)
#define CLASS_1_00C7DFAC9EC1277B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18483FF0)
#define CLASS_1_00C7DFAC9EC1277B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x184843D0)
#define CLASS_1_00C7DFAC9EC1277B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18484550)
#define CLASS_1_00C7DFAC9EC1277B__CCTOR_OFFSET UNITYSDK_OFFSET(0x184849A0)

inline static constexpr unsigned int Class_1_00C7DFAC9EC1277B_TypeDefinitionIndex = 13982;

class Class_1_00C7DFAC9EC1277B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAdventureRoomRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAdventureRoomRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00C7DFAC9EC1277B_TypeDefinitionIndex)->GetStaticField(0x2FD50);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00C7DFAC9EC1277B_TypeDefinitionIndex)->GetStaticField(0x2FD58);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00C7DFAC9EC1277B_TypeDefinitionIndex)->GetStaticField(0x2FD60);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_00C7DFAC9EC1277B_TypeDefinitionIndex)->GetStaticField(0xC020);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_00C7DFAC9EC1277B_TypeDefinitionIndex)->GetStaticField(0xC021);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00C7DFAC9EC1277B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAdventureRoomRow*>* Method_1_1F18CD540ADB362B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAdventureRoomRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_00C7DFAC9EC1277B_METHOD_1_1F18CD540ADB362B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_00C7DFAC9EC1277B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAdventureRoomRow*> Method_1_551C0B83658C2214()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAdventureRoomRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_00C7DFAC9EC1277B_METHOD_1_551C0B83658C2214_OFFSET))();
	}

	static ::RPG::GameCore::RogueDLCAdventureRoomRow* Method_1_41631A8778904DAD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueDLCAdventureRoomRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_00C7DFAC9EC1277B_METHOD_1_41631A8778904DAD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_00C7DFAC9EC1277B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00C7DFAC9EC1277B_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00C7DFAC9EC1277B_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_00C7DFAC9EC1277B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_00C7DFAC9EC1277B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_00C7DFAC9EC1277B_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_72C6C97539B00C49(::RPG::GameCore::RogueDLCAdventureRoomRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueDLCAdventureRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_00C7DFAC9EC1277B_METHOD_1_72C6C97539B00C49_OFFSET))(a1);
	}
};

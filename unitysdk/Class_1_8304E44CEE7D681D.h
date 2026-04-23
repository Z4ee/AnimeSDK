#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerRoomSlotConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8304E44CEE7D681D_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18DB3870)
#define CLASS_1_8304E44CEE7D681D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18DB3690)
#define CLASS_1_8304E44CEE7D681D_METHOD_1_3604229540E82337_OFFSET UNITYSDK_OFFSET(0x18DB38C0)
#define CLASS_1_8304E44CEE7D681D_METHOD_1_44AC9417ADFEC1E9_OFFSET UNITYSDK_OFFSET(0x18DB2FA0)
#define CLASS_1_8304E44CEE7D681D_METHOD_1_6AEC1561693E8113_OFFSET UNITYSDK_OFFSET(0x18DB3480)
#define CLASS_1_8304E44CEE7D681D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18DB3020)
#define CLASS_1_8304E44CEE7D681D_METHOD_1_92AB8FA76B123372_OFFSET UNITYSDK_OFFSET(0x18DB32D0)
#define CLASS_1_8304E44CEE7D681D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18DB3730)
#define CLASS_1_8304E44CEE7D681D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18DB3270)
#define CLASS_1_8304E44CEE7D681D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18DB3650)
#define CLASS_1_8304E44CEE7D681D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18DB37D0)
#define CLASS_1_8304E44CEE7D681D__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DB3C20)

inline static constexpr unsigned int Class_1_8304E44CEE7D681D_TypeDefinitionIndex = 13748;

class Class_1_8304E44CEE7D681D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8304E44CEE7D681D_TypeDefinitionIndex)->GetStaticField(0x28360);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8304E44CEE7D681D_TypeDefinitionIndex)->GetStaticField(0x28368);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8304E44CEE7D681D_TypeDefinitionIndex)->GetStaticField(0x28370);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8304E44CEE7D681D_TypeDefinitionIndex)->GetStaticField(0xAA90);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8304E44CEE7D681D_TypeDefinitionIndex)->GetStaticField(0xAA91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8304E44CEE7D681D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*>* Method_1_44AC9417ADFEC1E9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8304E44CEE7D681D_METHOD_1_44AC9417ADFEC1E9_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8304E44CEE7D681D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*> Method_1_92AB8FA76B123372()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerRoomSlotConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8304E44CEE7D681D_METHOD_1_92AB8FA76B123372_OFFSET))();
	}

	static ::RPG::GameCore::PlayerRoomSlotConfigRow* Method_1_6AEC1561693E8113(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlayerRoomSlotConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8304E44CEE7D681D_METHOD_1_6AEC1561693E8113_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8304E44CEE7D681D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8304E44CEE7D681D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8304E44CEE7D681D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8304E44CEE7D681D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8304E44CEE7D681D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8304E44CEE7D681D_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_3604229540E82337(::RPG::GameCore::PlayerRoomSlotConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlayerRoomSlotConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_8304E44CEE7D681D_METHOD_1_3604229540E82337_OFFSET))(a1);
	}
};

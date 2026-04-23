#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TeamBuildConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_41C2D7C6D735FB46_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x184A12A0)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x184A10C0)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x184A0A10)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_8128336B0B03542A_OFFSET UNITYSDK_OFFSET(0x184A0E70)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_9717C126F080751B_OFFSET UNITYSDK_OFFSET(0x184A0CC0)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x184A1160)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x184A0C60)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_D9376211BC3AA092_OFFSET UNITYSDK_OFFSET(0x184A12F0)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_EFD334B8AC6DE916_OFFSET UNITYSDK_OFFSET(0x184A0990)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x184A1080)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x184A1200)
#define CLASS_1_41C2D7C6D735FB46__CCTOR_OFFSET UNITYSDK_OFFSET(0x184A16A0)

inline static constexpr unsigned int Class_1_41C2D7C6D735FB46_TypeDefinitionIndex = 14472;

class Class_1_41C2D7C6D735FB46 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41C2D7C6D735FB46_TypeDefinitionIndex)->GetStaticField(0x309A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41C2D7C6D735FB46_TypeDefinitionIndex)->GetStaticField(0x309A8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41C2D7C6D735FB46_TypeDefinitionIndex)->GetStaticField(0x309B0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_41C2D7C6D735FB46_TypeDefinitionIndex)->GetStaticField(0xC390);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_41C2D7C6D735FB46_TypeDefinitionIndex)->GetStaticField(0xC391);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*>* Method_1_EFD334B8AC6DE916()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_EFD334B8AC6DE916_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*> Method_1_9717C126F080751B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_9717C126F080751B_OFFSET))();
	}

	static ::RPG::GameCore::TeamBuildConfigRow* Method_1_8128336B0B03542A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::TeamBuildConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_8128336B0B03542A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_D9376211BC3AA092(::RPG::GameCore::TeamBuildConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TeamBuildConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_D9376211BC3AA092_OFFSET))(a1);
	}
};

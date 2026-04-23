#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveDungeonRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_27F573BB59AF2E6F_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1841B460)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1841B280)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_3B69120939EF75EB_OFFSET UNITYSDK_OFFSET(0x1841AF40)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1841AC90)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_6C0035E25E62152C_OFFSET UNITYSDK_OFFSET(0x1841B4B0)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_7E5DB6441B451C88_OFFSET UNITYSDK_OFFSET(0x1841B0C0)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1841B320)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1841AEE0)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_E5A92DA4DF9F475F_OFFSET UNITYSDK_OFFSET(0x1841AC10)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1841B240)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1841B3C0)
#define CLASS_1_27F573BB59AF2E6F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1841B7C0)

inline static constexpr unsigned int Class_1_27F573BB59AF2E6F_TypeDefinitionIndex = 11179;

class Class_1_27F573BB59AF2E6F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27F573BB59AF2E6F_TypeDefinitionIndex)->GetStaticField(0x27F40);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27F573BB59AF2E6F_TypeDefinitionIndex)->GetStaticField(0x27F48);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27F573BB59AF2E6F_TypeDefinitionIndex)->GetStaticField(0x27F50);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27F573BB59AF2E6F_TypeDefinitionIndex)->GetStaticField(0xA910);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27F573BB59AF2E6F_TypeDefinitionIndex)->GetStaticField(0xA911);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*>* Method_1_E5A92DA4DF9F475F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_E5A92DA4DF9F475F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*> Method_1_3B69120939EF75EB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_3B69120939EF75EB_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveDungeonRow* Method_1_7E5DB6441B451C88(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveDungeonRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_7E5DB6441B451C88_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_6C0035E25E62152C(::RPG::GameCore::IdleLiveDungeonRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveDungeonRow*))((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_6C0035E25E62152C_OFFSET))(a1);
	}
};

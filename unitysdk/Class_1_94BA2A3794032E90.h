#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveSpineUnlockRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_94BA2A3794032E90_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x19121FC0)
#define CLASS_1_94BA2A3794032E90_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19121DE0)
#define CLASS_1_94BA2A3794032E90_METHOD_1_509BBBA5E6CE38C4_OFFSET UNITYSDK_OFFSET(0x191216F0)
#define CLASS_1_94BA2A3794032E90_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x19121770)
#define CLASS_1_94BA2A3794032E90_METHOD_1_8989BE256D1B41D8_OFFSET UNITYSDK_OFFSET(0x19122010)
#define CLASS_1_94BA2A3794032E90_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19121E80)
#define CLASS_1_94BA2A3794032E90_METHOD_1_BB1A147A29E2CD82_OFFSET UNITYSDK_OFFSET(0x19121BD0)
#define CLASS_1_94BA2A3794032E90_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x191219C0)
#define CLASS_1_94BA2A3794032E90_METHOD_1_E8CF48251FB8F2B5_OFFSET UNITYSDK_OFFSET(0x19121A20)
#define CLASS_1_94BA2A3794032E90_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19121DA0)
#define CLASS_1_94BA2A3794032E90_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19121F20)
#define CLASS_1_94BA2A3794032E90__CCTOR_OFFSET UNITYSDK_OFFSET(0x19122370)

inline static constexpr unsigned int Class_1_94BA2A3794032E90_TypeDefinitionIndex = 11264;

class Class_1_94BA2A3794032E90 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94BA2A3794032E90_TypeDefinitionIndex)->GetStaticField(0x3F910);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94BA2A3794032E90_TypeDefinitionIndex)->GetStaticField(0x3F918);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94BA2A3794032E90_TypeDefinitionIndex)->GetStaticField(0x3F920);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_94BA2A3794032E90_TypeDefinitionIndex)->GetStaticField(0xE450);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_94BA2A3794032E90_TypeDefinitionIndex)->GetStaticField(0xE451);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*>* Method_1_509BBBA5E6CE38C4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_509BBBA5E6CE38C4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*> Method_1_E8CF48251FB8F2B5()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_E8CF48251FB8F2B5_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveSpineUnlockRow* Method_1_BB1A147A29E2CD82(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveSpineUnlockRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_BB1A147A29E2CD82_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_8989BE256D1B41D8(::RPG::GameCore::IdleLiveSpineUnlockRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveSpineUnlockRow*))((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_8989BE256D1B41D8_OFFSET))(a1);
	}
};

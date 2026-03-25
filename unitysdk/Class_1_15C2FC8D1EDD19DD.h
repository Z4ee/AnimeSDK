#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpecialRestartBattleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_15C2FC8D1EDD19DD_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16B00760)
#define CLASS_1_15C2FC8D1EDD19DD_METHOD_1_1E7B1F08D589E2C1_OFFSET UNITYSDK_OFFSET(0x16AFFE90)
#define CLASS_1_15C2FC8D1EDD19DD_METHOD_1_25CB5AB31E9DB333_OFFSET UNITYSDK_OFFSET(0x16B00370)
#define CLASS_1_15C2FC8D1EDD19DD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16B00580)
#define CLASS_1_15C2FC8D1EDD19DD_METHOD_1_43B125F5AC0378F6_OFFSET UNITYSDK_OFFSET(0x16B001C0)
#define CLASS_1_15C2FC8D1EDD19DD_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16AFFF10)
#define CLASS_1_15C2FC8D1EDD19DD_METHOD_1_908CA8E39C730107_OFFSET UNITYSDK_OFFSET(0x16B007B0)
#define CLASS_1_15C2FC8D1EDD19DD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16B00620)
#define CLASS_1_15C2FC8D1EDD19DD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16B00160)
#define CLASS_1_15C2FC8D1EDD19DD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16B00540)
#define CLASS_1_15C2FC8D1EDD19DD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16B006C0)
#define CLASS_1_15C2FC8D1EDD19DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B00B10)

inline static constexpr unsigned int Class_1_15C2FC8D1EDD19DD_TypeDefinitionIndex = 13902;

class Class_1_15C2FC8D1EDD19DD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialRestartBattleRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialRestartBattleRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_15C2FC8D1EDD19DD_TypeDefinitionIndex)->GetStaticField(0x27CE0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_15C2FC8D1EDD19DD_TypeDefinitionIndex)->GetStaticField(0x27CE8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_15C2FC8D1EDD19DD_TypeDefinitionIndex)->GetStaticField(0x27CF0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_15C2FC8D1EDD19DD_TypeDefinitionIndex)->GetStaticField(0xD0D0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_15C2FC8D1EDD19DD_TypeDefinitionIndex)->GetStaticField(0xD0D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_15C2FC8D1EDD19DD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialRestartBattleRow*>* Method_1_1E7B1F08D589E2C1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialRestartBattleRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_15C2FC8D1EDD19DD_METHOD_1_1E7B1F08D589E2C1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_15C2FC8D1EDD19DD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialRestartBattleRow*> Method_1_43B125F5AC0378F6()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialRestartBattleRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_15C2FC8D1EDD19DD_METHOD_1_43B125F5AC0378F6_OFFSET))();
	}

	static ::RPG::GameCore::SpecialRestartBattleRow* Method_1_25CB5AB31E9DB333(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SpecialRestartBattleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_15C2FC8D1EDD19DD_METHOD_1_25CB5AB31E9DB333_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_15C2FC8D1EDD19DD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_15C2FC8D1EDD19DD_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_15C2FC8D1EDD19DD_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_15C2FC8D1EDD19DD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_15C2FC8D1EDD19DD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_15C2FC8D1EDD19DD_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_908CA8E39C730107(::RPG::GameCore::SpecialRestartBattleRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SpecialRestartBattleRow*))((::PBYTE)hIl2Cpp + CLASS_1_15C2FC8D1EDD19DD_METHOD_1_908CA8E39C730107_OFFSET))(a1);
	}
};

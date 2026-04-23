#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ExpeditionTeamConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_80D79F9CCBCEAB85_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18395F30)
#define CLASS_1_80D79F9CCBCEAB85_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18395D50)
#define CLASS_1_80D79F9CCBCEAB85_METHOD_1_33617B1BEB90C779_OFFSET UNITYSDK_OFFSET(0x18395660)
#define CLASS_1_80D79F9CCBCEAB85_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x183956E0)
#define CLASS_1_80D79F9CCBCEAB85_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18395DF0)
#define CLASS_1_80D79F9CCBCEAB85_METHOD_1_B553505C5CB63292_OFFSET UNITYSDK_OFFSET(0x18395990)
#define CLASS_1_80D79F9CCBCEAB85_METHOD_1_B710E4260C43005F_OFFSET UNITYSDK_OFFSET(0x18395F80)
#define CLASS_1_80D79F9CCBCEAB85_METHOD_1_C3A2B770A051FB5B_OFFSET UNITYSDK_OFFSET(0x18395B40)
#define CLASS_1_80D79F9CCBCEAB85_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18395930)
#define CLASS_1_80D79F9CCBCEAB85_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18395D10)
#define CLASS_1_80D79F9CCBCEAB85_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18395E90)
#define CLASS_1_80D79F9CCBCEAB85__CCTOR_OFFSET UNITYSDK_OFFSET(0x183962E0)

inline static constexpr unsigned int Class_1_80D79F9CCBCEAB85_TypeDefinitionIndex = 12528;

class Class_1_80D79F9CCBCEAB85 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_80D79F9CCBCEAB85_TypeDefinitionIndex)->GetStaticField(0x212D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionTeamConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionTeamConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_80D79F9CCBCEAB85_TypeDefinitionIndex)->GetStaticField(0x212D8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_80D79F9CCBCEAB85_TypeDefinitionIndex)->GetStaticField(0x212E0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_80D79F9CCBCEAB85_TypeDefinitionIndex)->GetStaticField(0x8260);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_80D79F9CCBCEAB85_TypeDefinitionIndex)->GetStaticField(0x8261);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_80D79F9CCBCEAB85__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionTeamConfigRow*>* Method_1_33617B1BEB90C779()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionTeamConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_80D79F9CCBCEAB85_METHOD_1_33617B1BEB90C779_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_80D79F9CCBCEAB85_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionTeamConfigRow*> Method_1_B553505C5CB63292()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionTeamConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_80D79F9CCBCEAB85_METHOD_1_B553505C5CB63292_OFFSET))();
	}

	static ::RPG::GameCore::ExpeditionTeamConfigRow* Method_1_C3A2B770A051FB5B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ExpeditionTeamConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_80D79F9CCBCEAB85_METHOD_1_C3A2B770A051FB5B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_80D79F9CCBCEAB85_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_80D79F9CCBCEAB85_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_80D79F9CCBCEAB85_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_80D79F9CCBCEAB85_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_80D79F9CCBCEAB85_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_80D79F9CCBCEAB85_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_B710E4260C43005F(::RPG::GameCore::ExpeditionTeamConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ExpeditionTeamConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_80D79F9CCBCEAB85_METHOD_1_B710E4260C43005F_OFFSET))(a1);
	}
};

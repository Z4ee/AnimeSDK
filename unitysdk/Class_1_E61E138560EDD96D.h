#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ILBattleAvatarConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E61E138560EDD96D_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1844D720)
#define CLASS_1_E61E138560EDD96D_METHOD_1_10B93013877E2DC3_OFFSET UNITYSDK_OFFSET(0x1844D330)
#define CLASS_1_E61E138560EDD96D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1844D540)
#define CLASS_1_E61E138560EDD96D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1844CF00)
#define CLASS_1_E61E138560EDD96D_METHOD_1_7BDD6BA14AF5637E_OFFSET UNITYSDK_OFFSET(0x1844D770)
#define CLASS_1_E61E138560EDD96D_METHOD_1_7CF068FD29BA3FB9_OFFSET UNITYSDK_OFFSET(0x1844D1B0)
#define CLASS_1_E61E138560EDD96D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1844D5E0)
#define CLASS_1_E61E138560EDD96D_METHOD_1_B2759CEE6174BF91_OFFSET UNITYSDK_OFFSET(0x1844CE80)
#define CLASS_1_E61E138560EDD96D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1844D150)
#define CLASS_1_E61E138560EDD96D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1844D500)
#define CLASS_1_E61E138560EDD96D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1844D680)
#define CLASS_1_E61E138560EDD96D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1844DA90)

inline static constexpr unsigned int Class_1_E61E138560EDD96D_TypeDefinitionIndex = 13053;

class Class_1_E61E138560EDD96D : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E61E138560EDD96D_TypeDefinitionIndex)->GetStaticField(0x2A700);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E61E138560EDD96D_TypeDefinitionIndex)->GetStaticField(0x2A708);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E61E138560EDD96D_TypeDefinitionIndex)->GetStaticField(0x2A710);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E61E138560EDD96D_TypeDefinitionIndex)->GetStaticField(0xB590);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E61E138560EDD96D_TypeDefinitionIndex)->GetStaticField(0xB591);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E61E138560EDD96D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarConfigRow*>* Method_1_B2759CEE6174BF91()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E61E138560EDD96D_METHOD_1_B2759CEE6174BF91_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E61E138560EDD96D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarConfigRow*> Method_1_7CF068FD29BA3FB9()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E61E138560EDD96D_METHOD_1_7CF068FD29BA3FB9_OFFSET))();
	}

	static ::RPG::GameCore::ILBattleAvatarConfigRow* Method_1_10B93013877E2DC3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ILBattleAvatarConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E61E138560EDD96D_METHOD_1_10B93013877E2DC3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E61E138560EDD96D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E61E138560EDD96D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E61E138560EDD96D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E61E138560EDD96D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E61E138560EDD96D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E61E138560EDD96D_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_7BDD6BA14AF5637E(::RPG::GameCore::ILBattleAvatarConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ILBattleAvatarConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_E61E138560EDD96D_METHOD_1_7BDD6BA14AF5637E_OFFSET))(a1);
	}
};

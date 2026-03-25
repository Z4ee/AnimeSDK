#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TarotMailDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7C0B3E09008393BC_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16C2FA00)
#define CLASS_1_7C0B3E09008393BC_METHOD_1_1D94F57F1A24BA75_OFFSET UNITYSDK_OFFSET(0x16C2F460)
#define CLASS_1_7C0B3E09008393BC_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C2F820)
#define CLASS_1_7C0B3E09008393BC_METHOD_1_33DD04F07848101E_OFFSET UNITYSDK_OFFSET(0x16C2F610)
#define CLASS_1_7C0B3E09008393BC_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C2F1B0)
#define CLASS_1_7C0B3E09008393BC_METHOD_1_89CC7A85C1BDE880_OFFSET UNITYSDK_OFFSET(0x16C2F130)
#define CLASS_1_7C0B3E09008393BC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C2F8C0)
#define CLASS_1_7C0B3E09008393BC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C2F400)
#define CLASS_1_7C0B3E09008393BC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C2F7E0)
#define CLASS_1_7C0B3E09008393BC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C2F960)
#define CLASS_1_7C0B3E09008393BC_METHOD_1_FA0D7B739BDD63AC_OFFSET UNITYSDK_OFFSET(0x16C2FA50)
#define CLASS_1_7C0B3E09008393BC__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C2FDB0)

inline static constexpr unsigned int Class_1_7C0B3E09008393BC_TypeDefinitionIndex = 13991;

class Class_1_7C0B3E09008393BC : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C0B3E09008393BC_TypeDefinitionIndex)->GetStaticField(0x2AEC0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailDataRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C0B3E09008393BC_TypeDefinitionIndex)->GetStaticField(0x2AEC8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C0B3E09008393BC_TypeDefinitionIndex)->GetStaticField(0x2AED0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C0B3E09008393BC_TypeDefinitionIndex)->GetStaticField(0xE2F0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C0B3E09008393BC_TypeDefinitionIndex)->GetStaticField(0xE2F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C0B3E09008393BC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailDataRow*>* Method_1_89CC7A85C1BDE880()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C0B3E09008393BC_METHOD_1_89CC7A85C1BDE880_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C0B3E09008393BC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailDataRow*> Method_1_1D94F57F1A24BA75()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C0B3E09008393BC_METHOD_1_1D94F57F1A24BA75_OFFSET))();
	}

	static ::RPG::GameCore::TarotMailDataRow* Method_1_33DD04F07848101E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TarotMailDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C0B3E09008393BC_METHOD_1_33DD04F07848101E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C0B3E09008393BC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C0B3E09008393BC_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C0B3E09008393BC_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7C0B3E09008393BC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7C0B3E09008393BC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7C0B3E09008393BC_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_FA0D7B739BDD63AC(::RPG::GameCore::TarotMailDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TarotMailDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_7C0B3E09008393BC_METHOD_1_FA0D7B739BDD63AC_OFFSET))(a1);
	}
};

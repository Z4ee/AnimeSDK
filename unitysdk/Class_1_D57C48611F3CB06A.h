#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournGambleGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D57C48611F3CB06A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x193ADFC0)
#define CLASS_1_D57C48611F3CB06A_METHOD_1_408DE440C72EBBCE_OFFSET UNITYSDK_OFFSET(0x193AE010)
#define CLASS_1_D57C48611F3CB06A_METHOD_1_7A338E30CD50E23A_OFFSET UNITYSDK_OFFSET(0x193AD7A0)
#define CLASS_1_D57C48611F3CB06A_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x193ADDF0)
#define CLASS_1_D57C48611F3CB06A_METHOD_1_9F04A427C6ACE51B_OFFSET UNITYSDK_OFFSET(0x193ADC20)
#define CLASS_1_D57C48611F3CB06A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x193ADE80)
#define CLASS_1_D57C48611F3CB06A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x193ADA50)
#define CLASS_1_D57C48611F3CB06A_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x193AD820)
#define CLASS_1_D57C48611F3CB06A_METHOD_1_EC64B9896A54651F_OFFSET UNITYSDK_OFFSET(0x193ADAB0)
#define CLASS_1_D57C48611F3CB06A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x193ADDB0)
#define CLASS_1_D57C48611F3CB06A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x193ADF20)
#define CLASS_1_D57C48611F3CB06A__CCTOR_OFFSET UNITYSDK_OFFSET(0x193AE380)

inline static constexpr unsigned int Class_1_D57C48611F3CB06A_TypeDefinitionIndex = 14309;

class Class_1_D57C48611F3CB06A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D57C48611F3CB06A_TypeDefinitionIndex)->GetStaticField(0x58830);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D57C48611F3CB06A_TypeDefinitionIndex)->GetStaticField(0x58838);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D57C48611F3CB06A_TypeDefinitionIndex)->GetStaticField(0x58840);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D57C48611F3CB06A_TypeDefinitionIndex)->GetStaticField(0x11980);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D57C48611F3CB06A_TypeDefinitionIndex)->GetStaticField(0x11981);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D57C48611F3CB06A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*>* Method_1_7A338E30CD50E23A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D57C48611F3CB06A_METHOD_1_7A338E30CD50E23A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D57C48611F3CB06A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*> Method_1_EC64B9896A54651F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D57C48611F3CB06A_METHOD_1_EC64B9896A54651F_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournGambleGroupRow* Method_1_9F04A427C6ACE51B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournGambleGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D57C48611F3CB06A_METHOD_1_9F04A427C6ACE51B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D57C48611F3CB06A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D57C48611F3CB06A_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D57C48611F3CB06A_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D57C48611F3CB06A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D57C48611F3CB06A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D57C48611F3CB06A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_408DE440C72EBBCE(::RPG::GameCore::RogueTournGambleGroupRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournGambleGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_D57C48611F3CB06A_METHOD_1_408DE440C72EBBCE_OFFSET))(a1);
	}
};

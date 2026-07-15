#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityDiceCombatDiceContentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_194FC568A6087BF7_METHOD_1_04DD408465AD38A4_OFFSET UNITYSDK_OFFSET(0x1B46D410)
#define CLASS_1_194FC568A6087BF7_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B46D920)
#define CLASS_1_194FC568A6087BF7_METHOD_1_8241C93A93685077_OFFSET UNITYSDK_OFFSET(0x1B46D100)
#define CLASS_1_194FC568A6087BF7_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B46D750)
#define CLASS_1_194FC568A6087BF7_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B46D7E0)
#define CLASS_1_194FC568A6087BF7_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B46D3B0)
#define CLASS_1_194FC568A6087BF7_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B46D180)
#define CLASS_1_194FC568A6087BF7_METHOD_1_E0B31A144F07C199_OFFSET UNITYSDK_OFFSET(0x1B46D970)
#define CLASS_1_194FC568A6087BF7_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B46D710)
#define CLASS_1_194FC568A6087BF7_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B46D880)
#define CLASS_1_194FC568A6087BF7_METHOD_1_FE24D5FFEA64B1CA_OFFSET UNITYSDK_OFFSET(0x1B46D580)
#define CLASS_1_194FC568A6087BF7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B46DCE0)

inline static constexpr unsigned int Class_1_194FC568A6087BF7_TypeDefinitionIndex = 10853;

class Class_1_194FC568A6087BF7 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_194FC568A6087BF7_TypeDefinitionIndex)->GetStaticField(0x3F840);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_194FC568A6087BF7_TypeDefinitionIndex)->GetStaticField(0x3F848);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_194FC568A6087BF7_TypeDefinitionIndex)->GetStaticField(0x3F850);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_194FC568A6087BF7_TypeDefinitionIndex)->GetStaticField(0xA860);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_194FC568A6087BF7_TypeDefinitionIndex)->GetStaticField(0xA861);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_194FC568A6087BF7__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*>* Method_1_8241C93A93685077()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_194FC568A6087BF7_METHOD_1_8241C93A93685077_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_194FC568A6087BF7_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*> Method_1_04DD408465AD38A4()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_194FC568A6087BF7_METHOD_1_04DD408465AD38A4_OFFSET))();
	}

	static ::RPG::GameCore::ActivityDiceCombatDiceContentRow* Method_1_FE24D5FFEA64B1CA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatDiceContentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_194FC568A6087BF7_METHOD_1_FE24D5FFEA64B1CA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_194FC568A6087BF7_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_194FC568A6087BF7_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_194FC568A6087BF7_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_194FC568A6087BF7_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_194FC568A6087BF7_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_194FC568A6087BF7_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_E0B31A144F07C199(::RPG::GameCore::ActivityDiceCombatDiceContentRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatDiceContentRow*))((::PBYTE)hIl2Cpp + CLASS_1_194FC568A6087BF7_METHOD_1_E0B31A144F07C199_OFFSET))(a1);
	}
};

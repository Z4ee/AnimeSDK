#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeBirdRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9CAE86399A7CF121_METHOD_1_02CA03C4C62325F6_OFFSET UNITYSDK_OFFSET(0x191C9DF0)
#define CLASS_1_9CAE86399A7CF121_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x191CA2C0)
#define CLASS_1_9CAE86399A7CF121_METHOD_1_4217A8D8305ABF45_OFFSET UNITYSDK_OFFSET(0x191C9AE0)
#define CLASS_1_9CAE86399A7CF121_METHOD_1_4E2C8416B51D1FFA_OFFSET UNITYSDK_OFFSET(0x191CA310)
#define CLASS_1_9CAE86399A7CF121_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x191CA0F0)
#define CLASS_1_9CAE86399A7CF121_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x191CA180)
#define CLASS_1_9CAE86399A7CF121_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x191C9D90)
#define CLASS_1_9CAE86399A7CF121_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x191C9B60)
#define CLASS_1_9CAE86399A7CF121_METHOD_1_EE1EA13CE9514908_OFFSET UNITYSDK_OFFSET(0x191C9F60)
#define CLASS_1_9CAE86399A7CF121_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x191CA0B0)
#define CLASS_1_9CAE86399A7CF121_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x191CA220)
#define CLASS_1_9CAE86399A7CF121__CCTOR_OFFSET UNITYSDK_OFFSET(0x191CA630)

inline static constexpr unsigned int Class_1_9CAE86399A7CF121_TypeDefinitionIndex = 11392;

class Class_1_9CAE86399A7CF121 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBirdRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBirdRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CAE86399A7CF121_TypeDefinitionIndex)->GetStaticField(0x4E110);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CAE86399A7CF121_TypeDefinitionIndex)->GetStaticField(0x4E118);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CAE86399A7CF121_TypeDefinitionIndex)->GetStaticField(0x4E120);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CAE86399A7CF121_TypeDefinitionIndex)->GetStaticField(0xF070);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CAE86399A7CF121_TypeDefinitionIndex)->GetStaticField(0xF071);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CAE86399A7CF121__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBirdRow*>* Method_1_4217A8D8305ABF45()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBirdRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CAE86399A7CF121_METHOD_1_4217A8D8305ABF45_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CAE86399A7CF121_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBirdRow*> Method_1_02CA03C4C62325F6()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBirdRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CAE86399A7CF121_METHOD_1_02CA03C4C62325F6_OFFSET))();
	}

	static ::RPG::GameCore::MatchThreeBirdRow* Method_1_EE1EA13CE9514908(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MatchThreeBirdRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9CAE86399A7CF121_METHOD_1_EE1EA13CE9514908_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CAE86399A7CF121_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CAE86399A7CF121_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CAE86399A7CF121_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9CAE86399A7CF121_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9CAE86399A7CF121_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9CAE86399A7CF121_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_4E2C8416B51D1FFA(::RPG::GameCore::MatchThreeBirdRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MatchThreeBirdRow*))((::PBYTE)hIl2Cpp + CLASS_1_9CAE86399A7CF121_METHOD_1_4E2C8416B51D1FFA_OFFSET))(a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattlePassConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_88065158E40D4D0C_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x179B63F0)
#define CLASS_1_88065158E40D4D0C_METHOD_1_0D206ADF14FB58CF_OFFSET UNITYSDK_OFFSET(0x179B6440)
#define CLASS_1_88065158E40D4D0C_METHOD_1_2F3EA56E7B16C086_OFFSET UNITYSDK_OFFSET(0x179B5B70)
#define CLASS_1_88065158E40D4D0C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x179B6210)
#define CLASS_1_88065158E40D4D0C_METHOD_1_5EE63B7990473891_OFFSET UNITYSDK_OFFSET(0x179B6050)
#define CLASS_1_88065158E40D4D0C_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x179B5BF0)
#define CLASS_1_88065158E40D4D0C_METHOD_1_73DBFAD6B908F96B_OFFSET UNITYSDK_OFFSET(0x179B5EA0)
#define CLASS_1_88065158E40D4D0C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x179B62B0)
#define CLASS_1_88065158E40D4D0C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x179B5E40)
#define CLASS_1_88065158E40D4D0C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x179B61D0)
#define CLASS_1_88065158E40D4D0C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x179B6350)
#define CLASS_1_88065158E40D4D0C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179B6750)

inline static constexpr unsigned int Class_1_88065158E40D4D0C_TypeDefinitionIndex = 11751;

class Class_1_88065158E40D4D0C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88065158E40D4D0C_TypeDefinitionIndex)->GetStaticField(0x26140);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88065158E40D4D0C_TypeDefinitionIndex)->GetStaticField(0x26148);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88065158E40D4D0C_TypeDefinitionIndex)->GetStaticField(0x26150);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88065158E40D4D0C_TypeDefinitionIndex)->GetStaticField(0xC620);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88065158E40D4D0C_TypeDefinitionIndex)->GetStaticField(0xC621);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassConfigRow*>* Method_1_2F3EA56E7B16C086()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_2F3EA56E7B16C086_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassConfigRow*> Method_1_73DBFAD6B908F96B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_73DBFAD6B908F96B_OFFSET))();
	}

	static ::RPG::GameCore::BattlePassConfigRow* Method_1_5EE63B7990473891(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::BattlePassConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_5EE63B7990473891_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_0D206ADF14FB58CF(::RPG::GameCore::BattlePassConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattlePassConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_0D206ADF14FB58CF_OFFSET))(a1);
	}
};

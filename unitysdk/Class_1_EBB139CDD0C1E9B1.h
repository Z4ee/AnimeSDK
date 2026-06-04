#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleActionEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EBB139CDD0C1E9B1_METHOD_1_06B60B95F0D5DEA9_OFFSET UNITYSDK_OFFSET(0x18F7FD90)
#define CLASS_1_EBB139CDD0C1E9B1_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18F80570)
#define CLASS_1_EBB139CDD0C1E9B1_METHOD_1_6431496A733EA3FE_OFFSET UNITYSDK_OFFSET(0x18F800A0)
#define CLASS_1_EBB139CDD0C1E9B1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F803A0)
#define CLASS_1_EBB139CDD0C1E9B1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18F80430)
#define CLASS_1_EBB139CDD0C1E9B1_METHOD_1_BA0EBF452EA5CD66_OFFSET UNITYSDK_OFFSET(0x18F805C0)
#define CLASS_1_EBB139CDD0C1E9B1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18F80040)
#define CLASS_1_EBB139CDD0C1E9B1_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18F7FE10)
#define CLASS_1_EBB139CDD0C1E9B1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18F80360)
#define CLASS_1_EBB139CDD0C1E9B1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18F804D0)
#define CLASS_1_EBB139CDD0C1E9B1_METHOD_1_F88BF4879D6BA044_OFFSET UNITYSDK_OFFSET(0x18F80210)
#define CLASS_1_EBB139CDD0C1E9B1__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F808E0)

inline static constexpr unsigned int Class_1_EBB139CDD0C1E9B1_TypeDefinitionIndex = 12214;

class Class_1_EBB139CDD0C1E9B1 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBB139CDD0C1E9B1_TypeDefinitionIndex)->GetStaticField(0x38240);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBB139CDD0C1E9B1_TypeDefinitionIndex)->GetStaticField(0x38248);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleActionEventRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleActionEventRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBB139CDD0C1E9B1_TypeDefinitionIndex)->GetStaticField(0x38250);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBB139CDD0C1E9B1_TypeDefinitionIndex)->GetStaticField(0xB390);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBB139CDD0C1E9B1_TypeDefinitionIndex)->GetStaticField(0xB391);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB139CDD0C1E9B1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleActionEventRow*>* Method_1_06B60B95F0D5DEA9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleActionEventRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB139CDD0C1E9B1_METHOD_1_06B60B95F0D5DEA9_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB139CDD0C1E9B1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleActionEventRow*> Method_1_6431496A733EA3FE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleActionEventRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB139CDD0C1E9B1_METHOD_1_6431496A733EA3FE_OFFSET))();
	}

	static ::RPG::GameCore::BattleActionEventRow* Method_1_F88BF4879D6BA044(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::BattleActionEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB139CDD0C1E9B1_METHOD_1_F88BF4879D6BA044_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB139CDD0C1E9B1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB139CDD0C1E9B1_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBB139CDD0C1E9B1_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB139CDD0C1E9B1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_EBB139CDD0C1E9B1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_EBB139CDD0C1E9B1_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_BA0EBF452EA5CD66(::RPG::GameCore::BattleActionEventRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattleActionEventRow*))((::PBYTE)hIl2Cpp + CLASS_1_EBB139CDD0C1E9B1_METHOD_1_BA0EBF452EA5CD66_OFFSET))(a1);
	}
};

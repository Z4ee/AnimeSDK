#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RechargeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B7622709AF1BA360_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19EC7C10)
#define CLASS_1_B7622709AF1BA360_METHOD_1_1CD2C5AC39C9CF38_OFFSET UNITYSDK_OFFSET(0x19EC7C60)
#define CLASS_1_B7622709AF1BA360_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19EC7A40)
#define CLASS_1_B7622709AF1BA360_METHOD_1_A3B4236ABA93D03E_OFFSET UNITYSDK_OFFSET(0x19EC7850)
#define CLASS_1_B7622709AF1BA360_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19EC7AD0)
#define CLASS_1_B7622709AF1BA360_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19EC7680)
#define CLASS_1_B7622709AF1BA360_METHOD_1_DB5AF6E3A93AA3B5_OFFSET UNITYSDK_OFFSET(0x19EC76E0)
#define CLASS_1_B7622709AF1BA360_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19EC7450)
#define CLASS_1_B7622709AF1BA360_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19EC7A00)
#define CLASS_1_B7622709AF1BA360_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19EC7B70)
#define CLASS_1_B7622709AF1BA360_METHOD_1_FBF092B3E7A53A44_OFFSET UNITYSDK_OFFSET(0x19EC73D0)
#define CLASS_1_B7622709AF1BA360__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EC7FD0)

inline static constexpr unsigned int Class_1_B7622709AF1BA360_TypeDefinitionIndex = 13882;

class Class_1_B7622709AF1BA360 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7622709AF1BA360_TypeDefinitionIndex)->GetStaticField(0x4F480);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7622709AF1BA360_TypeDefinitionIndex)->GetStaticField(0x4F488);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7622709AF1BA360_TypeDefinitionIndex)->GetStaticField(0x4F490);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7622709AF1BA360_TypeDefinitionIndex)->GetStaticField(0xF670);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7622709AF1BA360_TypeDefinitionIndex)->GetStaticField(0xF671);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7622709AF1BA360__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*>* Method_1_FBF092B3E7A53A44()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7622709AF1BA360_METHOD_1_FBF092B3E7A53A44_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7622709AF1BA360_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*> Method_1_DB5AF6E3A93AA3B5()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7622709AF1BA360_METHOD_1_DB5AF6E3A93AA3B5_OFFSET))();
	}

	static ::RPG::GameCore::RechargeConfigRow* Method_1_A3B4236ABA93D03E(::System::String* a1)
	{
		return ((::RPG::GameCore::RechargeConfigRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B7622709AF1BA360_METHOD_1_A3B4236ABA93D03E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7622709AF1BA360_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7622709AF1BA360_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7622709AF1BA360_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B7622709AF1BA360_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B7622709AF1BA360_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B7622709AF1BA360_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_1CD2C5AC39C9CF38(::RPG::GameCore::RechargeConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RechargeConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B7622709AF1BA360_METHOD_1_1CD2C5AC39C9CF38_OFFSET))(a1);
	}
};

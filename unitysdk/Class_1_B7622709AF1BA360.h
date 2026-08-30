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

#define CLASS_1_B7622709AF1BA360_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1C8EDA10)
#define CLASS_1_B7622709AF1BA360_METHOD_1_1CD2C5AC39C9CF38_OFFSET UNITYSDK_OFFSET(0x1C8EDA60)
#define CLASS_1_B7622709AF1BA360_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C8ED840)
#define CLASS_1_B7622709AF1BA360_METHOD_1_A3B4236ABA93D03E_OFFSET UNITYSDK_OFFSET(0x1C8ED650)
#define CLASS_1_B7622709AF1BA360_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C8ED8D0)
#define CLASS_1_B7622709AF1BA360_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C8ED480)
#define CLASS_1_B7622709AF1BA360_METHOD_1_DB5AF6E3A93AA3B5_OFFSET UNITYSDK_OFFSET(0x1C8ED4E0)
#define CLASS_1_B7622709AF1BA360_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C8ED250)
#define CLASS_1_B7622709AF1BA360_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C8ED800)
#define CLASS_1_B7622709AF1BA360_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C8ED970)
#define CLASS_1_B7622709AF1BA360_METHOD_1_FBF092B3E7A53A44_OFFSET UNITYSDK_OFFSET(0x1C8ED1D0)
#define CLASS_1_B7622709AF1BA360__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8EDDD0)

inline static constexpr unsigned int Class_1_B7622709AF1BA360_TypeDefinitionIndex = 14448;

class Class_1_B7622709AF1BA360 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RechargeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7622709AF1BA360_TypeDefinitionIndex)->GetStaticField(0x1E5C0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7622709AF1BA360_TypeDefinitionIndex)->GetStaticField(0x1E5C8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7622709AF1BA360_TypeDefinitionIndex)->GetStaticField(0x1E5D0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7622709AF1BA360_TypeDefinitionIndex)->GetStaticField(0xA310);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7622709AF1BA360_TypeDefinitionIndex)->GetStaticField(0xA311);
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

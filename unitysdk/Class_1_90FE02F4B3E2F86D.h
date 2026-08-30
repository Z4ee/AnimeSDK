#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleFailureTipsConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_01863C23119F0231_OFFSET UNITYSDK_OFFSET(0x1D6C7520)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D6C7D00)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_29196E8BDFA125EF_OFFSET UNITYSDK_OFFSET(0x1D6C7830)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D6C7B30)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_94EF1E8D4816DD80_OFFSET UNITYSDK_OFFSET(0x1D6C7960)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D6C7BC0)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_C8DDB7E5AFA3ECF2_OFFSET UNITYSDK_OFFSET(0x1D6C7D50)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D6C77D0)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D6C75A0)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D6C7AF0)
#define CLASS_1_90FE02F4B3E2F86D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D6C7C60)
#define CLASS_1_90FE02F4B3E2F86D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6C8070)

inline static constexpr unsigned int Class_1_90FE02F4B3E2F86D_TypeDefinitionIndex = 12772;

class Class_1_90FE02F4B3E2F86D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90FE02F4B3E2F86D_TypeDefinitionIndex)->GetStaticField(0x2BA90);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90FE02F4B3E2F86D_TypeDefinitionIndex)->GetStaticField(0x2BA98);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90FE02F4B3E2F86D_TypeDefinitionIndex)->GetStaticField(0x2BAA0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_90FE02F4B3E2F86D_TypeDefinitionIndex)->GetStaticField(0xC9E0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_90FE02F4B3E2F86D_TypeDefinitionIndex)->GetStaticField(0xC9E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*>* Method_1_01863C23119F0231()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_01863C23119F0231_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*> Method_1_29196E8BDFA125EF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_29196E8BDFA125EF_OFFSET))();
	}

	static ::RPG::GameCore::BattleFailureTipsConfigRow* Method_1_94EF1E8D4816DD80(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::BattleFailureTipsConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_94EF1E8D4816DD80_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_C8DDB7E5AFA3ECF2(::RPG::GameCore::BattleFailureTipsConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_90FE02F4B3E2F86D_METHOD_1_C8DDB7E5AFA3ECF2_OFFSET))(a1);
	}
};

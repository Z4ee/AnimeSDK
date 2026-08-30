#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1332DC470D6EF4A2_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1C7D14B0)
#define CLASS_1_1332DC470D6EF4A2_METHOD_1_36C871CE63F54393_OFFSET UNITYSDK_OFFSET(0x1C7D1110)
#define CLASS_1_1332DC470D6EF4A2_METHOD_1_3839148C3E230CF3_OFFSET UNITYSDK_OFFSET(0x1C7D0FA0)
#define CLASS_1_1332DC470D6EF4A2_METHOD_1_66A129C1B60FDCC2_OFFSET UNITYSDK_OFFSET(0x1C7D0C90)
#define CLASS_1_1332DC470D6EF4A2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C7D12E0)
#define CLASS_1_1332DC470D6EF4A2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C7D1370)
#define CLASS_1_1332DC470D6EF4A2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C7D0F40)
#define CLASS_1_1332DC470D6EF4A2_METHOD_1_D81879B1EC06DDD6_OFFSET UNITYSDK_OFFSET(0x1C7D1500)
#define CLASS_1_1332DC470D6EF4A2_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C7D0D10)
#define CLASS_1_1332DC470D6EF4A2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C7D12A0)
#define CLASS_1_1332DC470D6EF4A2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C7D1410)
#define CLASS_1_1332DC470D6EF4A2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7D1870)

inline static constexpr unsigned int Class_1_1332DC470D6EF4A2_TypeDefinitionIndex = 11713;

class Class_1_1332DC470D6EF4A2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveCLTriggerRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveCLTriggerRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1332DC470D6EF4A2_TypeDefinitionIndex)->GetStaticField(0xC2E0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1332DC470D6EF4A2_TypeDefinitionIndex)->GetStaticField(0xC2E8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1332DC470D6EF4A2_TypeDefinitionIndex)->GetStaticField(0xC2F0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1332DC470D6EF4A2_TypeDefinitionIndex)->GetStaticField(0x3B20);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1332DC470D6EF4A2_TypeDefinitionIndex)->GetStaticField(0x3B21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1332DC470D6EF4A2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveCLTriggerRow*>* Method_1_66A129C1B60FDCC2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveCLTriggerRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1332DC470D6EF4A2_METHOD_1_66A129C1B60FDCC2_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1332DC470D6EF4A2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveCLTriggerRow*> Method_1_3839148C3E230CF3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveCLTriggerRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1332DC470D6EF4A2_METHOD_1_3839148C3E230CF3_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveCLTriggerRow* Method_1_36C871CE63F54393(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveCLTriggerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1332DC470D6EF4A2_METHOD_1_36C871CE63F54393_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1332DC470D6EF4A2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1332DC470D6EF4A2_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1332DC470D6EF4A2_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1332DC470D6EF4A2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1332DC470D6EF4A2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_1332DC470D6EF4A2_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_D81879B1EC06DDD6(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_1332DC470D6EF4A2_METHOD_1_D81879B1EC06DDD6_OFFSET))(a1);
	}
};

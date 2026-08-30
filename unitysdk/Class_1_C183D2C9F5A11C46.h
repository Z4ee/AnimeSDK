#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightBonusRuleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C183D2C9F5A11C46_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D07E240)
#define CLASS_1_C183D2C9F5A11C46_METHOD_1_256ACA3102B12DB2_OFFSET UNITYSDK_OFFSET(0x1D07E290)
#define CLASS_1_C183D2C9F5A11C46_METHOD_1_716A41D784252BAB_OFFSET UNITYSDK_OFFSET(0x1D07DCF0)
#define CLASS_1_C183D2C9F5A11C46_METHOD_1_752F16D5FACF5A96_OFFSET UNITYSDK_OFFSET(0x1D07D9E0)
#define CLASS_1_C183D2C9F5A11C46_METHOD_1_77148439A7953F1F_OFFSET UNITYSDK_OFFSET(0x1D07DE60)
#define CLASS_1_C183D2C9F5A11C46_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D07E070)
#define CLASS_1_C183D2C9F5A11C46_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D07E100)
#define CLASS_1_C183D2C9F5A11C46_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D07DC90)
#define CLASS_1_C183D2C9F5A11C46_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D07DA60)
#define CLASS_1_C183D2C9F5A11C46_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D07E030)
#define CLASS_1_C183D2C9F5A11C46_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D07E1A0)
#define CLASS_1_C183D2C9F5A11C46__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D07E630)

inline static constexpr unsigned int Class_1_C183D2C9F5A11C46_TypeDefinitionIndex = 13515;

class Class_1_C183D2C9F5A11C46 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C183D2C9F5A11C46_TypeDefinitionIndex)->GetStaticField(0x1F130);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C183D2C9F5A11C46_TypeDefinitionIndex)->GetStaticField(0x1F138);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonusRuleConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonusRuleConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C183D2C9F5A11C46_TypeDefinitionIndex)->GetStaticField(0x1F140);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C183D2C9F5A11C46_TypeDefinitionIndex)->GetStaticField(0xA520);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C183D2C9F5A11C46_TypeDefinitionIndex)->GetStaticField(0xA521);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C183D2C9F5A11C46__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonusRuleConfigRow*>* Method_1_752F16D5FACF5A96()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonusRuleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C183D2C9F5A11C46_METHOD_1_752F16D5FACF5A96_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C183D2C9F5A11C46_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonusRuleConfigRow*> Method_1_716A41D784252BAB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonusRuleConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C183D2C9F5A11C46_METHOD_1_716A41D784252BAB_OFFSET))();
	}

	static ::RPG::GameCore::GridFightBonusRuleConfigRow* Method_1_77148439A7953F1F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GridFightBonusRuleConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C183D2C9F5A11C46_METHOD_1_77148439A7953F1F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C183D2C9F5A11C46_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C183D2C9F5A11C46_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C183D2C9F5A11C46_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C183D2C9F5A11C46_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C183D2C9F5A11C46_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C183D2C9F5A11C46_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_256ACA3102B12DB2(::RPG::GameCore::GridFightBonusRuleConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightBonusRuleConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_C183D2C9F5A11C46_METHOD_1_256ACA3102B12DB2_OFFSET))(a1);
	}
};

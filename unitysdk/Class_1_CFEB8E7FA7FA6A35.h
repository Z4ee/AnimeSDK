#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityRebateTriggerConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1D7D2E60)
#define CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_84A35CEEE032675A_OFFSET UNITYSDK_OFFSET(0x1D7D2EB0)
#define CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D7D2C90)
#define CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_AA4542AA0A4864A6_OFFSET UNITYSDK_OFFSET(0x1D7D2760)
#define CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D7D2D20)
#define CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_C4C04D3BC2C2C111_OFFSET UNITYSDK_OFFSET(0x1D64A220)
#define CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D64A2A0)
#define CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D7D28D0)
#define CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_ED49807A9CE53F68_OFFSET UNITYSDK_OFFSET(0x1D7D2B00)
#define CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D7D2C50)
#define CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D7D2DC0)
#define CLASS_1_CFEB8E7FA7FA6A35__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7D31D0)

inline static constexpr unsigned int Class_1_CFEB8E7FA7FA6A35_TypeDefinitionIndex = 12332;

class Class_1_CFEB8E7FA7FA6A35 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateTriggerConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateTriggerConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFEB8E7FA7FA6A35_TypeDefinitionIndex)->GetStaticField(0x40B20);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFEB8E7FA7FA6A35_TypeDefinitionIndex)->GetStaticField(0x40B28);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFEB8E7FA7FA6A35_TypeDefinitionIndex)->GetStaticField(0x40B30);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFEB8E7FA7FA6A35_TypeDefinitionIndex)->GetStaticField(0xF660);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CFEB8E7FA7FA6A35_TypeDefinitionIndex)->GetStaticField(0xF661);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFEB8E7FA7FA6A35__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateTriggerConfigRow*>* Method_1_C4C04D3BC2C2C111()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateTriggerConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_C4C04D3BC2C2C111_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateTriggerConfigRow*> Method_1_AA4542AA0A4864A6()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRebateTriggerConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_AA4542AA0A4864A6_OFFSET))();
	}

	static ::RPG::GameCore::ActivityRebateTriggerConfigRow* Method_1_ED49807A9CE53F68(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityRebateTriggerConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_ED49807A9CE53F68_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_84A35CEEE032675A(::RPG::GameCore::ActivityRebateTriggerConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityRebateTriggerConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_CFEB8E7FA7FA6A35_METHOD_1_84A35CEEE032675A_OFFSET))(a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityRaidCollectionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A9E55B3B3903C5A0_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CB2D730)
#define CLASS_1_A9E55B3B3903C5A0_METHOD_1_5DE3900C40ADD783_OFFSET UNITYSDK_OFFSET(0x1CB2D780)
#define CLASS_1_A9E55B3B3903C5A0_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CB2D560)
#define CLASS_1_A9E55B3B3903C5A0_METHOD_1_A188FCE970DE6B02_OFFSET UNITYSDK_OFFSET(0x1CB2D2A0)
#define CLASS_1_A9E55B3B3903C5A0_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CB2D5F0)
#define CLASS_1_A9E55B3B3903C5A0_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CB2D240)
#define CLASS_1_A9E55B3B3903C5A0_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CB2D010)
#define CLASS_1_A9E55B3B3903C5A0_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CB2D520)
#define CLASS_1_A9E55B3B3903C5A0_METHOD_1_F1DAADC5A17A6C01_OFFSET UNITYSDK_OFFSET(0x1CB2D3D0)
#define CLASS_1_A9E55B3B3903C5A0_METHOD_1_F27AD339A535D262_OFFSET UNITYSDK_OFFSET(0x1CB2CF90)
#define CLASS_1_A9E55B3B3903C5A0_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CB2D690)
#define CLASS_1_A9E55B3B3903C5A0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB2DAA0)

inline static constexpr unsigned int Class_1_A9E55B3B3903C5A0_TypeDefinitionIndex = 12244;

class Class_1_A9E55B3B3903C5A0 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9E55B3B3903C5A0_TypeDefinitionIndex)->GetStaticField(0x56BA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9E55B3B3903C5A0_TypeDefinitionIndex)->GetStaticField(0x56BA8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9E55B3B3903C5A0_TypeDefinitionIndex)->GetStaticField(0x56BB0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9E55B3B3903C5A0_TypeDefinitionIndex)->GetStaticField(0x12340);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9E55B3B3903C5A0_TypeDefinitionIndex)->GetStaticField(0x12341);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9E55B3B3903C5A0__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionRow*>* Method_1_F27AD339A535D262()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9E55B3B3903C5A0_METHOD_1_F27AD339A535D262_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9E55B3B3903C5A0_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionRow*> Method_1_A188FCE970DE6B02()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9E55B3B3903C5A0_METHOD_1_A188FCE970DE6B02_OFFSET))();
	}

	static ::RPG::GameCore::ActivityRaidCollectionRow* Method_1_F1DAADC5A17A6C01(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityRaidCollectionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A9E55B3B3903C5A0_METHOD_1_F1DAADC5A17A6C01_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9E55B3B3903C5A0_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9E55B3B3903C5A0_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9E55B3B3903C5A0_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A9E55B3B3903C5A0_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A9E55B3B3903C5A0_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A9E55B3B3903C5A0_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_5DE3900C40ADD783(::RPG::GameCore::ActivityRaidCollectionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityRaidCollectionRow*))((::PBYTE)hIl2Cpp + CLASS_1_A9E55B3B3903C5A0_METHOD_1_5DE3900C40ADD783_OFFSET))(a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournGambleUnitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_341650ACD57B2DFD_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CAA2BE0)
#define CLASS_1_341650ACD57B2DFD_METHOD_1_14D66E852748A4A7_OFFSET UNITYSDK_OFFSET(0x1CAA2C30)
#define CLASS_1_341650ACD57B2DFD_METHOD_1_1D7A5F5D78F22604_OFFSET UNITYSDK_OFFSET(0x1CAA2840)
#define CLASS_1_341650ACD57B2DFD_METHOD_1_2653EAA163C29E56_OFFSET UNITYSDK_OFFSET(0x1CAA26D0)
#define CLASS_1_341650ACD57B2DFD_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CAA2A10)
#define CLASS_1_341650ACD57B2DFD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CAA2AA0)
#define CLASS_1_341650ACD57B2DFD_METHOD_1_C2BFC68D3258D551_OFFSET UNITYSDK_OFFSET(0x1CAA23C0)
#define CLASS_1_341650ACD57B2DFD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CAA2670)
#define CLASS_1_341650ACD57B2DFD_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CAA2440)
#define CLASS_1_341650ACD57B2DFD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CAA29D0)
#define CLASS_1_341650ACD57B2DFD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CAA2B40)
#define CLASS_1_341650ACD57B2DFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAA2FA0)

inline static constexpr unsigned int Class_1_341650ACD57B2DFD_TypeDefinitionIndex = 14879;

class Class_1_341650ACD57B2DFD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleUnitRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleUnitRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_341650ACD57B2DFD_TypeDefinitionIndex)->GetStaticField(0x223F0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_341650ACD57B2DFD_TypeDefinitionIndex)->GetStaticField(0x223F8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_341650ACD57B2DFD_TypeDefinitionIndex)->GetStaticField(0x22400);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_341650ACD57B2DFD_TypeDefinitionIndex)->GetStaticField(0xAF80);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_341650ACD57B2DFD_TypeDefinitionIndex)->GetStaticField(0xAF81);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_341650ACD57B2DFD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleUnitRow*>* Method_1_C2BFC68D3258D551()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleUnitRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_341650ACD57B2DFD_METHOD_1_C2BFC68D3258D551_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_341650ACD57B2DFD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleUnitRow*> Method_1_2653EAA163C29E56()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleUnitRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_341650ACD57B2DFD_METHOD_1_2653EAA163C29E56_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournGambleUnitRow* Method_1_1D7A5F5D78F22604(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournGambleUnitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_341650ACD57B2DFD_METHOD_1_1D7A5F5D78F22604_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_341650ACD57B2DFD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_341650ACD57B2DFD_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_341650ACD57B2DFD_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_341650ACD57B2DFD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_341650ACD57B2DFD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_341650ACD57B2DFD_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_14D66E852748A4A7(::RPG::GameCore::RogueTournGambleUnitRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournGambleUnitRow*))((::PBYTE)hIl2Cpp + CLASS_1_341650ACD57B2DFD_METHOD_1_14D66E852748A4A7_OFFSET))(a1);
	}
};

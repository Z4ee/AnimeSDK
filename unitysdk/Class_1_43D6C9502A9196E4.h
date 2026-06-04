#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesRecommendTeamRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_43D6C9502A9196E4_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1997A3D0)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_0EA3CA2B8CBE06E8_OFFSET UNITYSDK_OFFSET(0x19979B70)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_2F769BCAC1D4A5A5_OFFSET UNITYSDK_OFFSET(0x19979FF0)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_540CE228A6073531_OFFSET UNITYSDK_OFFSET(0x19979E80)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1997A200)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_AAE87729E2B25004_OFFSET UNITYSDK_OFFSET(0x1997A420)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1997A290)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19979E20)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19979BF0)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1997A1C0)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1997A330)
#define CLASS_1_43D6C9502A9196E4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1997A7D0)

inline static constexpr unsigned int Class_1_43D6C9502A9196E4_TypeDefinitionIndex = 11695;

class Class_1_43D6C9502A9196E4 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRecommendTeamRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRecommendTeamRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43D6C9502A9196E4_TypeDefinitionIndex)->GetStaticField(0x474E0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43D6C9502A9196E4_TypeDefinitionIndex)->GetStaticField(0x474E8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43D6C9502A9196E4_TypeDefinitionIndex)->GetStaticField(0x474F0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_43D6C9502A9196E4_TypeDefinitionIndex)->GetStaticField(0xCF90);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_43D6C9502A9196E4_TypeDefinitionIndex)->GetStaticField(0xCF91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRecommendTeamRow*>* Method_1_0EA3CA2B8CBE06E8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRecommendTeamRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4_METHOD_1_0EA3CA2B8CBE06E8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRecommendTeamRow*> Method_1_540CE228A6073531()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRecommendTeamRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4_METHOD_1_540CE228A6073531_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesRecommendTeamRow* Method_1_2F769BCAC1D4A5A5(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::PlanetFesRecommendTeamRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4_METHOD_1_2F769BCAC1D4A5A5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_AAE87729E2B25004(::RPG::GameCore::PlanetFesRecommendTeamRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesRecommendTeamRow*))((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4_METHOD_1_AAE87729E2B25004_OFFSET))(a1);
	}
};

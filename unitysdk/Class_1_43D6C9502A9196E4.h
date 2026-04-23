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

#define CLASS_1_43D6C9502A9196E4_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18496CD0)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_0EA3CA2B8CBE06E8_OFFSET UNITYSDK_OFFSET(0x184963C0)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18496AF0)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_5D8DE08F0F0E9ADC_OFFSET UNITYSDK_OFFSET(0x184968A0)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18496440)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_AAE87729E2B25004_OFFSET UNITYSDK_OFFSET(0x18496D20)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18496B90)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18496690)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_DFC0FBD98C3E848D_OFFSET UNITYSDK_OFFSET(0x184966F0)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18496AB0)
#define CLASS_1_43D6C9502A9196E4_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18496C30)
#define CLASS_1_43D6C9502A9196E4__CCTOR_OFFSET UNITYSDK_OFFSET(0x184970D0)

inline static constexpr unsigned int Class_1_43D6C9502A9196E4_TypeDefinitionIndex = 11596;

class Class_1_43D6C9502A9196E4 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43D6C9502A9196E4_TypeDefinitionIndex)->GetStaticField(0x30590);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43D6C9502A9196E4_TypeDefinitionIndex)->GetStaticField(0x30598);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRecommendTeamRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRecommendTeamRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43D6C9502A9196E4_TypeDefinitionIndex)->GetStaticField(0x305A0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_43D6C9502A9196E4_TypeDefinitionIndex)->GetStaticField(0xC2A0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_43D6C9502A9196E4_TypeDefinitionIndex)->GetStaticField(0xC2A1);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRecommendTeamRow*> Method_1_DFC0FBD98C3E848D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRecommendTeamRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4_METHOD_1_DFC0FBD98C3E848D_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesRecommendTeamRow* Method_1_5D8DE08F0F0E9ADC(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::PlanetFesRecommendTeamRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4_METHOD_1_5D8DE08F0F0E9ADC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43D6C9502A9196E4_METHOD_1_30D1209326FA87FC_OFFSET))();
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

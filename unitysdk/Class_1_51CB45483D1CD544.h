#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PlanetFesEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesEffectTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_51CB45483D1CD544_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x16BD55F0)
#define CLASS_1_51CB45483D1CD544_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16BD5410)
#define CLASS_1_51CB45483D1CD544_METHOD_1_46AD2877C64A1588_OFFSET UNITYSDK_OFFSET(0x16BD4D60)
#define CLASS_1_51CB45483D1CD544_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16BD4DE0)
#define CLASS_1_51CB45483D1CD544_METHOD_1_75ECC0B6826530C1_OFFSET UNITYSDK_OFFSET(0x16BD5090)
#define CLASS_1_51CB45483D1CD544_METHOD_1_9575A9EC7B63FDD0_OFFSET UNITYSDK_OFFSET(0x16BD5240)
#define CLASS_1_51CB45483D1CD544_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16BD54B0)
#define CLASS_1_51CB45483D1CD544_METHOD_1_B3C4EEA80A39CB0D_OFFSET UNITYSDK_OFFSET(0x16BD5640)
#define CLASS_1_51CB45483D1CD544_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16BD5030)
#define CLASS_1_51CB45483D1CD544_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16BD53D0)
#define CLASS_1_51CB45483D1CD544_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16BD5550)
#define CLASS_1_51CB45483D1CD544__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BD5950)

inline static constexpr unsigned int Class_1_51CB45483D1CD544_TypeDefinitionIndex = 11130;

class Class_1_51CB45483D1CD544 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectTypeConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectTypeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_51CB45483D1CD544_TypeDefinitionIndex)->GetStaticField(0x28190);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_51CB45483D1CD544_TypeDefinitionIndex)->GetStaticField(0x28198);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_51CB45483D1CD544_TypeDefinitionIndex)->GetStaticField(0x281A0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_51CB45483D1CD544_TypeDefinitionIndex)->GetStaticField(0xD2E0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_51CB45483D1CD544_TypeDefinitionIndex)->GetStaticField(0xD2E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_51CB45483D1CD544__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectTypeConfigRow*>* Method_1_46AD2877C64A1588()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_51CB45483D1CD544_METHOD_1_46AD2877C64A1588_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_51CB45483D1CD544_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectTypeConfigRow*> Method_1_75ECC0B6826530C1()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesEffectTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_51CB45483D1CD544_METHOD_1_75ECC0B6826530C1_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesEffectTypeConfigRow* Method_1_9575A9EC7B63FDD0(::RPG::GameCore::PlanetFesEffectType a1)
	{
		return ((::RPG::GameCore::PlanetFesEffectTypeConfigRow*(*)(::RPG::GameCore::PlanetFesEffectType))((::PBYTE)hIl2Cpp + CLASS_1_51CB45483D1CD544_METHOD_1_9575A9EC7B63FDD0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_51CB45483D1CD544_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_51CB45483D1CD544_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_51CB45483D1CD544_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_51CB45483D1CD544_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_51CB45483D1CD544_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_51CB45483D1CD544_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_B3C4EEA80A39CB0D(::RPG::GameCore::PlanetFesEffectTypeConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesEffectTypeConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_51CB45483D1CD544_METHOD_1_B3C4EEA80A39CB0D_OFFSET))(a1);
	}
};

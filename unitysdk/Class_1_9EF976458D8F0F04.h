#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesRegionPhaseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9EF976458D8F0F04_METHOD_1_0A061BE49D96AC50_OFFSET UNITYSDK_OFFSET(0x1B3240B0)
#define CLASS_1_9EF976458D8F0F04_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B324890)
#define CLASS_1_9EF976458D8F0F04_METHOD_1_3FD4F785FFB6D8AD_OFFSET UNITYSDK_OFFSET(0x1B3244F0)
#define CLASS_1_9EF976458D8F0F04_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B3246C0)
#define CLASS_1_9EF976458D8F0F04_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B324750)
#define CLASS_1_9EF976458D8F0F04_METHOD_1_B2D1833D704CD33D_OFFSET UNITYSDK_OFFSET(0x1B3248E0)
#define CLASS_1_9EF976458D8F0F04_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B324360)
#define CLASS_1_9EF976458D8F0F04_METHOD_1_DDF8D2513F089964_OFFSET UNITYSDK_OFFSET(0x1B3243C0)
#define CLASS_1_9EF976458D8F0F04_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B324130)
#define CLASS_1_9EF976458D8F0F04_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B324680)
#define CLASS_1_9EF976458D8F0F04_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B3247F0)
#define CLASS_1_9EF976458D8F0F04__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B324C00)

inline static constexpr unsigned int Class_1_9EF976458D8F0F04_TypeDefinitionIndex = 11786;

class Class_1_9EF976458D8F0F04 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EF976458D8F0F04_TypeDefinitionIndex)->GetStaticField(0x66420);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRegionPhaseRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRegionPhaseRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EF976458D8F0F04_TypeDefinitionIndex)->GetStaticField(0x66428);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EF976458D8F0F04_TypeDefinitionIndex)->GetStaticField(0x66430);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EF976458D8F0F04_TypeDefinitionIndex)->GetStaticField(0x13B00);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EF976458D8F0F04_TypeDefinitionIndex)->GetStaticField(0x13B01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EF976458D8F0F04__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRegionPhaseRow*>* Method_1_0A061BE49D96AC50()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRegionPhaseRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EF976458D8F0F04_METHOD_1_0A061BE49D96AC50_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EF976458D8F0F04_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRegionPhaseRow*> Method_1_DDF8D2513F089964()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesRegionPhaseRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EF976458D8F0F04_METHOD_1_DDF8D2513F089964_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesRegionPhaseRow* Method_1_3FD4F785FFB6D8AD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlanetFesRegionPhaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9EF976458D8F0F04_METHOD_1_3FD4F785FFB6D8AD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EF976458D8F0F04_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EF976458D8F0F04_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EF976458D8F0F04_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9EF976458D8F0F04_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9EF976458D8F0F04_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9EF976458D8F0F04_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B2D1833D704CD33D(::RPG::GameCore::PlanetFesRegionPhaseRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesRegionPhaseRow*))((::PBYTE)hIl2Cpp + CLASS_1_9EF976458D8F0F04_METHOD_1_B2D1833D704CD33D_OFFSET))(a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformMisc_ItemRarity.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceScreenEffect.h"
#include "unitysdk/MoleMole/Config/ConfigGachaTvResultGroupEffects.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityGaussianBlurEffect; }
namespace MoleMole::Config { class ConfigGachaPerformanceEffects; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CONFIGGACHAPERFORMANCEEFFECTS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x158A7470)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CONFIGGACHAPERFORMANCEEFFECTS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x158A7480)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CONFIGGACHAPERFORMANCEEFFECTS_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x158A7C80)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CONFIGGACHAPERFORMANCEEFFECTS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x158A8150)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CONFIGGACHAPERFORMANCEEFFECTS_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x158A8110)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceEffects_ConfigGachaPerformanceEffects_UnityGeneratedFormatter_TypeDefinitionIndex = 53926;

	class ConfigGachaPerformanceEffects_ConfigGachaPerformanceEffects_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigGachaPerformanceEffects*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::String*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceEffects_ConfigGachaPerformanceEffects_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33E00);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::Single>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceEffects_ConfigGachaPerformanceEffects_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33E08);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaPerformanceScreenEffect>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceEffects_ConfigGachaPerformanceEffects_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33E10);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityGaussianBlurEffect*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityGaussianBlurEffect*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceEffects_ConfigGachaPerformanceEffects_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33E18);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaTvResultGroupEffects>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigGachaTvResultGroupEffects>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceEffects_ConfigGachaPerformanceEffects_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33E20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CONFIGGACHAPERFORMANCEEFFECTS_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CONFIGGACHAPERFORMANCEEFFECTS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CONFIGGACHAPERFORMANCEEFFECTS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigGachaPerformanceEffects*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceEffects*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CONFIGGACHAPERFORMANCEEFFECTS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigGachaPerformanceEffects*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceEffects*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_CONFIGGACHAPERFORMANCEEFFECTS_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

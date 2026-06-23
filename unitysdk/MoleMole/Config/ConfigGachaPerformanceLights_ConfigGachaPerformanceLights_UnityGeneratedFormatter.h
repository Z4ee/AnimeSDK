#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigCGCustomGlobalAnimation.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformMisc_ItemRarity.h"
#include "unitysdk/MoleMole/UIGachaPerformance3DModelController_GachaStageType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigGachaPerformanceLight; }
namespace MoleMole::Config { class ConfigGachaPerformanceLights; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CONFIGGACHAPERFORMANCELIGHTS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x158A8230)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CONFIGGACHAPERFORMANCELIGHTS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x158A8240)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CONFIGGACHAPERFORMANCELIGHTS_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x158A85A0)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CONFIGGACHAPERFORMANCELIGHTS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x158A87F0)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CONFIGGACHAPERFORMANCELIGHTS_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x158A87B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceLights_ConfigGachaPerformanceLights_UnityGeneratedFormatter_TypeDefinitionIndex = 44210;

	class ConfigGachaPerformanceLights_ConfigGachaPerformanceLights_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigGachaPerformanceLights*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceLights_ConfigGachaPerformanceLights_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33E30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigGachaPerformanceLight*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigGachaPerformanceLight*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceLights_ConfigGachaPerformanceLights_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33E38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::UnityEngine::Color>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceLights_ConfigGachaPerformanceLights_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33E40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::MoleMole::Config::ConfigCGCustomGlobalAnimation>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::MoleMole::Config::ConfigCGCustomGlobalAnimation>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceLights_ConfigGachaPerformanceLights_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33E48);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CONFIGGACHAPERFORMANCELIGHTS_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CONFIGGACHAPERFORMANCELIGHTS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CONFIGGACHAPERFORMANCELIGHTS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigGachaPerformanceLights*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceLights*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CONFIGGACHAPERFORMANCELIGHTS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigGachaPerformanceLights*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceLights*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CONFIGGACHAPERFORMANCELIGHTS_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

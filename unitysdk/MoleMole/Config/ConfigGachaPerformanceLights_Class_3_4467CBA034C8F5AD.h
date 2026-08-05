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

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CLASS_3_4467CBA034C8F5AD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x143752F0)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CLASS_3_4467CBA034C8F5AD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14375300)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CLASS_3_4467CBA034C8F5AD_WRITE_OFFSET UNITYSDK_OFFSET(0x14375610)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CLASS_3_4467CBA034C8F5AD__CCTOR_OFFSET UNITYSDK_OFFSET(0x14375820)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CLASS_3_4467CBA034C8F5AD__CTOR_OFFSET UNITYSDK_OFFSET(0x143757E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceLights_Class_3_4467CBA034C8F5AD_TypeDefinitionIndex = 87133;

	class ConfigGachaPerformanceLights_Class_3_4467CBA034C8F5AD : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigGachaPerformanceLights*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::MoleMole::Config::ConfigCGCustomGlobalAnimation>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::MoleMole::Config::ConfigCGCustomGlobalAnimation>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceLights_Class_3_4467CBA034C8F5AD_TypeDefinitionIndex)->GetStaticField(0x364C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::UnityEngine::Color>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceLights_Class_3_4467CBA034C8F5AD_TypeDefinitionIndex)->GetStaticField(0x364C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::String*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::UIGachaPerformance3DModelController_GachaStageType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceLights_Class_3_4467CBA034C8F5AD_TypeDefinitionIndex)->GetStaticField(0x364D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigGachaPerformanceLight*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigGachaPerformanceLight*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceLights_Class_3_4467CBA034C8F5AD_TypeDefinitionIndex)->GetStaticField(0x364D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CLASS_3_4467CBA034C8F5AD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CLASS_3_4467CBA034C8F5AD__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CLASS_3_4467CBA034C8F5AD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigGachaPerformanceLights*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceLights*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CLASS_3_4467CBA034C8F5AD_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigGachaPerformanceLights*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceLights*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_CLASS_3_4467CBA034C8F5AD_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

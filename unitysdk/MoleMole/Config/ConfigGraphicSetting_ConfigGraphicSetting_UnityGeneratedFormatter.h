#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESettingPlatform.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SystemSettingEntryBase; }
namespace MoleMole::Config { class ConfigGraphicSetting; }
namespace MoleMole::Config { class DevicePerformanceConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CONFIGGRAPHICSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17048C40)
#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CONFIGGRAPHICSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17048C50)
#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CONFIGGRAPHICSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17048EF0)
#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CONFIGGRAPHICSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x170490E0)
#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CONFIGGRAPHICSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x170490A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGraphicSetting_ConfigGraphicSetting_UnityGeneratedFormatter_TypeDefinitionIndex = 74786;

	class ConfigGraphicSetting_ConfigGraphicSetting_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigGraphicSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::MoleMole::Config::DevicePerformanceConfig*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::MoleMole::Config::DevicePerformanceConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGraphicSetting_ConfigGraphicSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37300);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::GraphicSettingProfileType, ::System::Single>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::GraphicSettingProfileType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGraphicSetting_ConfigGraphicSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37308);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGraphicSetting_ConfigGraphicSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37310);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CONFIGGRAPHICSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CONFIGGRAPHICSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CONFIGGRAPHICSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigGraphicSetting*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigGraphicSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CONFIGGRAPHICSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigGraphicSetting*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGraphicSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CONFIGGRAPHICSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

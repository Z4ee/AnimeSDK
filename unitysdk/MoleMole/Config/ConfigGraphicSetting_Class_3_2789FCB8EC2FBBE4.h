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

#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CLASS_3_2789FCB8EC2FBBE4_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4B1130)
#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CLASS_3_2789FCB8EC2FBBE4_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4B1140)
#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CLASS_3_2789FCB8EC2FBBE4_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4B13A0)
#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CLASS_3_2789FCB8EC2FBBE4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4B1560)
#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CLASS_3_2789FCB8EC2FBBE4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B1520)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGraphicSetting_Class_3_2789FCB8EC2FBBE4_TypeDefinitionIndex = 65571;

	class ConfigGraphicSetting_Class_3_2789FCB8EC2FBBE4 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigGraphicSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::GraphicSettingProfileType, ::System::Single>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::GraphicSettingProfileType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGraphicSetting_Class_3_2789FCB8EC2FBBE4_TypeDefinitionIndex)->GetStaticField(0x3C840);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGraphicSetting_Class_3_2789FCB8EC2FBBE4_TypeDefinitionIndex)->GetStaticField(0x3C848);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::MoleMole::Config::DevicePerformanceConfig*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::MoleMole::Config::DevicePerformanceConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGraphicSetting_Class_3_2789FCB8EC2FBBE4_TypeDefinitionIndex)->GetStaticField(0x3C850);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CLASS_3_2789FCB8EC2FBBE4__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CLASS_3_2789FCB8EC2FBBE4__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CLASS_3_2789FCB8EC2FBBE4_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigGraphicSetting*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigGraphicSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CLASS_3_2789FCB8EC2FBBE4_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigGraphicSetting*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGraphicSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_CLASS_3_2789FCB8EC2FBBE4_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

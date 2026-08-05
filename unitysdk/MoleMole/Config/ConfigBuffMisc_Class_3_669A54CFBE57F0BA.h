#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/CauseDisorderConfig.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_ConfigLumenMisc.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_ConfigTagBuffCdTime.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_DamageElementAbnormalItem.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigBuffMisc; }
namespace MoleMole::Config { class ConfigBurnBuff; }
namespace MoleMole::Config { class ConfigCatalysisBuff; }
namespace MoleMole::Config { class ConfigChaosBuff; }
namespace MoleMole::Config { class ConfigCommonBuff; }
namespace MoleMole::Config { class ConfigElectricBuff; }
namespace MoleMole::Config { class ConfigErosionBuff; }
namespace MoleMole::Config { class ConfigFrozenBuff; }
namespace MoleMole::Config { class ConfigIgniteBuff; }
namespace MoleMole::Config { class ConfigOverloadBuff; }
namespace MoleMole::Config { class ConfigStrikeBuff; }
namespace MoleMole::Config { class ConfigVariantElementOverrideBuff; }
namespace MoleMole::Config { class ConfigWindBuff; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGBUFFMISC_CLASS_3_669A54CFBE57F0BA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12A4EEC0)
#define MOLEMOLE_CONFIG_CONFIGBUFFMISC_CLASS_3_669A54CFBE57F0BA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12A4EED0)
#define MOLEMOLE_CONFIG_CONFIGBUFFMISC_CLASS_3_669A54CFBE57F0BA_WRITE_OFFSET UNITYSDK_OFFSET(0x1B7E3310)
#define MOLEMOLE_CONFIG_CONFIGBUFFMISC_CLASS_3_669A54CFBE57F0BA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7E3D80)
#define MOLEMOLE_CONFIG_CONFIGBUFFMISC_CLASS_3_669A54CFBE57F0BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E3D40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex = 71675;

	class ConfigBuffMisc_Class_3_669A54CFBE57F0BA : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigBuffMisc*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigCommonBuff*>*>** StaticGet_Field_3_23()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigCommonBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A440);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigElectricBuff*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigElectricBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A448);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigBurnBuff*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigBurnBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A450);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::MoleMole::Config::CauseDisorderConfig>*>** StaticGet_Field_3_26()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::MoleMole::Config::CauseDisorderConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A458);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigIgniteBuff*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigIgniteBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A460);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigChaosBuff*>*>** StaticGet_Field_3_19()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigChaosBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A468);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigStrikeBuff*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigStrikeBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A470);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigElectricBuff*>*>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigElectricBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A478);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigBuffMisc_ConfigLumenMisc>** StaticGet_Field_3_24()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigBuffMisc_ConfigLumenMisc>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A480);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigOverloadBuff*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigOverloadBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A488);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigBurnBuff*>*>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigBurnBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A490);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigIgniteBuff*>*>** StaticGet_Field_3_18()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigIgniteBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A498);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigStrikeBuff*>*>** StaticGet_Field_3_16()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigStrikeBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A4A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFrozenBuff*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFrozenBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A4A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigErosionBuff*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigErosionBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A4B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::MoleMole::Config::ConfigBuffMisc_DamageElementAbnormalItem>*>** StaticGet_Field_3_20()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::MoleMole::Config::ConfigBuffMisc_DamageElementAbnormalItem>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A4B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigCatalysisBuff*>*>** StaticGet_Field_3_21()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigCatalysisBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A4C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::MoleMole::Config::BuffGroupName>*>** StaticGet_Field_3_25()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::MoleMole::Config::BuffGroupName>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A4C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigFrozenBuff*>*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigFrozenBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A4D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigVariantElementOverrideBuff*>*>*>** StaticGet_Field_3_27()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigVariantElementOverrideBuff*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A4D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigOverloadBuff*>*>** StaticGet_Field_3_17()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigOverloadBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A4E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBuffMisc_ConfigTagBuffCdTime>*>** StaticGet_Field_3_31()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBuffMisc_ConfigTagBuffCdTime>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A4E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCommonBuff*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCommonBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A4F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigErosionBuff*>*>** StaticGet_Field_3_12()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigErosionBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A4F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigChaosBuff*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigChaosBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A500);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::BuffGroupName>*>*>** StaticGet_Field_3_30()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::BuffGroupName>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A508);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigWindBuff*>*>** StaticGet_Field_3_22()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigWindBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_Class_3_669A54CFBE57F0BA_TypeDefinitionIndex)->GetStaticField(0x4A510);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUFFMISC_CLASS_3_669A54CFBE57F0BA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUFFMISC_CLASS_3_669A54CFBE57F0BA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUFFMISC_CLASS_3_669A54CFBE57F0BA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigBuffMisc*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigBuffMisc*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUFFMISC_CLASS_3_669A54CFBE57F0BA_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigBuffMisc*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBuffMisc*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUFFMISC_CLASS_3_669A54CFBE57F0BA_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

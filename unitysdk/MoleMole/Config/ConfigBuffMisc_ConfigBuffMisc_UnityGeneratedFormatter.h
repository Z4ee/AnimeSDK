#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/CauseDisorderConfig.h"
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

#define MOLEMOLE_CONFIG_CONFIGBUFFMISC_CONFIGBUFFMISC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x162A6900)
#define MOLEMOLE_CONFIG_CONFIGBUFFMISC_CONFIGBUFFMISC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x162A6910)
#define MOLEMOLE_CONFIG_CONFIGBUFFMISC_CONFIGBUFFMISC_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x162A7AF0)
#define MOLEMOLE_CONFIG_CONFIGBUFFMISC_CONFIGBUFFMISC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x162A8510)
#define MOLEMOLE_CONFIG_CONFIGBUFFMISC_CONFIGBUFFMISC_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x162A84D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex = 69435;

	class ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigBuffMisc*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigChaosBuff*>*>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigChaosBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A00);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBuffMisc_ConfigTagBuffCdTime>*>** StaticGet_CachedSerializer24()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBuffMisc_ConfigTagBuffCdTime>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A08);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFrozenBuff*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigFrozenBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A10);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigErosionBuff*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigErosionBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A18);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigElectricBuff*>*>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigElectricBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigWindBuff*>*>** StaticGet_CachedSerializer18()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigWindBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A28);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigChaosBuff*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigChaosBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A30);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigElectricBuff*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigElectricBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigBurnBuff*>*>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigBurnBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigOverloadBuff*>*>** StaticGet_CachedSerializer15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigOverloadBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A48);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigOverloadBuff*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigOverloadBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCommonBuff*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCommonBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigCatalysisBuff*>*>** StaticGet_CachedSerializer19()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigCatalysisBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigFrozenBuff*>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigFrozenBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A68);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigIgniteBuff*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigIgniteBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::MoleMole::Config::ConfigBuffMisc_DamageElementAbnormalItem>*>** StaticGet_CachedSerializer20()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::MoleMole::Config::ConfigBuffMisc_DamageElementAbnormalItem>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigStrikeBuff*>*>** StaticGet_CachedSerializer16()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigStrikeBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigErosionBuff*>*>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigErosionBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::MoleMole::Config::CauseDisorderConfig>*>** StaticGet_CachedSerializer22()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffGroupName, ::MoleMole::Config::CauseDisorderConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A90);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigBurnBuff*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigBurnBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44A98);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigIgniteBuff*>*>** StaticGet_CachedSerializer14()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigIgniteBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44AA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::BuffGroupName>*>*>** StaticGet_CachedSerializer25()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::BuffGroupName>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44AA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::MoleMole::Config::BuffGroupName>*>** StaticGet_CachedSerializer23()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::MoleMole::Config::BuffGroupName>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44AB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigCommonBuff*>*>** StaticGet_CachedSerializer17()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::MoleMole::Config::ConfigCommonBuff*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44AB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigVariantElementOverrideBuff*>*>*>** StaticGet_CachedSerializer21()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigVariantElementOverrideBuff*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44AC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigStrikeBuff*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigStrikeBuff*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigBuffMisc_ConfigBuffMisc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44AC8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUFFMISC_CONFIGBUFFMISC_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUFFMISC_CONFIGBUFFMISC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUFFMISC_CONFIGBUFFMISC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigBuffMisc*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigBuffMisc*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUFFMISC_CONFIGBUFFMISC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigBuffMisc*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBuffMisc*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUFFMISC_CONFIGBUFFMISC_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

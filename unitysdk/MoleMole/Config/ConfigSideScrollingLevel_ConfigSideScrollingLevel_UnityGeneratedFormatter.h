#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/SideScrollingHeatKillMonsterType.h"
#include "unitysdk/MoleMole/Battle/SideScrollingScoreGetType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class ConfigSideScrollingCamera; }
namespace MoleMole::Config { class ConfigSideScrollingLevel; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CONFIGSIDESCROLLINGLEVEL_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17D287B0)
#define MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CONFIGSIDESCROLLINGLEVEL_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17D287C0)
#define MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CONFIGSIDESCROLLINGLEVEL_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17D28B20)
#define MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CONFIGSIDESCROLLINGLEVEL_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D28D70)
#define MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CONFIGSIDESCROLLINGLEVEL_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D28D30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSideScrollingLevel_ConfigSideScrollingLevel_UnityGeneratedFormatter_TypeDefinitionIndex = 70116;

	class ConfigSideScrollingLevel_ConfigSideScrollingLevel_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSideScrollingLevel*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::SideScrollingHeatKillMonsterType, ::System::Int32>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::SideScrollingHeatKillMonsterType, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSideScrollingLevel_ConfigSideScrollingLevel_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x477A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSideScrollingLevel_ConfigSideScrollingLevel_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x477A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSideScrollingCamera*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSideScrollingCamera*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSideScrollingLevel_ConfigSideScrollingLevel_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x477B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::SideScrollingScoreGetType, ::System::Single>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::SideScrollingScoreGetType, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSideScrollingLevel_ConfigSideScrollingLevel_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x477B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CONFIGSIDESCROLLINGLEVEL_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CONFIGSIDESCROLLINGLEVEL_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CONFIGSIDESCROLLINGLEVEL_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSideScrollingLevel*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSideScrollingLevel*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CONFIGSIDESCROLLINGLEVEL_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigSideScrollingLevel*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSideScrollingLevel*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CONFIGSIDESCROLLINGLEVEL_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AttackPropConfigType.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/DissipationMode.h"
#include "unitysdk/MoleMole/Config/ShakeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCameraShake; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CONFIGCAMERASHAKE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A33F2C0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CONFIGCAMERASHAKE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A33F2D0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CONFIGCAMERASHAKE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1A3405D0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CONFIGCAMERASHAKE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A341080)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CONFIGCAMERASHAKE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A341040)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraShake_ConfigCameraShake_UnityGeneratedFormatter_TypeDefinitionIndex = 87519;

	class ConfigCameraShake_ConfigCameraShake_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigCameraShake*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_ConfigCameraShake_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D480);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DissipationMode>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DissipationMode>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_ConfigCameraShake_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D488);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_ConfigCameraShake_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D490);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_ConfigCameraShake_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D498);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_ConfigCameraShake_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D4A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPlayStacking>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPlayStacking>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_ConfigCameraShake_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D4A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ShakeType>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ShakeType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_ConfigCameraShake_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D4B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AttackPropConfigType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AttackPropConfigType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_ConfigCameraShake_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D4B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPriority>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPriority>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_ConfigCameraShake_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D4C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CONFIGCAMERASHAKE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CONFIGCAMERASHAKE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CONFIGCAMERASHAKE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraShake*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraShake*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CONFIGCAMERASHAKE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraShake*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraShake*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CONFIGCAMERASHAKE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

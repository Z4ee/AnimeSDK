#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectType.h"
#include "unitysdk/MoleMole/EtherEyesHintInfoType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }
namespace MoleMole::Config { class ConfigEtherEyes; }
namespace MoleMole::Config { class EtherEyesInteractableVariationConfig; }
namespace MoleMole::Config { class EtherEyesObjectTypeDefaultConfig; }
namespace MoleMole::Config { class EtherEyesOutlineConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGETHEREYES_CONFIGETHEREYES_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16A8CD60)
#define MOLEMOLE_CONFIG_CONFIGETHEREYES_CONFIGETHEREYES_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16A8CD70)
#define MOLEMOLE_CONFIG_CONFIGETHEREYES_CONFIGETHEREYES_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16A8D180)
#define MOLEMOLE_CONFIG_CONFIGETHEREYES_CONFIGETHEREYES_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A8D430)
#define MOLEMOLE_CONFIG_CONFIGETHEREYES_CONFIGETHEREYES_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8D3F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEtherEyes_ConfigEtherEyes_UnityGeneratedFormatter_TypeDefinitionIndex = 65669;

	class ConfigEtherEyes_ConfigEtherEyes_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEtherEyes*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::EtherEyesHintInfoType, ::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::EtherEyesHintInfoType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEtherEyes_ConfigEtherEyes_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31E80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectType, ::MoleMole::Config::EtherEyesObjectTypeDefaultConfig*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectType, ::MoleMole::Config::EtherEyesObjectTypeDefaultConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEtherEyes_ConfigEtherEyes_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31E88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEtherEyes_ConfigEtherEyes_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31E90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectSize, ::MoleMole::Config::EtherEyesInteractableVariationConfig*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectSize, ::MoleMole::Config::EtherEyesInteractableVariationConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEtherEyes_ConfigEtherEyes_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31E98);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EtherEyesOutlineConfig*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EtherEyesOutlineConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEtherEyes_ConfigEtherEyes_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31EA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGETHEREYES_CONFIGETHEREYES_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGETHEREYES_CONFIGETHEREYES_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGETHEREYES_CONFIGETHEREYES_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEtherEyes*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEtherEyes*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGETHEREYES_CONFIGETHEREYES_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigEtherEyes*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEtherEyes*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGETHEREYES_CONFIGETHEREYES_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

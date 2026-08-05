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

#define MOLEMOLE_CONFIG_CONFIGETHEREYES_CLASS_3_CC2A607C1636A442_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16C3EFB0)
#define MOLEMOLE_CONFIG_CONFIGETHEREYES_CLASS_3_CC2A607C1636A442_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16C3EFC0)
#define MOLEMOLE_CONFIG_CONFIGETHEREYES_CLASS_3_CC2A607C1636A442_WRITE_OFFSET UNITYSDK_OFFSET(0x16C3F380)
#define MOLEMOLE_CONFIG_CONFIGETHEREYES_CLASS_3_CC2A607C1636A442__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C3F600)
#define MOLEMOLE_CONFIG_CONFIGETHEREYES_CLASS_3_CC2A607C1636A442__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3F5C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEtherEyes_Class_3_CC2A607C1636A442_TypeDefinitionIndex = 87666;

	class ConfigEtherEyes_Class_3_CC2A607C1636A442 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEtherEyes*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>*>*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEtherEyes_Class_3_CC2A607C1636A442_TypeDefinitionIndex)->GetStaticField(0x48860);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectType, ::MoleMole::Config::EtherEyesObjectTypeDefaultConfig*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectType, ::MoleMole::Config::EtherEyesObjectTypeDefaultConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEtherEyes_Class_3_CC2A607C1636A442_TypeDefinitionIndex)->GetStaticField(0x48868);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::EtherEyesHintInfoType, ::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::EtherEyesHintInfoType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEtherEyes_Class_3_CC2A607C1636A442_TypeDefinitionIndex)->GetStaticField(0x48870);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EtherEyesOutlineConfig*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EtherEyesOutlineConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEtherEyes_Class_3_CC2A607C1636A442_TypeDefinitionIndex)->GetStaticField(0x48878);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectSize, ::MoleMole::Config::EtherEyesInteractableVariationConfig*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectSize, ::MoleMole::Config::EtherEyesInteractableVariationConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEtherEyes_Class_3_CC2A607C1636A442_TypeDefinitionIndex)->GetStaticField(0x48880);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGETHEREYES_CLASS_3_CC2A607C1636A442__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGETHEREYES_CLASS_3_CC2A607C1636A442__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGETHEREYES_CLASS_3_CC2A607C1636A442_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEtherEyes*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEtherEyes*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGETHEREYES_CLASS_3_CC2A607C1636A442_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigEtherEyes*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEtherEyes*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGETHEREYES_CLASS_3_CC2A607C1636A442_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

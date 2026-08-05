#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCameraZoom; }
namespace MoleMole::Config { class ConfigCameraZooms; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_CLASS_3_64868970BC749F0C_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16C3B590)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_CLASS_3_64868970BC749F0C_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16C3B5A0)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_CLASS_3_64868970BC749F0C_WRITE_OFFSET UNITYSDK_OFFSET(0x16C3B670)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_CLASS_3_64868970BC749F0C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C3B760)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_CLASS_3_64868970BC749F0C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3B720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraZooms_Class_3_64868970BC749F0C_TypeDefinitionIndex = 55761;

	class ConfigCameraZooms_Class_3_64868970BC749F0C : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigCameraZooms*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraZoom*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraZoom*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraZooms_Class_3_64868970BC749F0C_TypeDefinitionIndex)->GetStaticField(0x48850);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_CLASS_3_64868970BC749F0C__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_CLASS_3_64868970BC749F0C__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_CLASS_3_64868970BC749F0C_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraZooms*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraZooms*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_CLASS_3_64868970BC749F0C_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraZooms*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraZooms*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_CLASS_3_64868970BC749F0C_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

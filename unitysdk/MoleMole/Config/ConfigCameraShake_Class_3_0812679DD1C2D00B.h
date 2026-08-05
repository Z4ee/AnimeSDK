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

#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CLASS_3_0812679DD1C2D00B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8F3930)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CLASS_3_0812679DD1C2D00B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8F3940)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CLASS_3_0812679DD1C2D00B_WRITE_OFFSET UNITYSDK_OFFSET(0x1B8F4B90)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CLASS_3_0812679DD1C2D00B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8F5620)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CLASS_3_0812679DD1C2D00B__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8F55E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraShake_Class_3_0812679DD1C2D00B_TypeDefinitionIndex = 72481;

	class ConfigCameraShake_Class_3_0812679DD1C2D00B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigCameraShake*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_Class_3_0812679DD1C2D00B_TypeDefinitionIndex)->GetStaticField(0x39B90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_Class_3_0812679DD1C2D00B_TypeDefinitionIndex)->GetStaticField(0x39B98);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ShakeType>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ShakeType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_Class_3_0812679DD1C2D00B_TypeDefinitionIndex)->GetStaticField(0x39BA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_Class_3_0812679DD1C2D00B_TypeDefinitionIndex)->GetStaticField(0x39BA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AttackPropConfigType>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AttackPropConfigType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_Class_3_0812679DD1C2D00B_TypeDefinitionIndex)->GetStaticField(0x39BB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DissipationMode>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DissipationMode>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_Class_3_0812679DD1C2D00B_TypeDefinitionIndex)->GetStaticField(0x39BB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_Class_3_0812679DD1C2D00B_TypeDefinitionIndex)->GetStaticField(0x39BC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPlayStacking>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPlayStacking>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_Class_3_0812679DD1C2D00B_TypeDefinitionIndex)->GetStaticField(0x39BC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPriority>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigDataPriority>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraShake_Class_3_0812679DD1C2D00B_TypeDefinitionIndex)->GetStaticField(0x39BD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CLASS_3_0812679DD1C2D00B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CLASS_3_0812679DD1C2D00B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CLASS_3_0812679DD1C2D00B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraShake*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraShake*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CLASS_3_0812679DD1C2D00B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraShake*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraShake*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_CLASS_3_0812679DD1C2D00B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

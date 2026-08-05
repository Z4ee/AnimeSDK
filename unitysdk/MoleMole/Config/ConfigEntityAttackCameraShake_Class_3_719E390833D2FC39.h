#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityAttackCameraShake; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_CLASS_3_719E390833D2FC39_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x177DB8A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_CLASS_3_719E390833D2FC39_READMEMBER_OFFSET UNITYSDK_OFFSET(0x177DB8B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_CLASS_3_719E390833D2FC39_WRITE_OFFSET UNITYSDK_OFFSET(0x177DBA40)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_CLASS_3_719E390833D2FC39__CCTOR_OFFSET UNITYSDK_OFFSET(0x177DBBA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_CLASS_3_719E390833D2FC39__CTOR_OFFSET UNITYSDK_OFFSET(0x177DBB60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackCameraShake_Class_3_719E390833D2FC39_TypeDefinitionIndex = 58418;

	class ConfigEntityAttackCameraShake_Class_3_719E390833D2FC39 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityAttackCameraShake*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackCameraShake_Class_3_719E390833D2FC39_TypeDefinitionIndex)->GetStaticField(0x44B40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityAttackCameraShake_Class_3_719E390833D2FC39_TypeDefinitionIndex)->GetStaticField(0x44B48);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_CLASS_3_719E390833D2FC39__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_CLASS_3_719E390833D2FC39__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_CLASS_3_719E390833D2FC39_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAttackCameraShake*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackCameraShake*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_CLASS_3_719E390833D2FC39_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAttackCameraShake*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackCameraShake*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_CLASS_3_719E390833D2FC39_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

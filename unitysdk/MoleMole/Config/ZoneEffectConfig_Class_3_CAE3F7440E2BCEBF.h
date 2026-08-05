#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace MoleMole::Config { class ZoneEffectConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_CLASS_3_CAE3F7440E2BCEBF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B92C070)
#define MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_CLASS_3_CAE3F7440E2BCEBF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B92C080)
#define MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_CLASS_3_CAE3F7440E2BCEBF_WRITE_OFFSET UNITYSDK_OFFSET(0x1B92C4E0)
#define MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_CLASS_3_CAE3F7440E2BCEBF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B92C7C0)
#define MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_CLASS_3_CAE3F7440E2BCEBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92C780)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZoneEffectConfig_Class_3_CAE3F7440E2BCEBF_TypeDefinitionIndex = 63409;

	class ZoneEffectConfig_Class_3_CAE3F7440E2BCEBF : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ZoneEffectConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ZoneEffectConfig_Class_3_CAE3F7440E2BCEBF_TypeDefinitionIndex)->GetStaticField(0x39DB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EffectAutoDynamicValue*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EffectAutoDynamicValue*>**)Il2CppClass::FromTypeDefinitionIndex(ZoneEffectConfig_Class_3_CAE3F7440E2BCEBF_TypeDefinitionIndex)->GetStaticField(0x39DB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZoneEffectConfig_Class_3_CAE3F7440E2BCEBF_TypeDefinitionIndex)->GetStaticField(0x39DC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ZoneEffectConfig_Class_3_CAE3F7440E2BCEBF_TypeDefinitionIndex)->GetStaticField(0x39DC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(ZoneEffectConfig_Class_3_CAE3F7440E2BCEBF_TypeDefinitionIndex)->GetStaticField(0x39DD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_CLASS_3_CAE3F7440E2BCEBF__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_CLASS_3_CAE3F7440E2BCEBF__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_CLASS_3_CAE3F7440E2BCEBF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ZoneEffectConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ZoneEffectConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_CLASS_3_CAE3F7440E2BCEBF_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ZoneEffectConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ZoneEffectConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_CLASS_3_CAE3F7440E2BCEBF_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

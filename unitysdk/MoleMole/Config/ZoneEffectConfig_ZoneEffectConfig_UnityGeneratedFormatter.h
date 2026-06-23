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

#define MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_ZONEEFFECTCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x170CFD90)
#define MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_ZONEEFFECTCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x170CFDA0)
#define MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_ZONEEFFECTCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x170D0250)
#define MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_ZONEEFFECTCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x170D0570)
#define MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_ZONEEFFECTCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x170D0530)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZoneEffectConfig_ZoneEffectConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 59878;

	class ZoneEffectConfig_ZoneEffectConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ZoneEffectConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(ZoneEffectConfig_ZoneEffectConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48480);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EffectAutoDynamicValue*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::EffectAutoDynamicValue*>**)Il2CppClass::FromTypeDefinitionIndex(ZoneEffectConfig_ZoneEffectConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48488);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ZoneEffectConfig_ZoneEffectConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48490);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZoneEffectConfig_ZoneEffectConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48498);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ZoneEffectConfig_ZoneEffectConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x484A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_ZONEEFFECTCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_ZONEEFFECTCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_ZONEEFFECTCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ZoneEffectConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ZoneEffectConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_ZONEEFFECTCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ZoneEffectConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ZoneEffectConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_ZONEEFFECTCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

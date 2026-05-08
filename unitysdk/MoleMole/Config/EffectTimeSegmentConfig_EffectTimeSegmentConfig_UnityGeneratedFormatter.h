#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class EffectTimeSegmentConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_EFFECTTIMESEGMENTCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xF9903B0)
#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_EFFECTTIMESEGMENTCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xF9903C0)
#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_EFFECTTIMESEGMENTCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x14945370)
#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_EFFECTTIMESEGMENTCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14945720)
#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_EFFECTTIMESEGMENTCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x149456E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectTimeSegmentConfig_EffectTimeSegmentConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 78035;

	class EffectTimeSegmentConfig_EffectTimeSegmentConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::EffectTimeSegmentConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EffectTimeSegmentConfig_EffectTimeSegmentConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x467E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(EffectTimeSegmentConfig_EffectTimeSegmentConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x467E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EffectTimeSegmentConfig_EffectTimeSegmentConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x467F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_EFFECTTIMESEGMENTCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_EFFECTTIMESEGMENTCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_EFFECTTIMESEGMENTCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::EffectTimeSegmentConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::EffectTimeSegmentConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_EFFECTTIMESEGMENTCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::EffectTimeSegmentConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectTimeSegmentConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_EFFECTTIMESEGMENTCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

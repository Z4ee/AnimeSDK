#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LevelPointType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigPosRotReferLevelPoint; }
namespace MoleMole::Config { class DynamicString; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16A98820)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16A98830)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16A98B80)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A98DD0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A98D90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotReferLevelPoint_ConfigPosRotReferLevelPoint_UnityGeneratedFormatter_TypeDefinitionIndex = 38171;

	class ConfigPosRotReferLevelPoint_ConfigPosRotReferLevelPoint_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigPosRotReferLevelPoint*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotReferLevelPoint_ConfigPosRotReferLevelPoint_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31F60);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::LevelPointType>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::LevelPointType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotReferLevelPoint_ConfigPosRotReferLevelPoint_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x31F68);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigPosRotReferLevelPoint*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigPosRotReferLevelPoint*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigPosRotReferLevelPoint*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRotReferLevelPoint*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CONFIGPOSROTREFERLEVELPOINT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

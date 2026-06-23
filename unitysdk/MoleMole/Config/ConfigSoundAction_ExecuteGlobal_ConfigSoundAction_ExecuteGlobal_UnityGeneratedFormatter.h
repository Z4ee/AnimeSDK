#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_ExecuteGlobal; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CONFIGSOUNDACTION_EXECUTEGLOBAL_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x158B5A50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CONFIGSOUNDACTION_EXECUTEGLOBAL_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x158B5A60)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CONFIGSOUNDACTION_EXECUTEGLOBAL_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x158B5C40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CONFIGSOUNDACTION_EXECUTEGLOBAL_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x158B5DE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CONFIGSOUNDACTION_EXECUTEGLOBAL_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x158B5DA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_ExecuteGlobal_ConfigSoundAction_ExecuteGlobal_UnityGeneratedFormatter_TypeDefinitionIndex = 60031;

	class ConfigSoundAction_ExecuteGlobal_ConfigSoundAction_ExecuteGlobal_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_ExecuteGlobal*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_ExecuteGlobal_ConfigSoundAction_ExecuteGlobal_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x33EE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CONFIGSOUNDACTION_EXECUTEGLOBAL_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CONFIGSOUNDACTION_EXECUTEGLOBAL_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CONFIGSOUNDACTION_EXECUTEGLOBAL_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_ExecuteGlobal*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_ExecuteGlobal*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CONFIGSOUNDACTION_EXECUTEGLOBAL_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_ExecuteGlobal*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_ExecuteGlobal*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_EXECUTEGLOBAL_CONFIGSOUNDACTION_EXECUTEGLOBAL_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

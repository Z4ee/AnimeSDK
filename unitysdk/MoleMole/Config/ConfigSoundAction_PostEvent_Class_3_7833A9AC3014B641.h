#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_PostEvent; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_CLASS_3_7833A9AC3014B641_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7F9800)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_CLASS_3_7833A9AC3014B641_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B7F9810)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_CLASS_3_7833A9AC3014B641_WRITE_OFFSET UNITYSDK_OFFSET(0x1B7F99A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_CLASS_3_7833A9AC3014B641__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7F9B00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_CLASS_3_7833A9AC3014B641__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F9AC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_PostEvent_Class_3_7833A9AC3014B641_TypeDefinitionIndex = 47545;

	class ConfigSoundAction_PostEvent_Class_3_7833A9AC3014B641 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_PostEvent*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_PostEvent_Class_3_7833A9AC3014B641_TypeDefinitionIndex)->GetStaticField(0x4A580);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_CLASS_3_7833A9AC3014B641__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_CLASS_3_7833A9AC3014B641__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_CLASS_3_7833A9AC3014B641_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_PostEvent*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_PostEvent*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_CLASS_3_7833A9AC3014B641_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_PostEvent*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_PostEvent*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POSTEVENT_CLASS_3_7833A9AC3014B641_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

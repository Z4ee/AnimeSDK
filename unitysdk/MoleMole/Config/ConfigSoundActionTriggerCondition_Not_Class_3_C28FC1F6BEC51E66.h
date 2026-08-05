#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionTriggerCondition_Not; }
namespace MoleMole::Config { class ISoundActionTriggerCondition; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_NOT_CLASS_3_C28FC1F6BEC51E66_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x177E2100)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_NOT_CLASS_3_C28FC1F6BEC51E66_READMEMBER_OFFSET UNITYSDK_OFFSET(0x177E2110)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_NOT_CLASS_3_C28FC1F6BEC51E66_WRITE_OFFSET UNITYSDK_OFFSET(0x177E21E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_NOT_CLASS_3_C28FC1F6BEC51E66__CCTOR_OFFSET UNITYSDK_OFFSET(0x177E22D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_NOT_CLASS_3_C28FC1F6BEC51E66__CTOR_OFFSET UNITYSDK_OFFSET(0x177E2290)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_Not_Class_3_C28FC1F6BEC51E66_TypeDefinitionIndex = 48902;

	class ConfigSoundActionTriggerCondition_Not_Class_3_C28FC1F6BEC51E66 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundActionTriggerCondition_Not*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ISoundActionTriggerCondition*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ISoundActionTriggerCondition*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundActionTriggerCondition_Not_Class_3_C28FC1F6BEC51E66_TypeDefinitionIndex)->GetStaticField(0x44BA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_NOT_CLASS_3_C28FC1F6BEC51E66__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_NOT_CLASS_3_C28FC1F6BEC51E66__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_NOT_CLASS_3_C28FC1F6BEC51E66_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundActionTriggerCondition_Not*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundActionTriggerCondition_Not*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_NOT_CLASS_3_C28FC1F6BEC51E66_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundActionTriggerCondition_Not*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundActionTriggerCondition_Not*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_NOT_CLASS_3_C28FC1F6BEC51E66_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

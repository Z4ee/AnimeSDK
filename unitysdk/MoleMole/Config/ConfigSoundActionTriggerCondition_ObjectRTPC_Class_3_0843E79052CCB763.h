#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionTriggerCondition_ObjectRTPC; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CLASS_3_0843E79052CCB763_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1170B570)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CLASS_3_0843E79052CCB763_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1170B580)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CLASS_3_0843E79052CCB763_WRITE_OFFSET UNITYSDK_OFFSET(0x1170B890)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CLASS_3_0843E79052CCB763__CCTOR_OFFSET UNITYSDK_OFFSET(0x1170BAB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CLASS_3_0843E79052CCB763__CTOR_OFFSET UNITYSDK_OFFSET(0x1170BA70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_ObjectRTPC_Class_3_0843E79052CCB763_TypeDefinitionIndex = 81929;

	class ConfigSoundActionTriggerCondition_ObjectRTPC_Class_3_0843E79052CCB763 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundActionTriggerCondition_ObjectRTPC_Class_3_0843E79052CCB763_TypeDefinitionIndex)->GetStaticField(0x4F960);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundActionTriggerCondition_ObjectRTPC_Class_3_0843E79052CCB763_TypeDefinitionIndex)->GetStaticField(0x4F968);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC_RtpccompareOp>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundActionTriggerCondition_ObjectRTPC_Class_3_0843E79052CCB763_TypeDefinitionIndex)->GetStaticField(0x4F970);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundActionTriggerCondition_ObjectRTPC_Class_3_0843E79052CCB763_TypeDefinitionIndex)->GetStaticField(0x4F978);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CLASS_3_0843E79052CCB763__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CLASS_3_0843E79052CCB763__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CLASS_3_0843E79052CCB763_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CLASS_3_0843E79052CCB763_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundActionTriggerCondition_ObjectRTPC*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_OBJECTRTPC_CLASS_3_0843E79052CCB763_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

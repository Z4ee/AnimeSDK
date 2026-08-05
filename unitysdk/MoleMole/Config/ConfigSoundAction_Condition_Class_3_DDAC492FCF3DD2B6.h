#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundAction_Condition; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_CLASS_3_DDAC492FCF3DD2B6_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x162626B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_CLASS_3_DDAC492FCF3DD2B6_READMEMBER_OFFSET UNITYSDK_OFFSET(0x162626C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_CLASS_3_DDAC492FCF3DD2B6_WRITE_OFFSET UNITYSDK_OFFSET(0x16262A70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_CLASS_3_DDAC492FCF3DD2B6__CCTOR_OFFSET UNITYSDK_OFFSET(0x16262CE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_CLASS_3_DDAC492FCF3DD2B6__CTOR_OFFSET UNITYSDK_OFFSET(0x16262CA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Condition_Class_3_DDAC492FCF3DD2B6_TypeDefinitionIndex = 78213;

	class ConfigSoundAction_Condition_Class_3_DDAC492FCF3DD2B6 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_Condition*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Condition_Class_3_DDAC492FCF3DD2B6_TypeDefinitionIndex)->GetStaticField(0x32440);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Condition_Class_3_DDAC492FCF3DD2B6_TypeDefinitionIndex)->GetStaticField(0x32448);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Condition_Class_3_DDAC492FCF3DD2B6_TypeDefinitionIndex)->GetStaticField(0x32450);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_CLASS_3_DDAC492FCF3DD2B6__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_CLASS_3_DDAC492FCF3DD2B6__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_CLASS_3_DDAC492FCF3DD2B6_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_Condition*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Condition*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_CLASS_3_DDAC492FCF3DD2B6_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_Condition*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Condition*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CONDITION_CLASS_3_DDAC492FCF3DD2B6_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

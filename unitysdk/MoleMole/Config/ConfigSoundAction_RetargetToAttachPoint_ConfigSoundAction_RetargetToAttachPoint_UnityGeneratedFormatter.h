#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundAction_RetargetToAttachPoint; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17D60600)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17D60610)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17D60AB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D60DB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D60D70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_RetargetToAttachPoint_ConfigSoundAction_RetargetToAttachPoint_UnityGeneratedFormatter_TypeDefinitionIndex = 46050;

	class ConfigSoundAction_RetargetToAttachPoint_ConfigSoundAction_RetargetToAttachPoint_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_RetargetToAttachPoint*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RetargetToAttachPoint_ConfigSoundAction_RetargetToAttachPoint_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E980);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RetargetToAttachPoint_ConfigSoundAction_RetargetToAttachPoint_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E988);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RetargetToAttachPoint_ConfigSoundAction_RetargetToAttachPoint_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E990);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_RetargetToAttachPoint*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_RetargetToAttachPoint*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_RetargetToAttachPoint*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_RetargetToAttachPoint*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

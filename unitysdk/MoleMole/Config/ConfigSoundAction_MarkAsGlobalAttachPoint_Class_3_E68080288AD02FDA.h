#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_MarkAsGlobalAttachPoint; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_CLASS_3_E68080288AD02FDA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x135057B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_CLASS_3_E68080288AD02FDA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x135057C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_CLASS_3_E68080288AD02FDA_WRITE_OFFSET UNITYSDK_OFFSET(0x13505950)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_CLASS_3_E68080288AD02FDA__CCTOR_OFFSET UNITYSDK_OFFSET(0x13505AB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_CLASS_3_E68080288AD02FDA__CTOR_OFFSET UNITYSDK_OFFSET(0x13505A70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_MarkAsGlobalAttachPoint_Class_3_E68080288AD02FDA_TypeDefinitionIndex = 44616;

	class ConfigSoundAction_MarkAsGlobalAttachPoint_Class_3_E68080288AD02FDA : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_MarkAsGlobalAttachPoint*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_MarkAsGlobalAttachPoint_Class_3_E68080288AD02FDA_TypeDefinitionIndex)->GetStaticField(0x4BFB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_CLASS_3_E68080288AD02FDA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_CLASS_3_E68080288AD02FDA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_CLASS_3_E68080288AD02FDA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_MarkAsGlobalAttachPoint*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_MarkAsGlobalAttachPoint*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_CLASS_3_E68080288AD02FDA_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_MarkAsGlobalAttachPoint*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_MarkAsGlobalAttachPoint*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_MARKASGLOBALATTACHPOINT_CLASS_3_E68080288AD02FDA_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

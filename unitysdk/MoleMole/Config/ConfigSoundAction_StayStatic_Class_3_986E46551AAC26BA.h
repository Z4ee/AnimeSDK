#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundAction_StayStatic; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CLASS_3_986E46551AAC26BA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD61D90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CLASS_3_986E46551AAC26BA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD61DA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CLASS_3_986E46551AAC26BA_WRITE_OFFSET UNITYSDK_OFFSET(0x1BD61F30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CLASS_3_986E46551AAC26BA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD62090)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CLASS_3_986E46551AAC26BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD62050)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_StayStatic_Class_3_986E46551AAC26BA_TypeDefinitionIndex = 80806;

	class ConfigSoundAction_StayStatic_Class_3_986E46551AAC26BA : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_StayStatic*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_StayStatic_Class_3_986E46551AAC26BA_TypeDefinitionIndex)->GetStaticField(0x50D30);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_StayStatic_Class_3_986E46551AAC26BA_TypeDefinitionIndex)->GetStaticField(0x50D38);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CLASS_3_986E46551AAC26BA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CLASS_3_986E46551AAC26BA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CLASS_3_986E46551AAC26BA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_StayStatic*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_StayStatic*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CLASS_3_986E46551AAC26BA_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_StayStatic*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_StayStatic*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CLASS_3_986E46551AAC26BA_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

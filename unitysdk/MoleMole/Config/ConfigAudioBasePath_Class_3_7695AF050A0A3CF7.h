#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AudioBasePath; }
namespace MoleMole::Config { class ConfigAudioBasePath; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CLASS_3_7695AF050A0A3CF7_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11469910)
#define MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CLASS_3_7695AF050A0A3CF7_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11469920)
#define MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CLASS_3_7695AF050A0A3CF7_WRITE_OFFSET UNITYSDK_OFFSET(0x11469AB0)
#define MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CLASS_3_7695AF050A0A3CF7__CCTOR_OFFSET UNITYSDK_OFFSET(0x11469C10)
#define MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CLASS_3_7695AF050A0A3CF7__CTOR_OFFSET UNITYSDK_OFFSET(0x11469BD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAudioBasePath_Class_3_7695AF050A0A3CF7_TypeDefinitionIndex = 71535;

	class ConfigAudioBasePath_Class_3_7695AF050A0A3CF7 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigAudioBasePath*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::AudioBasePath*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::AudioBasePath*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAudioBasePath_Class_3_7695AF050A0A3CF7_TypeDefinitionIndex)->GetStaticField(0x46B00);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AudioBasePath*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AudioBasePath*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAudioBasePath_Class_3_7695AF050A0A3CF7_TypeDefinitionIndex)->GetStaticField(0x46B08);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CLASS_3_7695AF050A0A3CF7__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CLASS_3_7695AF050A0A3CF7__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CLASS_3_7695AF050A0A3CF7_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAudioBasePath*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAudioBasePath*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CLASS_3_7695AF050A0A3CF7_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigAudioBasePath*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAudioBasePath*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_CLASS_3_7695AF050A0A3CF7_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

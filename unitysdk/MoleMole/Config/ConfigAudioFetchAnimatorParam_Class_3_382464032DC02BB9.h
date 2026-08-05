#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigAudioFetchAnimatorParam_AnimatorParamType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigAudioFetchAnimatorParam; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CLASS_3_382464032DC02BB9_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14367180)
#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CLASS_3_382464032DC02BB9_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14367190)
#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CLASS_3_382464032DC02BB9_WRITE_OFFSET UNITYSDK_OFFSET(0x14367320)
#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CLASS_3_382464032DC02BB9__CCTOR_OFFSET UNITYSDK_OFFSET(0x14367480)
#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CLASS_3_382464032DC02BB9__CTOR_OFFSET UNITYSDK_OFFSET(0x14367440)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAudioFetchAnimatorParam_Class_3_382464032DC02BB9_TypeDefinitionIndex = 74814;

	class ConfigAudioFetchAnimatorParam_Class_3_382464032DC02BB9 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigAudioFetchAnimatorParam*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAudioFetchAnimatorParam_AnimatorParamType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAudioFetchAnimatorParam_AnimatorParamType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAudioFetchAnimatorParam_Class_3_382464032DC02BB9_TypeDefinitionIndex)->GetStaticField(0x36410);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAudioFetchAnimatorParam_Class_3_382464032DC02BB9_TypeDefinitionIndex)->GetStaticField(0x36418);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CLASS_3_382464032DC02BB9__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CLASS_3_382464032DC02BB9__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CLASS_3_382464032DC02BB9_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAudioFetchAnimatorParam*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAudioFetchAnimatorParam*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CLASS_3_382464032DC02BB9_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigAudioFetchAnimatorParam*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAudioFetchAnimatorParam*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_CLASS_3_382464032DC02BB9_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigWaveMorphParam; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CONFIGWAVEMORPHPARAM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xE97B3E0)
#define MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CONFIGWAVEMORPHPARAM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xE97B3F0)
#define MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CONFIGWAVEMORPHPARAM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xE97B750)
#define MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CONFIGWAVEMORPHPARAM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE97B9A0)
#define MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CONFIGWAVEMORPHPARAM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xE97B960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWaveMorphParam_ConfigWaveMorphParam_UnityGeneratedFormatter_TypeDefinitionIndex = 51150;

	class ConfigWaveMorphParam_ConfigWaveMorphParam_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigWaveMorphParam*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigWaveMorphParam_ConfigWaveMorphParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AF60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigWaveMorphParam_ConfigWaveMorphParam_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AF68);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CONFIGWAVEMORPHPARAM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CONFIGWAVEMORPHPARAM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CONFIGWAVEMORPHPARAM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigWaveMorphParam*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigWaveMorphParam*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CONFIGWAVEMORPHPARAM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigWaveMorphParam*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigWaveMorphParam*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CONFIGWAVEMORPHPARAM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

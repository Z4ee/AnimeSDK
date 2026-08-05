#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigWaveMorphParam; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CLASS_3_C42E898A8975F448_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14877490)
#define MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CLASS_3_C42E898A8975F448_READMEMBER_OFFSET UNITYSDK_OFFSET(0x148774A0)
#define MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CLASS_3_C42E898A8975F448_WRITE_OFFSET UNITYSDK_OFFSET(0x148777B0)
#define MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CLASS_3_C42E898A8975F448__CCTOR_OFFSET UNITYSDK_OFFSET(0x148779D0)
#define MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CLASS_3_C42E898A8975F448__CTOR_OFFSET UNITYSDK_OFFSET(0x14877990)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWaveMorphParam_Class_3_C42E898A8975F448_TypeDefinitionIndex = 85797;

	class ConfigWaveMorphParam_Class_3_C42E898A8975F448 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigWaveMorphParam*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigWaveMorphParam_Class_3_C42E898A8975F448_TypeDefinitionIndex)->GetStaticField(0x42480);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigWaveMorphParam_Class_3_C42E898A8975F448_TypeDefinitionIndex)->GetStaticField(0x42488);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CLASS_3_C42E898A8975F448__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CLASS_3_C42E898A8975F448__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CLASS_3_C42E898A8975F448_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigWaveMorphParam*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigWaveMorphParam*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CLASS_3_C42E898A8975F448_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigWaveMorphParam*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigWaveMorphParam*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_CLASS_3_C42E898A8975F448_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

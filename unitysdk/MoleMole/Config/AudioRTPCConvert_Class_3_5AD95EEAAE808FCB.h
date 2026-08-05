#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AudioRTPCConvert_ConvertType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AudioRTPCConvert; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_CLASS_3_5AD95EEAAE808FCB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14857D40)
#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_CLASS_3_5AD95EEAAE808FCB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14857D50)
#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_CLASS_3_5AD95EEAAE808FCB_WRITE_OFFSET UNITYSDK_OFFSET(0x14858060)
#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_CLASS_3_5AD95EEAAE808FCB__CCTOR_OFFSET UNITYSDK_OFFSET(0x14858280)
#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_CLASS_3_5AD95EEAAE808FCB__CTOR_OFFSET UNITYSDK_OFFSET(0x14858240)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AudioRTPCConvert_Class_3_5AD95EEAAE808FCB_TypeDefinitionIndex = 75167;

	class AudioRTPCConvert_Class_3_5AD95EEAAE808FCB : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AudioRTPCConvert*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AudioRTPCConvert_ConvertType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AudioRTPCConvert_ConvertType>**)Il2CppClass::FromTypeDefinitionIndex(AudioRTPCConvert_Class_3_5AD95EEAAE808FCB_TypeDefinitionIndex)->GetStaticField(0x42290);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AudioRTPCConvert_Class_3_5AD95EEAAE808FCB_TypeDefinitionIndex)->GetStaticField(0x42298);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AudioRTPCConvert_Class_3_5AD95EEAAE808FCB_TypeDefinitionIndex)->GetStaticField(0x422A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_CLASS_3_5AD95EEAAE808FCB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_CLASS_3_5AD95EEAAE808FCB__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_CLASS_3_5AD95EEAAE808FCB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AudioRTPCConvert*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AudioRTPCConvert*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_CLASS_3_5AD95EEAAE808FCB_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AudioRTPCConvert*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AudioRTPCConvert*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_CLASS_3_5AD95EEAAE808FCB_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

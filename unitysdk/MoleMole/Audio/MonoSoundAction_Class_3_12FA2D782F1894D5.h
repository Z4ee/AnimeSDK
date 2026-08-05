#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Audio { class MonoSoundAction; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_AUDIO_MONOSOUNDACTION_CLASS_3_12FA2D782F1894D5_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17791F60)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION_CLASS_3_12FA2D782F1894D5_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17791F70)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION_CLASS_3_12FA2D782F1894D5_WRITE_OFFSET UNITYSDK_OFFSET(0x17792100)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION_CLASS_3_12FA2D782F1894D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x17792260)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION_CLASS_3_12FA2D782F1894D5__CTOR_OFFSET UNITYSDK_OFFSET(0x17792220)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundAction_Class_3_12FA2D782F1894D5_TypeDefinitionIndex = 44351;

	class MonoSoundAction_Class_3_12FA2D782F1894D5 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Audio::MonoSoundAction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSoundAction_Class_3_12FA2D782F1894D5_TypeDefinitionIndex)->GetStaticField(0x447D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_CLASS_3_12FA2D782F1894D5__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_CLASS_3_12FA2D782F1894D5__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_CLASS_3_12FA2D782F1894D5_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Audio::MonoSoundAction*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Audio::MonoSoundAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_CLASS_3_12FA2D782F1894D5_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Audio::MonoSoundAction*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Audio::MonoSoundAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_CLASS_3_12FA2D782F1894D5_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

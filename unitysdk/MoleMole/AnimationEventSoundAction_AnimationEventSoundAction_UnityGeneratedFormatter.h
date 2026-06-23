#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AnimationEventSoundAction; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_ANIMATIONEVENTSOUNDACTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xE944B30)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_ANIMATIONEVENTSOUNDACTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xE944B40)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_ANIMATIONEVENTSOUNDACTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xE944DE0)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_ANIMATIONEVENTSOUNDACTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE944FD0)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_ANIMATIONEVENTSOUNDACTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xE944F90)

namespace MoleMole
{
	inline static constexpr unsigned int AnimationEventSoundAction_AnimationEventSoundAction_UnityGeneratedFormatter_TypeDefinitionIndex = 69347;

	class AnimationEventSoundAction_AnimationEventSoundAction_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::AnimationEventSoundAction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationEventSoundAction_AnimationEventSoundAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AD00);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationEventSoundAction_AnimationEventSoundAction_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4AD08);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_ANIMATIONEVENTSOUNDACTION_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_ANIMATIONEVENTSOUNDACTION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_ANIMATIONEVENTSOUNDACTION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AnimationEventSoundAction*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AnimationEventSoundAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_ANIMATIONEVENTSOUNDACTION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::AnimationEventSoundAction*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AnimationEventSoundAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_ANIMATIONEVENTSOUNDACTION_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}

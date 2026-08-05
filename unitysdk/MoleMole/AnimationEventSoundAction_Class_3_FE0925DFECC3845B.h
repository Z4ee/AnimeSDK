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

#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_CLASS_3_FE0925DFECC3845B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12798FA0)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_CLASS_3_FE0925DFECC3845B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12798FB0)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_CLASS_3_FE0925DFECC3845B_WRITE_OFFSET UNITYSDK_OFFSET(0x12799200)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_CLASS_3_FE0925DFECC3845B__CCTOR_OFFSET UNITYSDK_OFFSET(0x127993C0)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_CLASS_3_FE0925DFECC3845B__CTOR_OFFSET UNITYSDK_OFFSET(0x12799380)

namespace MoleMole
{
	inline static constexpr unsigned int AnimationEventSoundAction_Class_3_FE0925DFECC3845B_TypeDefinitionIndex = 68774;

	class AnimationEventSoundAction_Class_3_FE0925DFECC3845B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::AnimationEventSoundAction*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationEventSoundAction_Class_3_FE0925DFECC3845B_TypeDefinitionIndex)->GetStaticField(0x4D2F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationEventSoundAction_Class_3_FE0925DFECC3845B_TypeDefinitionIndex)->GetStaticField(0x4D2F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_CLASS_3_FE0925DFECC3845B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_CLASS_3_FE0925DFECC3845B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_CLASS_3_FE0925DFECC3845B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AnimationEventSoundAction*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AnimationEventSoundAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_CLASS_3_FE0925DFECC3845B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::AnimationEventSoundAction*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AnimationEventSoundAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_CLASS_3_FE0925DFECC3845B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}

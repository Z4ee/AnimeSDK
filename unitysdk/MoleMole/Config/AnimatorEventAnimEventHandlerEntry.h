#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTANIMEVENTHANDLERENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xECFB410)
#define MOLEMOLE_CONFIG_ANIMATOREVENTANIMEVENTHANDLERENTRY_GETHASH16_OFFSET UNITYSDK_OFFSET(0xECFB490)
#define MOLEMOLE_CONFIG_ANIMATOREVENTANIMEVENTHANDLERENTRY_GET_ANIMEVENTHASH_OFFSET UNITYSDK_OFFSET(0xECFB3F0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTANIMEVENTHANDLERENTRY_ONSERIALIZEDTORUNTIME_OFFSET UNITYSDK_OFFSET(0xECFB4E0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTANIMEVENTHANDLERENTRY_SET_ANIMEVENTHASH_OFFSET UNITYSDK_OFFSET(0xECFB400)
#define MOLEMOLE_CONFIG_ANIMATOREVENTANIMEVENTHANDLERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xECFB560)
#define MOLEMOLE_CONFIG_ANIMATOREVENTANIMEVENTHANDLERENTRY___BASE_ONSERIALIZEDTORUNTIME_OFFSET UNITYSDK_OFFSET(0xECFB5C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventAnimEventHandlerEntry_TypeDefinitionIndex = 48822;

	class AnimatorEventAnimEventHandlerEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* AnimEventID; // 0x58
		::System::Int32 _AnimEventHash_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTANIMEVENTHANDLERENTRY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_AnimEventHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTANIMEVENTHANDLERENTRY_GET_ANIMEVENTHASH_OFFSET))(this);
		}

		::System::Void set_AnimEventHash(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTANIMEVENTHANDLERENTRY_SET_ANIMEVENTHASH_OFFSET))(this, value);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTANIMEVENTHANDLERENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}

		static ::System::UInt16 GetHash16(::System::Int32 hash)
		{
			return ((::System::UInt16(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTANIMEVENTHANDLERENTRY_GETHASH16_OFFSET))(hash);
		}

		::System::Void OnSerializedToRuntime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTANIMEVENTHANDLERENTRY_ONSERIALIZEDTORUNTIME_OFFSET))(this);
		}

		::System::Void __base_OnSerializedToRuntime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTANIMEVENTHANDLERENTRY___BASE_ONSERIALIZEDTORUNTIME_OFFSET))(this);
		}
	};
}

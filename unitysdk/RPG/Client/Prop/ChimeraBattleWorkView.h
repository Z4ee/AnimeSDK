#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_PLAYBREAK_OFFSET UNITYSDK_OFFSET(0xADBAD20)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_PLAYDITHER_OFFSET UNITYSDK_OFFSET(0xADBAC00)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_PLAYOPENBOX_OFFSET UNITYSDK_OFFSET(0xADBAC50)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_SETATTACHPOINTACTIVE_OFFSET UNITYSDK_OFFSET(0xADBAE20)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_START_OFFSET UNITYSDK_OFFSET(0xADBAB50)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0xADBAF20)
#define RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xADBAF10)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBattleWorkView_TypeDefinitionIndex = 71941;

	class ChimeraBattleWorkView : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattleWorkView_TypeDefinitionIndex)->GetStaticField(0x3260);
		}
		::RPG::Client::BaseShaderPropertyTransition* DitherHandler; // 0x18
		::UnityEngine::Animator* Animator; // 0x20
		::RPG::Client::AttachPointMapping* Field_5_3; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_START_OFFSET))(this);
		}

		::System::Void PlayDither()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_PLAYDITHER_OFFSET))(this);
		}

		::System::Void PlayOpenBox()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_PLAYOPENBOX_OFFSET))(this);
		}

		::System::Void PlayBreak()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_PLAYBREAK_OFFSET))(this);
		}

		::System::Void SetAttachPointActive(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEWORKVIEW_SETATTACHPOINTACTIVE_OFFSET))(this, a1, a2);
		}
	};
}

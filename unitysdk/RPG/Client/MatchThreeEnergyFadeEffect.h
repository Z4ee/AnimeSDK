#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_6CC143B9599F1FCA;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD6359F0)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_METHOD_5_45145A6EAA55CDC0_OFFSET UNITYSDK_OFFSET(0xD635570)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_METHOD_5_5138086028772073_OFFSET UNITYSDK_OFFSET(0xD6357A0)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_METHOD_5_85ED5C675D497AF5_OFFSET UNITYSDK_OFFSET(0xD635850)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xD635A80)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD635A30)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xD62EAB0)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD6359B0)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xD635B60)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeEnergyFadeEffect_TypeDefinitionIndex = 65977;

	class MatchThreeEnergyFadeEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* PMOJILOJEPE; // 0x18
		::UnityEngine::RectTransform* IGLNACMFMHF; // 0x20
		::UnityEngine::UI::Image* JLHDCKNHDJH; // 0x28
		::Class_1_6CC143B9599F1FCA* DLALHGJDNNO; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Play(::UnityEngine::RectTransform* a1, ::System::String* a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_PLAY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Method_5_45145A6EAA55CDC0(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_METHOD_5_45145A6EAA55CDC0_OFFSET))(this, a1);
		}

		::System::Void Method_5_5138086028772073(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_METHOD_5_5138086028772073_OFFSET))(this, a1);
		}

		::System::Void Method_5_85ED5C675D497AF5(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_METHOD_5_85ED5C675D497AF5_OFFSET))(this, a1, a2);
		}
	};
}

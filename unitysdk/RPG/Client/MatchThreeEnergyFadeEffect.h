#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_2201B1A0B73C7EF3;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD586130)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_METHOD_5_45145A6EAA55CDC0_OFFSET UNITYSDK_OFFSET(0xD585CB0)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_METHOD_5_5138086028772073_OFFSET UNITYSDK_OFFSET(0xD585EE0)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_METHOD_5_85ED5C675D497AF5_OFFSET UNITYSDK_OFFSET(0xD585F90)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xD5861C0)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD586170)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xD57F320)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD5860F0)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xD5862A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeEnergyFadeEffect_TypeDefinitionIndex = 65931;

	class MatchThreeEnergyFadeEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* PMOJILOJEPE; // 0x18
		::UnityEngine::RectTransform* IGLNACMFMHF; // 0x20
		::UnityEngine::UI::Image* JLHDCKNHDJH; // 0x28
		::Class_1_2201B1A0B73C7EF3* DLALHGJDNNO; // 0x30

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

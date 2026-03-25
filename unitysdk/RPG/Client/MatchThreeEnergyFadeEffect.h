#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_43B508F64DA705FE;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9B35150)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_METHOD_5_308A4BF208DA297E_OFFSET UNITYSDK_OFFSET(0x9B34FA0)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_METHOD_5_45145A6EAA55CDC0_OFFSET UNITYSDK_OFFSET(0x9B34CC0)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_METHOD_5_5138086028772073_OFFSET UNITYSDK_OFFSET(0x9B34EF0)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x9B351E0)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9B35190)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x9B2DBF0)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9B35110)
#define RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x9B352C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeEnergyFadeEffect_TypeDefinitionIndex = 53552;

	class MatchThreeEnergyFadeEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* Field_5_0; // 0x18
		::UnityEngine::RectTransform* Field_5_1; // 0x20
		::UnityEngine::UI::Image* Field_5_2; // 0x28
		::Class_1_43B508F64DA705FE* Field_5_3; // 0x30

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

		::System::Void Method_5_308A4BF208DA297E(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEENERGYFADEEFFECT_METHOD_5_308A4BF208DA297E_OFFSET))(this, a1, a2);
		}
	};
}

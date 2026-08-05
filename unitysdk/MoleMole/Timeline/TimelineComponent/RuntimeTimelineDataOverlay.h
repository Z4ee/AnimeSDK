#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x197949A0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19796550)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_METHOD_5_10AD0834AEF29F17_OFFSET UNITYSDK_OFFSET(0x19796E00)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_METHOD_5_24A3E783DDC27C78_OFFSET UNITYSDK_OFFSET(0x19794B10)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_METHOD_5_2B5881023D1BCA42_OFFSET UNITYSDK_OFFSET(0x19796630)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_METHOD_5_3DCCEE5DA06D6079_OFFSET UNITYSDK_OFFSET(0x19796EC0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x19794AB0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_METHOD_5_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x197961D0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19796B30)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x197965A0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x19796D70)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelineDataOverlay_TypeDefinitionIndex = 89429;

	class RuntimeTimelineDataOverlay : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Canvas** StaticGet_Field_5_6()
		{
			return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTimelineDataOverlay_TypeDefinitionIndex)->GetStaticField(0x4EA00);
		}
		static ::System::Boolean* StaticGet_Field_5_5()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RuntimeTimelineDataOverlay_TypeDefinitionIndex)->GetStaticField(0x12180);
		}
		// static const ::System::String* Field_5_2; // 0x0
		// static const ::System::String* Field_5_1; // 0x0
		::UnityEngine::Playables::PlayableDirector* Field_5_0; // 0x18
		::System::String* Field_5_7; // 0x20
		::UnityEngine::GameObject* Field_5_4; // 0x28
		::UnityEngine::UI::Image* Field_5_11; // 0x30
		::UnityEngine::UI::Text* Field_5_10; // 0x38
		::System::Single Field_5_9; // 0x40
		::System::Int32 _fontSize; // 0x44
		::UnityEngine::Vector2 _textSize; // 0x48
		::UnityEngine::Vector2 _textAnchoredPosition; // 0x50
		::UnityEngine::Color _textColor; // 0x58
		::UnityEngine::Color _backgroundColor; // 0x68
		::System::Single _fadeInTime; // 0x78
		::System::Single _fadeOutTime; // 0x7C
		::System::Double Field_5_17; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::UnityEngine::Playables::PlayableDirector* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_INITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_D155D4917B3D2C6A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_METHOD_5_D155D4917B3D2C6A_OFFSET))(this);
		}

		::System::Void Method_5_24A3E783DDC27C78()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_METHOD_5_24A3E783DDC27C78_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		static ::UnityEngine::Canvas* Method_5_3DCCEE5DA06D6079()
		{
			return ((::UnityEngine::Canvas*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_METHOD_5_3DCCEE5DA06D6079_OFFSET))();
		}

		::System::Void Method_5_10AD0834AEF29F17(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_METHOD_5_10AD0834AEF29F17_OFFSET))(this, a1);
		}

		::System::Void Method_5_2B5881023D1BCA42(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEDATAOVERLAY_METHOD_5_2B5881023D1BCA42_OFFSET))(this, a1);
		}
	};
}

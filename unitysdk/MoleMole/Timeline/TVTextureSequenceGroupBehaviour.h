#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7F7D553E576F9EF0.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Timeline/PreloadPlayableBehaviour.h"

class Class_1_927FD65E44A20102;
class Class_1_DC89F79F3CA3BF7A;
namespace MoleMole { class TextureSheetData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x15B673F0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_581AA6833287C7E2_OFFSET UNITYSDK_OFFSET(0x15B67010)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x15B66EE0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_79ED6854413CA2F4_1_OFFSET UNITYSDK_OFFSET(0x15B673C0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_79ED6854413CA2F4_2_OFFSET UNITYSDK_OFFSET(0x15B673D0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_79ED6854413CA2F4_OFFSET UNITYSDK_OFFSET(0x15B67000)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_94C26E8746F69EE8_OFFSET UNITYSDK_OFFSET(0x15B66440)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x15B672B0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0x15B66050)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x15B673E0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x15B667F0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x15B65DD0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15B66C80)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x15B65D50)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15B66490)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B66E40)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x15B66E30)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TVTextureSequenceGroupBehaviour_TypeDefinitionIndex = 40261;

	class TVTextureSequenceGroupBehaviour : public ::UnityEngine::Timeline::PreloadPlayableBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*>** StaticGet_texture2DsDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*>**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSequenceGroupBehaviour_TypeDefinitionIndex)->GetStaticField(0x488D0);
		}
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x18
		::UnityEngine::Timeline::TimelineClip* Clip; // 0x20
		::Enum_3_7F7D553E576F9EF0 TextureAssetType; // 0x28
		::System::Boolean SinglePlay; // 0x2C
		::System::String* textureSheetFolder; // 0x30
		::System::Boolean loop; // 0x38
		::System::Int32 fps; // 0x3C
		::System::Int32 startFrameIndex; // 0x40
		::MoleMole::TextureSheetType TextureSheetType; // 0x44
		::System::String* textureSheetKey; // 0x48
		::Class_1_927FD65E44A20102* textureSheetPlayer; // 0x50
		::Class_1_DC89F79F3CA3BF7A* player; // 0x58
		::System::Collections::Generic::List_1<::Class_1_DC89F79F3CA3BF7A*>* players; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR__CCTOR_OFFSET))();
		}

		::System::Void PrepareData(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_PREPAREDATA_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_70589F89E4D22649()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_70589F89E4D22649_OFFSET))(this);
		}

		::System::Void Method_4_79ED6854413CA2F4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_79ED6854413CA2F4_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* Method_4_581AA6833287C7E2()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_581AA6833287C7E2_OFFSET))(this);
		}

		::System::Void Method_4_CCD88C0D86A5A786()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_CCD88C0D86A5A786_OFFSET))(this);
		}

		::System::Void Method_4_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_AA169839CB93802A_OFFSET))(this);
		}

		::System::Void Method_4_79ED6854413CA2F4_1(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_79ED6854413CA2F4_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_79ED6854413CA2F4_2(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_79ED6854413CA2F4_2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
		}

		::MoleMole::TextureSheetData* Method_4_94C26E8746F69EE8()
		{
			return ((::MoleMole::TextureSheetData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_94C26E8746F69EE8_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEGROUPBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}
	};
}

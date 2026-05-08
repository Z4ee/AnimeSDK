#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7F7D553E576F9EF0.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Timeline/PreloadPlayableBehaviour.h"

class Class_1_927FD65E44A20102;
class Class_1_DC89F79F3CA3BF7A;
namespace MoleMole { class TextureSheetData; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_11D7AB38B006624A_OFFSET UNITYSDK_OFFSET(0x12B29590)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x12B29A80)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_7A4DA50406643EC6_OFFSET UNITYSDK_OFFSET(0x12B28A90)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_830C8E34300646A6_OFFSET UNITYSDK_OFFSET(0x12B29540)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x12B29A90)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12B29840)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_94C26E8746F69EE8_OFFSET UNITYSDK_OFFSET(0x12B29060)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_A2F71555A1437C8A_OFFSET UNITYSDK_OFFSET(0x12B29850)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_B4E487BFAD3802C2_OFFSET UNITYSDK_OFFSET(0x12B28CD0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_ED01C45E2F8DB392_OFFSET UNITYSDK_OFFSET(0x12B29830)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x12B29260)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x12B29320)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x12B288B0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x12B290B0)
#define MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x12B294D0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TVTextureSequenceBehaviour_TypeDefinitionIndex = 41629;

	class TVTextureSequenceBehaviour : public ::UnityEngine::Timeline::PreloadPlayableBehaviour
	{
	public:
		::UnityEngine::Renderer* renderer; // 0x18
		::UnityEngine::Timeline::TimelineClip* Clip; // 0x20
		::Enum_3_7F7D553E576F9EF0 TextureAssetType; // 0x28
		::System::String* textureSheetFolder; // 0x30
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* texturePath; // 0x38
		::System::Boolean loop; // 0x40
		::System::Boolean selectMaterialIndex; // 0x41
		::System::Int32 MaterialIndex; // 0x44
		::System::Int32 fps; // 0x48
		::System::Int32 startFrameIndex; // 0x4C
		::MoleMole::TextureSheetType TextureSheetType; // 0x50
		::System::String* textureSheetKey; // 0x58
		::Class_1_927FD65E44A20102* textureSheetPlayer; // 0x60
		::Class_1_DC89F79F3CA3BF7A* player; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::FrameData a3, ::System::Object* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_ONPROCESSFRAME_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_4_B4E487BFAD3802C2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_B4E487BFAD3802C2_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* Method_4_11D7AB38B006624A()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_11D7AB38B006624A_OFFSET))(this);
		}

		::MoleMole::TextureSheetData* Method_4_94C26E8746F69EE8()
		{
			return ((::MoleMole::TextureSheetData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_94C26E8746F69EE8_OFFSET))(this);
		}

		::System::Void Method_4_ED01C45E2F8DB392(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::FrameData a3, ::System::Object* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_ED01C45E2F8DB392_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::Boolean Method_4_7A4DA50406643EC6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_7A4DA50406643EC6_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_4_A2F71555A1437C8A()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_A2F71555A1437C8A_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_832295EC279E5994_1_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* Method_4_830C8E34300646A6()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESEQUENCEBEHAVIOUR_METHOD_4_830C8E34300646A6_OFFSET))(this);
		}
	};
}

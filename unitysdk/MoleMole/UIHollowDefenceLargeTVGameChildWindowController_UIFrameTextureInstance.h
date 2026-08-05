#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_6C2E46293F2AE988;
class Class_2_1A39E1B51756BF41;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE3BA20)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_FLUSHCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1AE3B6C0)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AE3B4C0)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1AE3B760)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1AE3B890)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1AE3B7A0)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1AE3B900)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE3B340)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowDefenceLargeTVGameChildWindowController_UIFrameTextureInstance_TypeDefinitionIndex = 52579;

	class UIHollowDefenceLargeTVGameChildWindowController_UIFrameTextureInstance : public ::System::Object
	{
	public:
		::UnityEngine::UI::Image* _FlushImage; // 0x10
		::UnityEngine::Material* _material; // 0x18
		::Class_1_6C2E46293F2AE988* TSPlayer; // 0x20
		::Class_2_1A39E1B51756BF41* _image; // 0x28
		::UnityEngine::Color SavedColor; // 0x30
		::Foundation::Coroutine::CoroutineHandle _FlushHandle; // 0x40

		::System::Void _ctor(::Class_2_1A39E1B51756BF41* image, ::System::String* TextureKey)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE__CTOR_OFFSET))(this, image, TextureKey);
		}

		::System::Void Flush(::UnityEngine::AnimationCurve* curve, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_FLUSH_OFFSET))(this, curve, time);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* FlushCoroutine(::UnityEngine::AnimationCurve* curve, ::System::Single time)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_FLUSHCOROUTINE_OFFSET))(this, curve, time);
		}

		::UnityEngine::Color get_Color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_Color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_SET_COLOR_OFFSET))(this, value);
		}

		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_GET_ENABLE_OFFSET))(this);
		}

		::System::Void set_Enable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_SET_ENABLE_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_DISPOSE_OFFSET))(this);
		}
	};
}

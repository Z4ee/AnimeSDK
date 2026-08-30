#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS119_0__ASYNCADDIMAGEWATERMARK_B__0_OFFSET UNITYSDK_OFFSET(0x1C820020)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS119_0__ASYNCADDIMAGEWATERMARK_B__1_OFFSET UNITYSDK_OFFSET(0x1C820080)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS119_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C820010)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___c__DisplayClass119_0_TypeDefinitionIndex = 69429;

	class PhotoGraphUtils___c__DisplayClass119_0 : public ::System::Object
	{
	public:
		::System::Action* finishCallback; // 0x10
		::UnityEngine::RenderTexture* rt; // 0x18
		::UnityEngine::UI::Image* img; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS119_0__CTOR_OFFSET))(this);
		}

		::System::Void _AsyncAddImageWaterMark_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS119_0__ASYNCADDIMAGEWATERMARK_B__0_OFFSET))(this);
		}

		::System::Void _AsyncAddImageWaterMark_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS119_0__ASYNCADDIMAGEWATERMARK_B__1_OFFSET))(this);
		}
	};
}

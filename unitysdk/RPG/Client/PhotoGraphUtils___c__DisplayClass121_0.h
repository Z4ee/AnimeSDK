#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS121_0__ASYNCADDTEXTWATERMARK_B__0_OFFSET UNITYSDK_OFFSET(0x9F6A970)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS121_0__ASYNCADDTEXTWATERMARK_B__1_OFFSET UNITYSDK_OFFSET(0x9F6A9D0)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS121_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F667C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___c__DisplayClass121_0_TypeDefinitionIndex = 56770;

	class PhotoGraphUtils___c__DisplayClass121_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Text* text; // 0x10
		::System::Action* finishCallback; // 0x18
		::UnityEngine::RenderTexture* rt; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS121_0__CTOR_OFFSET))(this);
		}

		::System::Void _AsyncAddTextWaterMark_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS121_0__ASYNCADDTEXTWATERMARK_B__0_OFFSET))(this);
		}

		::System::Void _AsyncAddTextWaterMark_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS121_0__ASYNCADDTEXTWATERMARK_B__1_OFFSET))(this);
		}
	};
}

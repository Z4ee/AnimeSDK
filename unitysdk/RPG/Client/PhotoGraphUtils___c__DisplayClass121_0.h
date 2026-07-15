#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS121_0__ASYNCADDTEXTWATERMARK_B__0_OFFSET UNITYSDK_OFFSET(0x19EB2670)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS121_0__ASYNCADDTEXTWATERMARK_B__1_OFFSET UNITYSDK_OFFSET(0x19EB26D0)
#define RPG_CLIENT_PHOTOGRAPHUTILS___C__DISPLAYCLASS121_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19EAE1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUtils___c__DisplayClass121_0_TypeDefinitionIndex = 66338;

	class PhotoGraphUtils___c__DisplayClass121_0 : public ::System::Object
	{
	public:
		::System::Action* finishCallback; // 0x10
		::UnityEngine::RenderTexture* rt; // 0x18
		::UnityEngine::UI::Text* text; // 0x20

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

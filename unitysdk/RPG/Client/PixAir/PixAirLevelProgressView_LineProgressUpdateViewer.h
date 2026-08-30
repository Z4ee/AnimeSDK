#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UILineRenderer; }

#define RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW_LINEPROGRESSUPDATEVIEWER_FORCETOEND_OFFSET UNITYSDK_OFFSET(0xDB0FAC0)
#define RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW_LINEPROGRESSUPDATEVIEWER_UPDATE_OFFSET UNITYSDK_OFFSET(0xDB0F970)
#define RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW_LINEPROGRESSUPDATEVIEWER__CTOR_OFFSET UNITYSDK_OFFSET(0xDB0F8E0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirLevelProgressView_LineProgressUpdateViewer_TypeDefinitionIndex = 78908;

	class PixAirLevelProgressView_LineProgressUpdateViewer : public ::System::Object
	{
	public:
		::RPG::Client::UILineRenderer* _LineRenderer; // 0x10
		::System::Single _StartProgress; // 0x18
		::System::Single _CurrentTime; // 0x1C
		::System::Single _TargetProgress; // 0x20
		::System::Single _StartDelay; // 0x24
		::System::Single _Duration; // 0x28

		::System::Void _ctor(::RPG::Client::UILineRenderer* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILineRenderer*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW_LINEPROGRESSUPDATEVIEWER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Update(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW_LINEPROGRESSUPDATEVIEWER_UPDATE_OFFSET))(this, a1);
		}

		::System::Void ForceToEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW_LINEPROGRESSUPDATEVIEWER_FORCETOEND_OFFSET))(this);
		}
	};
}

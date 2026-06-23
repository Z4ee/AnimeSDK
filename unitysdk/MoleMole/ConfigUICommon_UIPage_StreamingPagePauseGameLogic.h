#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }

#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_STREAMINGPAGEPAUSEGAMELOGIC__CTOR_OFFSET UNITYSDK_OFFSET(0x192B7180)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_UIPage_StreamingPagePauseGameLogic_TypeDefinitionIndex = 72247;

	class ConfigUICommon_UIPage_StreamingPagePauseGameLogic : public ::System::Object
	{
	public:
		::System::String* CtrlStr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_STREAMINGPAGEPAUSEGAMELOGIC__CTOR_OFFSET))(this);
		}
	};
}

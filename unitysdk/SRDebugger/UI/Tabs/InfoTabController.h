#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger { class InfoEntry; }
namespace SRDebugger::UI::Controls { class InfoBlock; }
namespace SRF::UI { class FlashGraphic; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define SRDEBUGGER_UI_TABS_INFOTABCONTROLLER_ACTIVATEREFRESHEVERYFRAME_OFFSET UNITYSDK_OFFSET(0x1AD10010)
#define SRDEBUGGER_UI_TABS_INFOTABCONTROLLER_CREATEBLOCK_OFFSET UNITYSDK_OFFSET(0x1AD10080)
#define SRDEBUGGER_UI_TABS_INFOTABCONTROLLER_FILLINFOBLOCK_OFFSET UNITYSDK_OFFSET(0x1AD10170)
#define SRDEBUGGER_UI_TABS_INFOTABCONTROLLER_INTERNALREFRESH_OFFSET UNITYSDK_OFFSET(0x1AD0F920)
#define SRDEBUGGER_UI_TABS_INFOTABCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AD0F8B0)
#define SRDEBUGGER_UI_TABS_INFOTABCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1AD0FF50)
#define SRDEBUGGER_UI_TABS_INFOTABCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AD10000)
#define SRDEBUGGER_UI_TABS_INFOTABCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD10F50)
#define SRDEBUGGER_UI_TABS_INFOTABCONTROLLER__GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1AD10DA0)

namespace SRDebugger::UI::Tabs
{
	inline static constexpr unsigned int InfoTabController_TypeDefinitionIndex = 35655;

	class InfoTabController : public ::SRF::SRMonoBehaviourEx
	{
	public:
		// static const ::System::Char Tick; // 0x0
		// static const ::System::Char Cross; // 0x0
		// static const ::System::String* NameColor; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::SRDebugger::UI::Controls::InfoBlock*>* _infoBlocks; // 0x48
		::SRDebugger::UI::Controls::InfoBlock* InfoBlockPrefab; // 0x50
		::UnityEngine::RectTransform* LayoutContainer; // 0x58
		::SRF::UI::FlashGraphic* ToggleButton; // 0x60
		::System::Boolean _updateEveryFrame; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_INFOTABCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_INFOTABCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_INFOTABCONTROLLER_REFRESH_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_INFOTABCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void ActivateRefreshEveryFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_INFOTABCONTROLLER_ACTIVATEREFRESHEVERYFRAME_OFFSET))(this);
		}

		::System::Void InternalRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_INFOTABCONTROLLER_INTERNALREFRESH_OFFSET))(this);
		}

		::System::Void FillInfoBlock(::SRDebugger::UI::Controls::InfoBlock* a1, ::System::Collections::Generic::IList_1<::SRDebugger::InfoEntry*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Controls::InfoBlock*, ::System::Collections::Generic::IList_1<::SRDebugger::InfoEntry*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_INFOTABCONTROLLER_FILLINFOBLOCK_OFFSET))(this, a1, a2);
		}

		::SRDebugger::UI::Controls::InfoBlock* CreateBlock(::System::String* a1)
		{
			return ((::SRDebugger::UI::Controls::InfoBlock*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_INFOTABCONTROLLER_CREATEBLOCK_OFFSET))(this, a1);
		}

		::System::Int32 _GetLength(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_INFOTABCONTROLLER__GETLENGTH_OFFSET))(this, a1);
		}
	};
}

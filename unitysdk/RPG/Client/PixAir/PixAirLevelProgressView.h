#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UILineRenderer; }
namespace RPG::Client::PixAir { class PixAirLevelProgressView_LineProgressUpdateViewer; }
namespace RPG::Client::PixAir { class PixAirStageData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDB0FA20)
#define RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW_TRYSHOWHINT_OFFSET UNITYSDK_OFFSET(0xDB0EFB0)
#define RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xDB0F910)
#define RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xDB0FC40)
#define RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW__GETSORTEDCOMMONSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xDB0F2A0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirLevelProgressView_TypeDefinitionIndex = 78907;

	class PixAirLevelProgressView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UILineRenderer* _LineRenderer; // 0x18
		::Il2CppArray<::System::Single>* _LineAnchors; // 0x20
		::System::Single _UpdateDuration; // 0x28
		::System::Single _StartDelay; // 0x2C
		::RPG::Client::PixAir::PixAirLevelProgressView_LineProgressUpdateViewer* _ProgressUpdateViewer; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW__CTOR_OFFSET))(this);
		}

		::System::Void TryShowHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW_TRYSHOWHINT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW_ONDISABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirStageData*>* _GetSortedCommonStageData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW__GETSORTEDCOMMONSTAGEDATA_OFFSET))(this);
		}
	};
}

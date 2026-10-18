#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1503;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class StaticListView; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD659F00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_METHOD_5_7B3711015280C5D2_OFFSET UNITYSDK_OFFSET(0xD659FA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_METHOD_5_8F9EECC1975E2FC0_OFFSET UNITYSDK_OFFSET(0xD65A060)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD659F40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD65A2E0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftReportCmtControl_TypeDefinitionIndex = 80022;

	class MechCraftReportCmtControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_0_16E4307DCC419505_1503* LFGMLJCCPCH; // 0x18
		::RPG::Client::StaticListView* _ReplyList; // 0x20
		::UnityEngine::UI::Image* _HeadIcon; // 0x28
		::RPG::Client::LocalizedText* _Name; // 0x30
		::RPG::Client::LocalizedText* _CmtContent; // 0x38
		::UnityEngine::RectTransform* _PosterRoot; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1503* get_Content()
		{
			return ((::Class_0_16E4307DCC419505_1503*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Class_0_16E4307DCC419505_1503* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1503*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void Method_5_7B3711015280C5D2(::Class_0_16E4307DCC419505_1503* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1503*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_METHOD_5_7B3711015280C5D2_OFFSET))(this, a1);
		}

		::System::Void Method_5_8F9EECC1975E2FC0(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCMTCONTROL_METHOD_5_8F9EECC1975E2FC0_OFFSET))(this, a1);
		}
	};
}

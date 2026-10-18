#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1503;
class Class_0_16E4307DCC419505_1504;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class StaticListView; }
namespace Sofa { class ShortCutHintControl; }
namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD65A550)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_GET_SHORTCUTHINT_OFFSET UNITYSDK_OFFSET(0xD65AAF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_METHOD_5_49107455719F178B_OFFSET UNITYSDK_OFFSET(0xD65ADC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_METHOD_5_7D599D6C5F28E144_OFFSET UNITYSDK_OFFSET(0xD65A610)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_METHOD_5_8F9EECC1975E2FC0_OFFSET UNITYSDK_OFFSET(0xD65AB40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_METHOD_5_C2245F7B8D6891C4_OFFSET UNITYSDK_OFFSET(0xD65A780)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD65A590)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD65AE20)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftReportControl_TypeDefinitionIndex = 80024;

	class MechCraftReportControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_0_16E4307DCC419505_1504* CLNCDHNFJOC; // 0x18
		::RPG::Client::StaticListView* _CmtList; // 0x20
		::UnityEngine::UI::Image* _Image; // 0x28
		::RPG::Client::LocalizedText* _Content; // 0x30
		::RPG::Client::LocalizedText* _LikeCount; // 0x38
		::RPG::Client::LocalizedText* _CmtCount; // 0x40
		::RPG::Client::AnimatorButton* _BtnLike; // 0x48
		::RPG::Client::AnimatorButton* _BtnClose; // 0x50
		::Sofa::ShortCutHintControl* _ShortCutHintControl; // 0x58
		::System::IDisposable* GLJKCIFADHM; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1504* get_Content()
		{
			return ((::Class_0_16E4307DCC419505_1504*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Class_0_16E4307DCC419505_1504* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1504*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::Sofa::ShortCutHintControl* get_ShortCutHint()
		{
			return ((::Sofa::ShortCutHintControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_GET_SHORTCUTHINT_OFFSET))(this);
		}

		::System::Void Method_5_C2245F7B8D6891C4(::Class_0_16E4307DCC419505_1504* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1504*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_METHOD_5_C2245F7B8D6891C4_OFFSET))(this, a1);
		}

		::System::Void Method_5_7D599D6C5F28E144(::Class_0_16E4307DCC419505_1504* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1504*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_METHOD_5_7D599D6C5F28E144_OFFSET))(this, a1);
		}

		::System::Void Method_5_8F9EECC1975E2FC0(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_METHOD_5_8F9EECC1975E2FC0_OFFSET))(this, a1);
		}

		::System::Void Method_5_49107455719F178B(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTCONTROL_METHOD_5_49107455719F178B_OFFSET))(this, a1);
		}
	};
}

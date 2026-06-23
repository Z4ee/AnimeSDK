#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFashionStorePreviewPanelWidgetController_NotePlayHelper.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_139;
class Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_20;
class Class_2_720FD421F092FF93_Class_2_97C8D60D51E8546D_1;
namespace MoleMole { class UIFashionStorePreviewPanelWidgetController_MusicRowData; }
template <typename T> class Class_0_16E4307DCC419505_153;

#define MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER_INIT_OFFSET UNITYSDK_OFFSET(0x19DAEE30)
#define MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER_PLAYSOUND_OFFSET UNITYSDK_OFFSET(0x19DAEEE0)
#define MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAEE20)
#define MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER___BASE_PLAYSOUND_OFFSET UNITYSDK_OFFSET(0x19DAF630)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreEditPanelWidgetController_NotePlayHelper_TypeDefinitionIndex = 51955;

	class UIFashionStoreEditPanelWidgetController_NotePlayHelper : public ::MoleMole::UIFashionStorePreviewPanelWidgetController_NotePlayHelper
	{
	public:
		::Class_2_720FD421F092FF93_Class_2_97C8D60D51E8546D_1* _trackData; // 0x50
		::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData* _musicRowData; // 0x58

		::System::Void _ctor(::Class_0_16E4307DCC419505_139* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void Init(::Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_20* fashionStoreData, ::Class_2_720FD421F092FF93_Class_2_97C8D60D51E8546D_1* fashionStoreTrackData, ::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData* musicRowData, ::Class_0_16E4307DCC419505_153<::System::Boolean>* isShow)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_20*, ::Class_2_720FD421F092FF93_Class_2_97C8D60D51E8546D_1*, ::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*, ::Class_0_16E4307DCC419505_153<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER_INIT_OFFSET))(this, fashionStoreData, fashionStoreTrackData, musicRowData, isShow);
		}

		::System::Void PlaySound(::System::ValueTuple_2<::System::Int32, ::System::Int32> startNoteIndex, ::System::ValueTuple_2<::System::Int32, ::System::Int32> endNoteIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER_PLAYSOUND_OFFSET))(this, startNoteIndex, endNoteIndex);
		}

		::System::Void __base_PlaySound(::System::ValueTuple_2<::System::Int32, ::System::Int32> P0, ::System::ValueTuple_2<::System::Int32, ::System::Int32> P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER___BASE_PLAYSOUND_OFFSET))(this, P0, P1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_139;
class Class_1_48D56DACBE4271BC;
class Class_1_C3735B7FBAD6404D;
class Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_20;
class Class_2_720FD421F092FF93_Class_2_797560DDC7933C36;
namespace MoleMole { class UIFashionStorePreviewPanelWidgetController_MusicRowData; }
template <typename T> class Class_0_16E4307DCC419505_153;
template <typename T> class Class_0_16E4307DCC419505_163;
template <typename T> class Class_0_16E4307DCC419505_165;
template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_BEATTONOTEINDEX_OFFSET UNITYSDK_OFFSET(0x187DD180)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_INITINNER_OFFSET UNITYSDK_OFFSET(0x187DCCA0)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_INIT_OFFSET UNITYSDK_OFFSET(0x187DCC00)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_PLAYSOUND_1_OFFSET UNITYSDK_OFFSET(0x187DDC80)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_PLAYSOUND_OFFSET UNITYSDK_OFFSET(0x187DD380)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0x187DD140)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x187DCA40)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER__INITINNER_B__10_0_OFFSET UNITYSDK_OFFSET(0x187DDE10)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER__INITINNER_B__10_1_OFFSET UNITYSDK_OFFSET(0x187DDF00)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStorePreviewPanelWidgetController_NotePlayHelper_TypeDefinitionIndex = 64681;

	class UIFashionStorePreviewPanelWidgetController_NotePlayHelper : public ::System::Object
	{
	public:
		::Class_1_C3735B7FBAD6404D* _propertyAllocateHelper; // 0x10
		::Class_0_16E4307DCC419505_165<::System::Single>* _lastCurTimeByBeat; // 0x18
		::Class_0_16E4307DCC419505_153<::System::Boolean>* _isShow; // 0x20
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x28
		::Class_0_16E4307DCC41950C_12<::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*>* _musicRowDatas; // 0x30
		::Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_20* _fashionStoreData; // 0x38
		::Class_2_720FD421F092FF93_Class_2_797560DDC7933C36* _fashionStoreSheetData; // 0x40
		::Class_0_16E4307DCC419505_163<::System::Single>* _timePerBeat; // 0x48

		::System::Void _ctor(::Class_0_16E4307DCC419505_139* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void Init(::Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_20* fashionStoreData, ::Class_2_720FD421F092FF93_Class_2_797560DDC7933C36* fashionStoreSheetData, ::Class_0_16E4307DCC41950C_12<::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*>* musicRowDatas, ::Class_0_16E4307DCC419505_153<::System::Boolean>* isShow)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_20*, ::Class_2_720FD421F092FF93_Class_2_797560DDC7933C36*, ::Class_0_16E4307DCC41950C_12<::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*>*, ::Class_0_16E4307DCC419505_153<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_INIT_OFFSET))(this, fashionStoreData, fashionStoreSheetData, musicRowDatas, isShow);
		}

		::System::Void InitInner(::Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_20* fashionStoreData, ::Class_2_720FD421F092FF93_Class_2_797560DDC7933C36* fashionStoreSheetData, ::Class_0_16E4307DCC41950C_12<::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*>* musicRowDatas, ::Class_0_16E4307DCC419505_153<::System::Boolean>* isShow)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_20*, ::Class_2_720FD421F092FF93_Class_2_797560DDC7933C36*, ::Class_0_16E4307DCC41950C_12<::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*>*, ::Class_0_16E4307DCC419505_153<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_INITINNER_OFFSET))(this, fashionStoreData, fashionStoreSheetData, musicRowDatas, isShow);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_UPDATE_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> BeatToNoteIndex(::System::Single timeByBeat)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_BEATTONOTEINDEX_OFFSET))(this, timeByBeat);
		}

		::System::Void PlaySound(::System::ValueTuple_2<::System::Int32, ::System::Int32> startNoteIndex, ::System::ValueTuple_2<::System::Int32, ::System::Int32> endNoteIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_PLAYSOUND_OFFSET))(this, startNoteIndex, endNoteIndex);
		}

		static ::System::Void PlaySound_1(::System::Int32 keyID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_PLAYSOUND_1_OFFSET))(keyID);
		}

		::System::Single _InitInner_b__10_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER__INITINNER_B__10_0_OFFSET))(this);
		}

		::System::Void _InitInner_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER__INITINNER_B__10_1_OFFSET))(this);
		}
	};
}

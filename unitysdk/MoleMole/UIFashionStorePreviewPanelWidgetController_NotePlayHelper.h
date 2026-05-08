#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_103;
class Class_1_1B85226610A5D17C;
class Class_1_48D56DACBE4271BC;
class Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_5;
class Class_2_720FD421F092FF93_Class_2_797560DDC7933C36;
namespace MoleMole { class UIFashionStorePreviewPanelWidgetController_MusicRowData; }
template <typename T> class Class_0_16E4307DCC419505_97;
template <typename T> class Class_0_16E4307DCC41950C_12;
template <typename T> class Class_0_16E4307DCC41950C_13;
template <typename T> class Class_0_16E4307DCC41950C_14;

#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_BEATTONOTEINDEX_OFFSET UNITYSDK_OFFSET(0x1678E1E0)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_INITINNER_OFFSET UNITYSDK_OFFSET(0x1678DD10)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_INIT_OFFSET UNITYSDK_OFFSET(0x1678DC70)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_PLAYSOUND_1_OFFSET UNITYSDK_OFFSET(0x1678ECE0)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_PLAYSOUND_OFFSET UNITYSDK_OFFSET(0x1678E3E0)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1678E1A0)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1678DBE0)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER__INITINNER_B__10_0_OFFSET UNITYSDK_OFFSET(0x1678EE70)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER__INITINNER_B__10_1_OFFSET UNITYSDK_OFFSET(0x1678EF60)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStorePreviewPanelWidgetController_NotePlayHelper_TypeDefinitionIndex = 64573;

	class UIFashionStorePreviewPanelWidgetController_NotePlayHelper : public ::System::Object
	{
	public:
		::Class_1_1B85226610A5D17C* _propertyAllocateHelper; // 0x10
		::Class_0_16E4307DCC41950C_13<::System::Single>* _lastCurTimeByBeat; // 0x18
		::Class_2_720FD421F092FF93_Class_2_797560DDC7933C36* _fashionStoreSheetData; // 0x20
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x28
		::Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_5* _fashionStoreData; // 0x30
		::Class_0_16E4307DCC419505_97<::System::Single>* _timePerBeat; // 0x38
		::Class_0_16E4307DCC41950C_12<::System::Boolean>* _isShow; // 0x40
		::Class_0_16E4307DCC41950C_14<::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*>* _musicRowDatas; // 0x48

		::System::Void _ctor(::Class_0_16E4307DCC419505_103* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void Init(::Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_5* fashionStoreData, ::Class_2_720FD421F092FF93_Class_2_797560DDC7933C36* fashionStoreSheetData, ::Class_0_16E4307DCC41950C_14<::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*>* musicRowDatas, ::Class_0_16E4307DCC41950C_12<::System::Boolean>* isShow)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_5*, ::Class_2_720FD421F092FF93_Class_2_797560DDC7933C36*, ::Class_0_16E4307DCC41950C_14<::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*>*, ::Class_0_16E4307DCC41950C_12<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_INIT_OFFSET))(this, fashionStoreData, fashionStoreSheetData, musicRowDatas, isShow);
		}

		::System::Void InitInner(::Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_5* fashionStoreData, ::Class_2_720FD421F092FF93_Class_2_797560DDC7933C36* fashionStoreSheetData, ::Class_0_16E4307DCC41950C_14<::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*>* musicRowDatas, ::Class_0_16E4307DCC41950C_12<::System::Boolean>* isShow)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_720FD421F092FF93_Class_0_16E7307DCC43CB2C_5*, ::Class_2_720FD421F092FF93_Class_2_797560DDC7933C36*, ::Class_0_16E4307DCC41950C_14<::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*>*, ::Class_0_16E4307DCC41950C_12<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_NOTEPLAYHELPER_INITINNER_OFFSET))(this, fashionStoreData, fashionStoreSheetData, musicRowDatas, isShow);
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

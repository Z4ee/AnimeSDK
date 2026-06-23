#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915;
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18A4B450)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4A080)

namespace MoleMole
{
	inline static constexpr unsigned int UIAllroundGeneralTutorialDialogContenxt_TypeDefinitionIndex = 74362;

	class UIAllroundGeneralTutorialDialogContenxt : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915* popupGroupData; // 0x28
		::System::String* OverrideTitleText; // 0x30
		::System::String* GroupButtonText; // 0x38
		::System::Action* OnGroupButtonClick; // 0x40
		::System::String* OverrideSubTitleText; // 0x48
		::System::Action* OnTutorialBtnClickCallback; // 0x50
		::System::Boolean CanShowSkillTipsBtn; // 0x58
		::System::Boolean CanShowTutorialBtn; // 0x59
		::System::Boolean CanCloseOnlyReachEnd; // 0x5A
		::System::Boolean isTrain; // 0x5B
		::System::Boolean CanShowBottomTips; // 0x5C
		::System::Int32 trainQuestID; // 0x60

		::System::Void _ctor(::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915* popupGroupData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9C7B017C7858A67C_Class_1_9E89B2D44593C915*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_OFFSET))(this, popupGroupData);
		}

		::System::Void _ctor_1(::System::Int32 trainQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_1_OFFSET))(this, trainQuestID);
		}
	};
}

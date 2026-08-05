#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915;
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A625460)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6245A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAllroundGeneralTutorialDialogContenxt_TypeDefinitionIndex = 68484;

	class UIAllroundGeneralTutorialDialogContenxt : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* OverrideTitleText; // 0x28
		::System::Action* OnGroupButtonClick; // 0x30
		::System::String* OverrideSubTitleText; // 0x38
		::System::String* GroupButtonText; // 0x40
		::System::Action* OnTutorialBtnClickCallback; // 0x48
		::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915* popupGroupData; // 0x50
		::System::Int32 trainQuestID; // 0x58
		::System::Boolean CanShowTutorialBtn; // 0x5C
		::System::Boolean isTrain; // 0x5D
		::System::Boolean CanShowSkillTipsBtn; // 0x5E
		::System::Boolean CanShowBottomTips; // 0x5F
		::System::Boolean CanCloseOnlyReachEnd; // 0x60

		::System::Void _ctor(::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915* popupGroupData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_OFFSET))(this, popupGroupData);
		}

		::System::Void _ctor_1(::System::Int32 trainQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_1_OFFSET))(this, trainQuestID);
		}
	};
}

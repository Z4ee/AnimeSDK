#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915;
namespace System { class Action; }

#define MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16453C90)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_OFFSET UNITYSDK_OFFSET(0x164530D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAllroundGeneralTutorialDialogContenxt_TypeDefinitionIndex = 42594;

	class UIAllroundGeneralTutorialDialogContenxt : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915* popupGroupData; // 0x28
		::System::Action* OnTutorialBtnClickCallback; // 0x30
		::System::Int32 trainQuestID; // 0x38
		::System::Boolean CanShowBottomTips; // 0x3C
		::System::Boolean CanShowTutorialBtn; // 0x3D
		::System::Boolean CanShowSkillTipsBtn; // 0x3E
		::System::Boolean isTrain; // 0x3F
		::System::Boolean CanCloseOnlyReachEnd; // 0x40

		::System::Void _ctor(::Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915* popupGroupData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B36E7CC770A900CC_Class_1_9E89B2D44593C915*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_OFFSET))(this, popupGroupData);
		}

		::System::Void _ctor_1(::System::Int32 trainQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALDIALOGCONTENXT__CTOR_1_OFFSET))(this, trainQuestID);
		}
	};
}

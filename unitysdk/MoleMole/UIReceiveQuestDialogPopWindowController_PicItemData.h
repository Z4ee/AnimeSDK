#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EQuestType.h"
#include "unitysdk/System/Object.h"

class Class_2_0A55B5A82A61DAFA_2;
class Class_2_208CC9941471731A_989;

#define MOLEMOLE_UIRECEIVEQUESTDIALOGPOPWINDOWCONTROLLER_PICITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x147EE600)

namespace MoleMole
{
	inline static constexpr unsigned int UIReceiveQuestDialogPopWindowController_PicItemData_TypeDefinitionIndex = 41840;

	class UIReceiveQuestDialogPopWindowController_PicItemData : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_989* m_specialQuestConfig; // 0x10
		::Class_2_0A55B5A82A61DAFA_2* m_hollowQuestTemplateExt; // 0x18
		::System::Int32 m_index; // 0x20
		::Share::EQuestType m_questType; // 0x24

		::System::Void _ctor(::Share::EQuestType questType, ::Class_2_0A55B5A82A61DAFA_2* hollowQuestTemplateExt, ::Class_2_208CC9941471731A_989* specialQuestConfig, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Share::EQuestType, ::Class_2_0A55B5A82A61DAFA_2*, ::Class_2_208CC9941471731A_989*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECEIVEQUESTDIALOGPOPWINDOWCONTROLLER_PICITEMDATA__CTOR_OFFSET))(this, questType, hollowQuestTemplateExt, specialQuestConfig, index);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class BranchItem; }

#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS58_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16D570C0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS58_2__PROCESSCONDITION_B__2_OFFSET UNITYSDK_OFFSET(0x16D570D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController___c__DisplayClass58_2_TypeDefinitionIndex = 72971;

	class UIBaseChatPlayController___c__DisplayClass58_2 : public ::System::Object
	{
	public:
		::System::Int32 value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS58_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _ProcessCondition_b__2(::MoleMole::GalGame::BranchItem* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::BranchItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS58_2__PROCESSCONDITION_B__2_OFFSET))(this, item);
		}
	};
}

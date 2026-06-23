#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class BranchItem; }

#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x176082A0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS58_0__PROCESSCONDITION_B__0_OFFSET UNITYSDK_OFFSET(0x176082B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController___c__DisplayClass58_0_TypeDefinitionIndex = 42198;

	class UIBaseChatPlayController___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::System::Int32 gender; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ProcessCondition_b__0(::MoleMole::GalGame::BranchItem* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::BranchItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS58_0__PROCESSCONDITION_B__0_OFFSET))(this, item);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ShoppingMallBaseContextBase.h"

class Class_1_E43D938AEBE01021;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_SHOPPINGMALLLIMITEDCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB5FA0)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallLimitedCardContext_TypeDefinitionIndex = 52850;

	class ShoppingMallLimitedCardContext : public ::MoleMole::ShoppingMallBaseContextBase
	{
	public:
		::MoleMole::MonoGamepadModule* singleBuyModule; // 0x58
		::MoleMole::UIGeneralButtonController* Down_ReceiveBtn; // 0x60
		::Class_2_B4378B46E0020E85* Down_DetailBtn; // 0x68
		::UnityEngine::UI::Extension::UITimeWidget* Down_Timer; // 0x70
		::Class_2_B4378B46E0020E85* Down_SingleBtn; // 0x78
		::Class_1_E43D938AEBE01021* tabData; // 0x80

		::System::Void _ctor(::MoleMole::MonoGamepadModule* singleBuyButton, ::Class_1_E43D938AEBE01021* tabData, ::MoleMole::MonoGamepadRegion* region, ::Class_2_B4378B46E0020E85* Down_SingleBtn, ::UnityEngine::UI::Extension::UITimeWidget* Down_Timer, ::Class_2_B4378B46E0020E85* Down_DetailBtn, ::MoleMole::UIGeneralButtonController* Down_ReceiveBtn, ::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::Class_1_E43D938AEBE01021*, ::MoleMole::MonoGamepadRegion*, ::Class_2_B4378B46E0020E85*, ::UnityEngine::UI::Extension::UITimeWidget*, ::Class_2_B4378B46E0020E85*, ::MoleMole::UIGeneralButtonController*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLLIMITEDCARDCONTEXT__CTOR_OFFSET))(this, singleBuyButton, tabData, region, Down_SingleBtn, Down_Timer, Down_DetailBtn, Down_ReceiveBtn, onClick);
		}
	};
}

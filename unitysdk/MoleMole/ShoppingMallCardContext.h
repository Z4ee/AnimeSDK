#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ShoppingMallBaseContextBase.h"

class Class_0_16E4307DCC419505_179;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadRegion; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_SHOPPINGMALLCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13860400)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallCardContext_TypeDefinitionIndex = 84714;

	class ShoppingMallCardContext : public ::MoleMole::ShoppingMallBaseContextBase
	{
	public:
		::UnityEngine::UI::Extension::UILocalizationText* priceText; // 0x58
		::Class_2_B4378B46E0020E85* infoConsoleBtn; // 0x60
		::Class_2_B4378B46E0020E85* infoBtn; // 0x68
		::UnityEngine::UI::Extension::UITimeWidget* timer; // 0x70
		::UnityEngine::UI::Extension::UILocalizationText* buyText; // 0x78
		::Class_2_B4378B46E0020E85* buyBtn; // 0x80

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_179*>* goods, ::MoleMole::MonoGamepadRegion* region, ::System::Action_1<::System::Int32>* onClick, ::UnityEngine::UI::Extension::UITimeWidget* timer, ::Class_2_B4378B46E0020E85* buyBtn, ::Class_2_B4378B46E0020E85* infoBtn, ::Class_2_B4378B46E0020E85* infoConsoleBtn, ::UnityEngine::UI::Extension::UILocalizationText* priceText, ::UnityEngine::UI::Extension::UILocalizationText* buyText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_179*>*, ::MoleMole::MonoGamepadRegion*, ::System::Action_1<::System::Int32>*, ::UnityEngine::UI::Extension::UITimeWidget*, ::Class_2_B4378B46E0020E85*, ::Class_2_B4378B46E0020E85*, ::Class_2_B4378B46E0020E85*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLCARDCONTEXT__CTOR_OFFSET))(this, goods, region, onClick, timer, buyBtn, infoBtn, infoConsoleBtn, priceText, buyText);
		}
	};
}

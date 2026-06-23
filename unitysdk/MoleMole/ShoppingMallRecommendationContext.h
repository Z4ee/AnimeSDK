#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ShoppingMallBaseContextBase.h"

class Class_1_E43D938AEBE01021;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadRegion; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_SHOPPINGMALLRECOMMENDATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18398A20)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallRecommendationContext_TypeDefinitionIndex = 76699;

	class ShoppingMallRecommendationContext : public ::MoleMole::ShoppingMallBaseContextBase
	{
	public:
		::Class_1_E43D938AEBE01021* tabData; // 0x58
		::Class_2_B4378B46E0020E85* Down_PreviewBtn; // 0x60
		::Class_2_B4378B46E0020E85* Down_BuyBtn; // 0x68
		::MoleMole::MonoGamepadModule* singleBuyModule; // 0x70

		::System::Void _ctor(::MoleMole::MonoGamepadModule* singleBuyButton, ::Class_1_E43D938AEBE01021* tabData, ::MoleMole::MonoGamepadRegion* region, ::Class_2_B4378B46E0020E85* Down_BuyBtn, ::Class_2_B4378B46E0020E85* Down_PreviewBtn, ::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::Class_1_E43D938AEBE01021*, ::MoleMole::MonoGamepadRegion*, ::Class_2_B4378B46E0020E85*, ::Class_2_B4378B46E0020E85*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLRECOMMENDATIONCONTEXT__CTOR_OFFSET))(this, singleBuyButton, tabData, region, Down_BuyBtn, Down_PreviewBtn, onClick);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ShoppingMallBaseContextBase.h"

class Class_0_16E4307DCC419505_201;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadRegion; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SHOPPINGMALLGIFTPACKCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18715090)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallGiftPackContext_TypeDefinitionIndex = 46510;

	class ShoppingMallGiftPackContext : public ::MoleMole::ShoppingMallBaseContextBase
	{
	public:
		::Class_2_B4378B46E0020E85* Down_DetailBtn; // 0x58

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>* goods, ::MoleMole::MonoGamepadRegion* region, ::Class_2_B4378B46E0020E85* Down_DetailBtn, ::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>*, ::MoleMole::MonoGamepadRegion*, ::Class_2_B4378B46E0020E85*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLGIFTPACKCONTEXT__CTOR_OFFSET))(this, goods, region, Down_DetailBtn, onClick);
		}
	};
}

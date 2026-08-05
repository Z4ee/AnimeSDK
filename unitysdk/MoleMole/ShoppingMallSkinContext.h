#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ShoppingMallBaseContextBase.h"

class Class_0_16E4307DCC419505_179;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadRegion; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SHOPPINGMALLSKINCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x138604D0)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallSkinContext_TypeDefinitionIndex = 53136;

	class ShoppingMallSkinContext : public ::MoleMole::ShoppingMallBaseContextBase
	{
	public:
		::Class_2_B4378B46E0020E85* Down_DetailBtn; // 0x58

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_179*>* goods, ::MoleMole::MonoGamepadRegion* region, ::Class_2_B4378B46E0020E85* Down_DetailBtn, ::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_179*>*, ::MoleMole::MonoGamepadRegion*, ::Class_2_B4378B46E0020E85*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLSKINCONTEXT__CTOR_OFFSET))(this, goods, region, Down_DetailBtn, onClick);
		}
	};
}

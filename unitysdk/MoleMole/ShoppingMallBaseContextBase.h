#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_179;
class Class_1_402812A65CC3A690;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadRegion; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_ADDAUTOMODULE_OFFSET UNITYSDK_OFFSET(0x190B1970)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_ADDMODULE_OFFSET UNITYSDK_OFFSET(0x190B18E0)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_AUTOGAMEPADREGION_OFFSET UNITYSDK_OFFSET(0x190B17F0)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_GOODS_OFFSET UNITYSDK_OFFSET(0x190B1790)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_JUMPITEMDATAPAIR_OFFSET UNITYSDK_OFFSET(0x190B17D0)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_MONOGAMEPADREGION_OFFSET UNITYSDK_OFFSET(0x190B17B0)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_ONCLICK_OFFSET UNITYSDK_OFFSET(0x190B1770)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_ONCLICKGOODS_OFFSET UNITYSDK_OFFSET(0x190B1880)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_AUTOGAMEPADREGION_OFFSET UNITYSDK_OFFSET(0x190B1800)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_GOODS_OFFSET UNITYSDK_OFFSET(0x190B17A0)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_JUMPITEMDATAPAIR_OFFSET UNITYSDK_OFFSET(0x190B17E0)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_MONOGAMEPADREGION_OFFSET UNITYSDK_OFFSET(0x190B17C0)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_ONCLICK_OFFSET UNITYSDK_OFFSET(0x190B1780)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x190B1810)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallBaseContextBase_TypeDefinitionIndex = 78443;

	class ShoppingMallBaseContextBase : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::MonoGamepadRegion* _MonoGamepadRegion_k__BackingField; // 0x28
		::MoleMole::MonoGamepadRegion* _AutoGamepadRegion_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_179*>* _Goods_k__BackingField; // 0x38
		::System::Action_1<::System::Int32>* _OnClick_k__BackingField; // 0x40
		::Class_1_402812A65CC3A690* _JumpItemDataPair_k__BackingField; // 0x48
		::System::Boolean isAutoFocus; // 0x50
		::System::Boolean IsResetSelect; // 0x51

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_179*>* goods, ::MoleMole::MonoGamepadRegion* region, ::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_179*>*, ::MoleMole::MonoGamepadRegion*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE__CTOR_OFFSET))(this, goods, region, onClick);
		}

		::System::Action_1<::System::Int32>* get_OnClick()
		{
			return ((::System::Action_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_ONCLICK_OFFSET))(this);
		}

		::System::Void set_OnClick(::System::Action_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_ONCLICK_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_179*>* get_Goods()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_179*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_GOODS_OFFSET))(this);
		}

		::System::Void set_Goods(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_179*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_179*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_GOODS_OFFSET))(this, value);
		}

		::MoleMole::MonoGamepadRegion* get_MonoGamepadRegion()
		{
			return ((::MoleMole::MonoGamepadRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_MONOGAMEPADREGION_OFFSET))(this);
		}

		::System::Void set_MonoGamepadRegion(::MoleMole::MonoGamepadRegion* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadRegion*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_MONOGAMEPADREGION_OFFSET))(this, value);
		}

		::Class_1_402812A65CC3A690* get_JumpItemDataPair()
		{
			return ((::Class_1_402812A65CC3A690*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_JUMPITEMDATAPAIR_OFFSET))(this);
		}

		::System::Void set_JumpItemDataPair(::Class_1_402812A65CC3A690* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_402812A65CC3A690*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_JUMPITEMDATAPAIR_OFFSET))(this, value);
		}

		::MoleMole::MonoGamepadRegion* get_AutoGamepadRegion()
		{
			return ((::MoleMole::MonoGamepadRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_AUTOGAMEPADREGION_OFFSET))(this);
		}

		::System::Void set_AutoGamepadRegion(::MoleMole::MonoGamepadRegion* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadRegion*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_AUTOGAMEPADREGION_OFFSET))(this, value);
		}

		::System::Void OnClickGoods(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_ONCLICKGOODS_OFFSET))(this, index);
		}

		::System::Void AddModule(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_ADDMODULE_OFFSET))(this, gamepadModule);
		}

		::System::Void AddAutoModule(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_ADDAUTOMODULE_OFFSET))(this, gamepadModule);
		}
	};
}

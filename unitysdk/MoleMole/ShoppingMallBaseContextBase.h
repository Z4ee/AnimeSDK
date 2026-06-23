#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_201;
class Class_1_402812A65CC3A690;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadRegion; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_ADDAUTOMODULE_OFFSET UNITYSDK_OFFSET(0x17DEA9A0)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_ADDMODULE_OFFSET UNITYSDK_OFFSET(0x17DEA910)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_AUTOGAMEPADREGION_OFFSET UNITYSDK_OFFSET(0x17DEA820)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_GOODS_OFFSET UNITYSDK_OFFSET(0x17DEA7C0)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_JUMPITEMDATAPAIR_OFFSET UNITYSDK_OFFSET(0x17DEA800)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_MONOGAMEPADREGION_OFFSET UNITYSDK_OFFSET(0x17DEA7E0)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_ONCLICK_OFFSET UNITYSDK_OFFSET(0x17DEA7A0)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_ONCLICKGOODS_OFFSET UNITYSDK_OFFSET(0x17DEA8B0)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_AUTOGAMEPADREGION_OFFSET UNITYSDK_OFFSET(0x17DEA830)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_GOODS_OFFSET UNITYSDK_OFFSET(0x17DEA7D0)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_JUMPITEMDATAPAIR_OFFSET UNITYSDK_OFFSET(0x17DEA810)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_MONOGAMEPADREGION_OFFSET UNITYSDK_OFFSET(0x17DEA7F0)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_ONCLICK_OFFSET UNITYSDK_OFFSET(0x17DEA7B0)
#define MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17DEA840)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallBaseContextBase_TypeDefinitionIndex = 66402;

	class ShoppingMallBaseContextBase : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* _OnClick_k__BackingField; // 0x28
		::MoleMole::MonoGamepadRegion* _AutoGamepadRegion_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>* _Goods_k__BackingField; // 0x38
		::MoleMole::MonoGamepadRegion* _MonoGamepadRegion_k__BackingField; // 0x40
		::Class_1_402812A65CC3A690* _JumpItemDataPair_k__BackingField; // 0x48
		::System::Boolean IsResetSelect; // 0x50
		::System::Boolean isAutoFocus; // 0x51

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>* goods, ::MoleMole::MonoGamepadRegion* region, ::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>*, ::MoleMole::MonoGamepadRegion*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE__CTOR_OFFSET))(this, goods, region, onClick);
		}

		::System::Action_1<::System::Int32>* get_OnClick()
		{
			return ((::System::Action_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_ONCLICK_OFFSET))(this);
		}

		::System::Void set_OnClick(::System::Action_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_ONCLICK_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>* get_Goods()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_GET_GOODS_OFFSET))(this);
		}

		::System::Void set_Goods(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLBASECONTEXTBASE_SET_GOODS_OFFSET))(this, value);
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

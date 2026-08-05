#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_B890BA8430A32496_Class_1_D8C08C94211C11A1;

#define MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x196C42F0)
#define MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x196C42D0)
#define MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT_PARSEJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x196C4350)
#define MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x196C42E0)
#define MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x196C4400)
#define MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x196C4450)

namespace MoleMole
{
	inline static constexpr unsigned int UIAMERPurchaseDialogContext_TypeDefinitionIndex = 67485;

	class UIAMERPurchaseDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 _ItemID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ItemID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT_SET_ITEMID_OFFSET))(this, value);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		static ::System::Boolean ParseJumpParas(::Class_1_B890BA8430A32496_Class_1_D8C08C94211C11A1* paras, ::System::Int32& itemID)
		{
			return ((::System::Boolean(*)(::Class_1_B890BA8430A32496_Class_1_D8C08C94211C11A1*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT_PARSEJUMPPARAS_OFFSET))(paras, itemID);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAMERPURCHASEDIALOGCONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}

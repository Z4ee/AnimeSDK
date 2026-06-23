#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_EADE0AA2443F1473;

#define MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT_GET_LOGINFUNDINFOSHOPDATA_OFFSET UNITYSDK_OFFSET(0x1642CEE0)
#define MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT_GET_REWARDINDEX_OFFSET UNITYSDK_OFFSET(0x1642CF00)
#define MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT_SET_LOGINFUNDINFOSHOPDATA_OFFSET UNITYSDK_OFFSET(0x1642CEF0)
#define MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT_SET_REWARDINDEX_OFFSET UNITYSDK_OFFSET(0x1642CF10)
#define MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1642CF20)

namespace MoleMole
{
	inline static constexpr unsigned int ShoppingMallLimitedCardRowContext_TypeDefinitionIndex = 69781;

	class ShoppingMallLimitedCardRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_EADE0AA2443F1473* _LoginFundInfoShopData_k__BackingField; // 0x28
		::System::Int32 _RewardIndex_k__BackingField; // 0x30

		::System::Void _ctor(::Class_1_EADE0AA2443F1473* loginFundInfoShopData, ::System::Int32 rewardIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EADE0AA2443F1473*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT__CTOR_OFFSET))(this, loginFundInfoShopData, rewardIndex);
		}

		::Class_1_EADE0AA2443F1473* get_LoginFundInfoShopData()
		{
			return ((::Class_1_EADE0AA2443F1473*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT_GET_LOGINFUNDINFOSHOPDATA_OFFSET))(this);
		}

		::System::Void set_LoginFundInfoShopData(::Class_1_EADE0AA2443F1473* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EADE0AA2443F1473*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT_SET_LOGINFUNDINFOSHOPDATA_OFFSET))(this, value);
		}

		::System::Int32 get_RewardIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT_GET_REWARDINDEX_OFFSET))(this);
		}

		::System::Void set_RewardIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SHOPPINGMALLLIMITEDCARDROWCONTEXT_SET_REWARDINDEX_OFFSET))(this, value);
		}
	};
}

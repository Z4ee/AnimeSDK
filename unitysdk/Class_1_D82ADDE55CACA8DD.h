#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemList; }

#define CLASS_1_D82ADDE55CACA8DD_GET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x14B9DFD0)
#define CLASS_1_D82ADDE55CACA8DD_GET_CURRENTCNT_OFFSET UNITYSDK_OFFSET(0x14B9DFF0)
#define CLASS_1_D82ADDE55CACA8DD_GET_ISSHELFUNLOCK_OFFSET UNITYSDK_OFFSET(0x14B9E010)
#define CLASS_1_D82ADDE55CACA8DD_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x14B9DFB0)
#define CLASS_1_D82ADDE55CACA8DD_GET_LOCALISVISIBLE_OFFSET UNITYSDK_OFFSET(0x14B9E050)
#define CLASS_1_D82ADDE55CACA8DD_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x14B9E030)
#define CLASS_1_D82ADDE55CACA8DD_SET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x14B9DFE0)
#define CLASS_1_D82ADDE55CACA8DD_SET_CURRENTCNT_OFFSET UNITYSDK_OFFSET(0x14B9E000)
#define CLASS_1_D82ADDE55CACA8DD_SET_ISSHELFUNLOCK_OFFSET UNITYSDK_OFFSET(0x14B9E020)
#define CLASS_1_D82ADDE55CACA8DD_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x14B9DFC0)
#define CLASS_1_D82ADDE55CACA8DD_SET_LOCALISVISIBLE_OFFSET UNITYSDK_OFFSET(0x14B9E060)
#define CLASS_1_D82ADDE55CACA8DD_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x14B9E040)
#define CLASS_1_D82ADDE55CACA8DD__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9E070)

inline static constexpr unsigned int Class_1_D82ADDE55CACA8DD_TypeDefinitionIndex = 76682;

class Class_1_D82ADDE55CACA8DD : public ::System::Object
{
public:
	::Proto::ItemList* _Rewards_k__BackingField; // 0x10
	::System::UInt32 _CurrentCnt_k__BackingField; // 0x18
	::System::Boolean _IsShelfUnlock_k__BackingField; // 0x1C
	::System::Boolean _IsVisible_k__BackingField; // 0x1D
	::System::Boolean _CanInteract_k__BackingField; // 0x1E
	::System::Boolean _LocalIsVisible_k__BackingField; // 0x1F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D82ADDE55CACA8DD__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D82ADDE55CACA8DD_GET_ISVISIBLE_OFFSET))(this);
	}

	::System::Void set_IsVisible(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D82ADDE55CACA8DD_SET_ISVISIBLE_OFFSET))(this, a1);
	}

	::System::Boolean get_CanInteract()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D82ADDE55CACA8DD_GET_CANINTERACT_OFFSET))(this);
	}

	::System::Void set_CanInteract(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D82ADDE55CACA8DD_SET_CANINTERACT_OFFSET))(this, a1);
	}

	::System::UInt32 get_CurrentCnt()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D82ADDE55CACA8DD_GET_CURRENTCNT_OFFSET))(this);
	}

	::System::Void set_CurrentCnt(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D82ADDE55CACA8DD_SET_CURRENTCNT_OFFSET))(this, a1);
	}

	::System::Boolean get_IsShelfUnlock()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D82ADDE55CACA8DD_GET_ISSHELFUNLOCK_OFFSET))(this);
	}

	::System::Void set_IsShelfUnlock(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D82ADDE55CACA8DD_SET_ISSHELFUNLOCK_OFFSET))(this, a1);
	}

	::Proto::ItemList* get_Rewards()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D82ADDE55CACA8DD_GET_REWARDS_OFFSET))(this);
	}

	::System::Void set_Rewards(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_D82ADDE55CACA8DD_SET_REWARDS_OFFSET))(this, a1);
	}

	::System::Boolean get_LocalIsVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D82ADDE55CACA8DD_GET_LOCALISVISIBLE_OFFSET))(this);
	}

	::System::Void set_LocalIsVisible(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D82ADDE55CACA8DD_SET_LOCALISVISIBLE_OFFSET))(this, a1);
	}
};

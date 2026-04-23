#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemList; }

#define CLASS_1_042F39A8F9A1CEDE_GET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x964AB30)
#define CLASS_1_042F39A8F9A1CEDE_GET_CURRENTCNT_OFFSET UNITYSDK_OFFSET(0x964AB50)
#define CLASS_1_042F39A8F9A1CEDE_GET_ISSHELFUNLOCK_OFFSET UNITYSDK_OFFSET(0x964AB70)
#define CLASS_1_042F39A8F9A1CEDE_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x964AB10)
#define CLASS_1_042F39A8F9A1CEDE_GET_LOCALISVISIBLE_OFFSET UNITYSDK_OFFSET(0x964ABB0)
#define CLASS_1_042F39A8F9A1CEDE_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x964AB90)
#define CLASS_1_042F39A8F9A1CEDE_SET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x964AB40)
#define CLASS_1_042F39A8F9A1CEDE_SET_CURRENTCNT_OFFSET UNITYSDK_OFFSET(0x964AB60)
#define CLASS_1_042F39A8F9A1CEDE_SET_ISSHELFUNLOCK_OFFSET UNITYSDK_OFFSET(0x964AB80)
#define CLASS_1_042F39A8F9A1CEDE_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x964AB20)
#define CLASS_1_042F39A8F9A1CEDE_SET_LOCALISVISIBLE_OFFSET UNITYSDK_OFFSET(0x964ABC0)
#define CLASS_1_042F39A8F9A1CEDE_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x964ABA0)
#define CLASS_1_042F39A8F9A1CEDE__CTOR_OFFSET UNITYSDK_OFFSET(0x964ABD0)

inline static constexpr unsigned int Class_1_042F39A8F9A1CEDE_TypeDefinitionIndex = 68511;

class Class_1_042F39A8F9A1CEDE : public ::System::Object
{
public:
	::Proto::ItemList* _Rewards_k__BackingField; // 0x10
	::System::Boolean _IsShelfUnlock_k__BackingField; // 0x18
	::System::Boolean _LocalIsVisible_k__BackingField; // 0x19
	::System::Boolean _IsVisible_k__BackingField; // 0x1A
	::System::Boolean _CanInteract_k__BackingField; // 0x1B
	::System::UInt32 _CurrentCnt_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_042F39A8F9A1CEDE__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_042F39A8F9A1CEDE_GET_ISVISIBLE_OFFSET))(this);
	}

	::System::Void set_IsVisible(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_042F39A8F9A1CEDE_SET_ISVISIBLE_OFFSET))(this, value);
	}

	::System::Boolean get_CanInteract()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_042F39A8F9A1CEDE_GET_CANINTERACT_OFFSET))(this);
	}

	::System::Void set_CanInteract(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_042F39A8F9A1CEDE_SET_CANINTERACT_OFFSET))(this, value);
	}

	::System::UInt32 get_CurrentCnt()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_042F39A8F9A1CEDE_GET_CURRENTCNT_OFFSET))(this);
	}

	::System::Void set_CurrentCnt(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_042F39A8F9A1CEDE_SET_CURRENTCNT_OFFSET))(this, value);
	}

	::System::Boolean get_IsShelfUnlock()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_042F39A8F9A1CEDE_GET_ISSHELFUNLOCK_OFFSET))(this);
	}

	::System::Void set_IsShelfUnlock(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_042F39A8F9A1CEDE_SET_ISSHELFUNLOCK_OFFSET))(this, value);
	}

	::Proto::ItemList* get_Rewards()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_042F39A8F9A1CEDE_GET_REWARDS_OFFSET))(this);
	}

	::System::Void set_Rewards(::Proto::ItemList* value)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_042F39A8F9A1CEDE_SET_REWARDS_OFFSET))(this, value);
	}

	::System::Boolean get_LocalIsVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_042F39A8F9A1CEDE_GET_LOCALISVISIBLE_OFFSET))(this);
	}

	::System::Void set_LocalIsVisible(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_042F39A8F9A1CEDE_SET_LOCALISVISIBLE_OFFSET))(this, value);
	}
};

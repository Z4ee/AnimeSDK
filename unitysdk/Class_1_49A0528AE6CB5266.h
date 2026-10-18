#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class Action; }

#define CLASS_1_49A0528AE6CB5266_ADD_ONCLICK_OFFSET UNITYSDK_OFFSET(0xB5BB2E0)
#define CLASS_1_49A0528AE6CB5266_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB5BB270)
#define CLASS_1_49A0528AE6CB5266_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xB5BB290)
#define CLASS_1_49A0528AE6CB5266_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xB5BB250)
#define CLASS_1_49A0528AE6CB5266_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0xB5BB3A0)
#define CLASS_1_49A0528AE6CB5266_METHOD_1_FB0855CD6429CA3E_OFFSET UNITYSDK_OFFSET(0xB5BB2A0)
#define CLASS_1_49A0528AE6CB5266_REMOVE_ONCLICK_OFFSET UNITYSDK_OFFSET(0xB5BB340)
#define CLASS_1_49A0528AE6CB5266_SET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB5BB280)
#define CLASS_1_49A0528AE6CB5266_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xB5BB260)
#define CLASS_1_49A0528AE6CB5266__CTOR_OFFSET UNITYSDK_OFFSET(0xB5BB460)
#define CLASS_1_49A0528AE6CB5266__GET_HANDLECLICKCOMMAND_B__18_0_OFFSET UNITYSDK_OFFSET(0xB5BB4B0)

inline static constexpr unsigned int Class_1_49A0528AE6CB5266_TypeDefinitionIndex = 79468;

class Class_1_49A0528AE6CB5266 : public ::System::Object
{
public:
	::System::Action* OnClick; // 0x10
	::R3::ReactiveProperty_1<::System::Boolean>* _IsSelected_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_397* NEDBEGDDKCM; // 0x20
	::System::Boolean _IsAvailable_k__BackingField; // 0x28
	::System::Nullable_1<::System::Int32> _Rarity_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49A0528AE6CB5266__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> get_Rarity()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49A0528AE6CB5266_GET_RARITY_OFFSET))(this);
	}

	::System::Void set_Rarity(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_49A0528AE6CB5266_SET_RARITY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAvailable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49A0528AE6CB5266_GET_ISAVAILABLE_OFFSET))(this);
	}

	::System::Void set_IsAvailable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_49A0528AE6CB5266_SET_ISAVAILABLE_OFFSET))(this, a1);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsSelected()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49A0528AE6CB5266_GET_ISSELECTED_OFFSET))(this);
	}

	::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* Method_1_FB0855CD6429CA3E()
	{
		return ((::R3::ReadOnlyReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49A0528AE6CB5266_METHOD_1_FB0855CD6429CA3E_OFFSET))(this);
	}

	::System::Void add_OnClick(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_49A0528AE6CB5266_ADD_ONCLICK_OFFSET))(this, a1);
	}

	::System::Void remove_OnClick(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_49A0528AE6CB5266_REMOVE_ONCLICK_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49A0528AE6CB5266_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::System::Void _get_HandleClickCommand_b__18_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49A0528AE6CB5266__GET_HANDLECLICKCOMMAND_B__18_0_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_90889A2023AB884E_3_GET_CHECKMARKISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC481580)
#define CLASS_1_90889A2023AB884E_3_GET_DAMAGETYPEISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC481520)
#define CLASS_1_90889A2023AB884E_3_GET_LEVELISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC481540)
#define CLASS_1_90889A2023AB884E_3_GET_NAMEISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC481560)
#define CLASS_1_90889A2023AB884E_3_SET_CHECKMARKISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC481590)
#define CLASS_1_90889A2023AB884E_3_SET_DAMAGETYPEISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC481530)
#define CLASS_1_90889A2023AB884E_3_SET_LEVELISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC481550)
#define CLASS_1_90889A2023AB884E_3_SET_NAMEISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC481570)
#define CLASS_1_90889A2023AB884E_3__CTOR_OFFSET UNITYSDK_OFFSET(0xC4815A0)

inline static constexpr unsigned int Class_1_90889A2023AB884E_3_TypeDefinitionIndex = 60229;

class Class_1_90889A2023AB884E_3 : public ::System::Object
{
public:
	::System::Boolean _NameIsVisible_k__BackingField; // 0x10
	::System::Boolean _LevelIsVisible_k__BackingField; // 0x11
	::System::Boolean _DamageTypeIsVisible_k__BackingField; // 0x12
	::System::Boolean _CheckMarkIsVisible_k__BackingField; // 0x13

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_3__CTOR_OFFSET))(this);
	}

	::System::Boolean get_DamageTypeIsVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_3_GET_DAMAGETYPEISVISIBLE_OFFSET))(this);
	}

	::System::Void set_DamageTypeIsVisible(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_3_SET_DAMAGETYPEISVISIBLE_OFFSET))(this, a1);
	}

	::System::Boolean get_LevelIsVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_3_GET_LEVELISVISIBLE_OFFSET))(this);
	}

	::System::Void set_LevelIsVisible(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_3_SET_LEVELISVISIBLE_OFFSET))(this, a1);
	}

	::System::Boolean get_NameIsVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_3_GET_NAMEISVISIBLE_OFFSET))(this);
	}

	::System::Void set_NameIsVisible(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_3_SET_NAMEISVISIBLE_OFFSET))(this, a1);
	}

	::System::Boolean get_CheckMarkIsVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_3_GET_CHECKMARKISVISIBLE_OFFSET))(this);
	}

	::System::Void set_CheckMarkIsVisible(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90889A2023AB884E_3_SET_CHECKMARKISVISIBLE_OFFSET))(this, a1);
	}
};

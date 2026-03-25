#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BaseModifierInstance; }
namespace System { class String; }

#define CLASS_1_813743369E0E31B2_CLEAR_OFFSET UNITYSDK_OFFSET(0x99D23C0)
#define CLASS_1_813743369E0E31B2_GET_MODIFIERACTUALCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0x99D2570)
#define CLASS_1_813743369E0E31B2_GET_MODIFIERCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0x99D2550)
#define CLASS_1_813743369E0E31B2_GET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0x99D2510)
#define CLASS_1_813743369E0E31B2_GET_MODIFIEROWNERENTITYID_OFFSET UNITYSDK_OFFSET(0x99D2530)
#define CLASS_1_813743369E0E31B2_METHOD_1_A963FC91AC7FF2D9_OFFSET UNITYSDK_OFFSET(0x99D2410)
#define CLASS_1_813743369E0E31B2_SET_MODIFIERACTUALCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0x99D2580)
#define CLASS_1_813743369E0E31B2_SET_MODIFIERCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0x99D2560)
#define CLASS_1_813743369E0E31B2_SET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0x99D2520)
#define CLASS_1_813743369E0E31B2_SET_MODIFIEROWNERENTITYID_OFFSET UNITYSDK_OFFSET(0x99D2540)
#define CLASS_1_813743369E0E31B2__CTOR_OFFSET UNITYSDK_OFFSET(0x99D2590)

inline static constexpr unsigned int Class_1_813743369E0E31B2_TypeDefinitionIndex = 43522;

class Class_1_813743369E0E31B2 : public ::System::Object
{
public:
	::System::String* _ModifierName_k__BackingField; // 0x10
	::System::UInt32 _ModifierOwnerEntityID_k__BackingField; // 0x18
	::System::UInt32 _ModifierCasterEntityID_k__BackingField; // 0x1C
	::System::UInt32 _ModifierActualCasterEntityID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_A963FC91AC7FF2D9(::RPG::GameCore::BaseModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_METHOD_1_A963FC91AC7FF2D9_OFFSET))(this, a1);
	}

	::System::String* get_ModifierName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_GET_MODIFIERNAME_OFFSET))(this);
	}

	::System::Void set_ModifierName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_SET_MODIFIERNAME_OFFSET))(this, value);
	}

	::System::UInt32 get_ModifierOwnerEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_GET_MODIFIEROWNERENTITYID_OFFSET))(this);
	}

	::System::Void set_ModifierOwnerEntityID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_SET_MODIFIEROWNERENTITYID_OFFSET))(this, value);
	}

	::System::UInt32 get_ModifierCasterEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_GET_MODIFIERCASTERENTITYID_OFFSET))(this);
	}

	::System::Void set_ModifierCasterEntityID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_SET_MODIFIERCASTERENTITYID_OFFSET))(this, value);
	}

	::System::UInt32 get_ModifierActualCasterEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_GET_MODIFIERACTUALCASTERENTITYID_OFFSET))(this);
	}

	::System::Void set_ModifierActualCasterEntityID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_SET_MODIFIERACTUALCASTERENTITYID_OFFSET))(this, value);
	}
};

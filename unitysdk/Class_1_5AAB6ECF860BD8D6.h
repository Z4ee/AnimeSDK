#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5AAB6ECF860BD8D6_GET_ACTUALVALUE_OFFSET UNITYSDK_OFFSET(0x9386670)
#define CLASS_1_5AAB6ECF860BD8D6_GET_EXPECTEDVALUE_OFFSET UNITYSDK_OFFSET(0x9386690)
#define CLASS_1_5AAB6ECF860BD8D6_GET_INITIALVALUE_OFFSET UNITYSDK_OFFSET(0x9386650)
#define CLASS_1_5AAB6ECF860BD8D6_SET_ACTUALVALUE_OFFSET UNITYSDK_OFFSET(0x9386680)
#define CLASS_1_5AAB6ECF860BD8D6_SET_EXPECTEDVALUE_OFFSET UNITYSDK_OFFSET(0x93866A0)
#define CLASS_1_5AAB6ECF860BD8D6_SET_INITIALVALUE_OFFSET UNITYSDK_OFFSET(0x9386660)
#define CLASS_1_5AAB6ECF860BD8D6__CTOR_OFFSET UNITYSDK_OFFSET(0x93866B0)

inline static constexpr unsigned int Class_1_5AAB6ECF860BD8D6_TypeDefinitionIndex = 71350;

class Class_1_5AAB6ECF860BD8D6 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint _ExpectedValue_k__BackingField; // 0x10
	::RPG::GameCore::FixPoint _ActualValue_k__BackingField; // 0x18
	::RPG::GameCore::FixPoint _InitialValue_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_5AAB6ECF860BD8D6__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_InitialValue()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AAB6ECF860BD8D6_GET_INITIALVALUE_OFFSET))(this);
	}

	::System::Void set_InitialValue(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_5AAB6ECF860BD8D6_SET_INITIALVALUE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_ActualValue()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AAB6ECF860BD8D6_GET_ACTUALVALUE_OFFSET))(this);
	}

	::System::Void set_ActualValue(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_5AAB6ECF860BD8D6_SET_ACTUALVALUE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_ExpectedValue()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AAB6ECF860BD8D6_GET_EXPECTEDVALUE_OFFSET))(this);
	}

	::System::Void set_ExpectedValue(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_5AAB6ECF860BD8D6_SET_EXPECTEDVALUE_OFFSET))(this, value);
	}
};

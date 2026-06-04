#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/Struct_2_27685EFF2E84A814.h"
#include "unitysdk/System/Object.h"

class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_1_20D3150E1235DCB5_GET_WORKFINISH_OFFSET UNITYSDK_OFFSET(0x13AA0160)
#define CLASS_1_20D3150E1235DCB5_METHOD_1_4C77E88CBA01CFD8_OFFSET UNITYSDK_OFFSET(0x13AA0040)
#define CLASS_1_20D3150E1235DCB5_METHOD_1_895E6BF2EDCD95D0_OFFSET UNITYSDK_OFFSET(0x13AA0100)
#define CLASS_1_20D3150E1235DCB5_SET_WORKFINISH_OFFSET UNITYSDK_OFFSET(0x13AA0170)
#define CLASS_1_20D3150E1235DCB5__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA0030)

inline static constexpr unsigned int Class_1_20D3150E1235DCB5_TypeDefinitionIndex = 52518;

class Class_1_20D3150E1235DCB5 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedGameMode* Field_1_0; // 0x10
	::Class_1_B5F93263C61C75CE* Field_1_1; // 0x18
	::System::Boolean _WorkFinish_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_1_20D3150E1235DCB5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4C77E88CBA01CFD8(::RPG::GameCore::TurnState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_20D3150E1235DCB5_METHOD_1_4C77E88CBA01CFD8_OFFSET))(this, a1);
	}

	::Struct_2_27685EFF2E84A814 Method_1_895E6BF2EDCD95D0()
	{
		return ((::Struct_2_27685EFF2E84A814(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D3150E1235DCB5_METHOD_1_895E6BF2EDCD95D0_OFFSET))(this);
	}

	::System::Boolean get_WorkFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D3150E1235DCB5_GET_WORKFINISH_OFFSET))(this);
	}

	::System::Void set_WorkFinish(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20D3150E1235DCB5_SET_WORKFINISH_OFFSET))(this, a1);
	}
};

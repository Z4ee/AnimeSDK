#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_82C84AE9E2AEDEA3_METHOD_1_D722D5CBEA7B864C_OFFSET UNITYSDK_OFFSET(0x1C1BA780)
#define CLASS_1_82C84AE9E2AEDEA3_METHOD_1_FFCB224AF9B758E1_OFFSET UNITYSDK_OFFSET(0x1C1BA6E0)
#define CLASS_1_82C84AE9E2AEDEA3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1BAB00)

inline static constexpr unsigned int Class_1_82C84AE9E2AEDEA3_TypeDefinitionIndex = 35648;

class Class_1_82C84AE9E2AEDEA3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82C84AE9E2AEDEA3__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_FFCB224AF9B758E1(::System::Int32 a1, ::RPG::GameCore::DiceCombatValueCompare a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::System::Int32, ::RPG::GameCore::DiceCombatValueCompare, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_82C84AE9E2AEDEA3_METHOD_1_FFCB224AF9B758E1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_D722D5CBEA7B864C(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::DiceCombatValueCompare a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::DiceCombatValueCompare, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_82C84AE9E2AEDEA3_METHOD_1_D722D5CBEA7B864C_OFFSET))(a1, a2, a3);
	}
};

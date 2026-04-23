#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SimpleStateMachine_2.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

class Class_1_09515A60A00C43B1;
class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;

#define CLASS_2_1CFC9E4D786ED583_CLEAR_OFFSET UNITYSDK_OFFSET(0x11B38930)
#define CLASS_2_1CFC9E4D786ED583_METHOD_2_808A56A256840289_OFFSET UNITYSDK_OFFSET(0x11B387E0)
#define CLASS_2_1CFC9E4D786ED583_METHOD_2_AC5B29196E5731F7_OFFSET UNITYSDK_OFFSET(0x11B38520)
#define CLASS_2_1CFC9E4D786ED583__CTOR_OFFSET UNITYSDK_OFFSET(0x11B38990)
#define CLASS_2_1CFC9E4D786ED583___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x11B389B0)

inline static constexpr unsigned int Class_2_1CFC9E4D786ED583_TypeDefinitionIndex = 70801;

class Class_2_1CFC9E4D786ED583 : public ::RPG::Client::LittleGame::FiveDim::SimpleStateMachine_2<::RPG::GameCore::FiveDimEvilSmileState, ::Class_1_09515A60A00C43B1*>
{
public:
	::Class_3_1A92845FAFA5EC77* Field_2_1; // 0x28
	::Class_2_9DD8A46984F1AFFD* Field_2_0; // 0x30
	::Class_1_24C2E7EF22229C6A* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CFC9E4D786ED583__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AC5B29196E5731F7(::Class_2_9DD8A46984F1AFFD* a1, ::Class_3_1A92845FAFA5EC77* a2, ::Class_1_24C2E7EF22229C6A* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_3_1A92845FAFA5EC77*, ::Class_1_24C2E7EF22229C6A*))((::PBYTE)hIl2Cpp + CLASS_2_1CFC9E4D786ED583_METHOD_2_AC5B29196E5731F7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_808A56A256840289(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1CFC9E4D786ED583_METHOD_2_808A56A256840289_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CFC9E4D786ED583_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CFC9E4D786ED583___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};

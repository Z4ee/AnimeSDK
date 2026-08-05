#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B88DD88990EA3DAE;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatRandomNextNode; }

#define CLASS_2_E0609FD0A1675E99_METHOD_2_45F0369A056A5CE7_OFFSET UNITYSDK_OFFSET(0x178231D0)
#define CLASS_2_E0609FD0A1675E99_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x178233F0)
#define CLASS_2_E0609FD0A1675E99__CTOR_OFFSET UNITYSDK_OFFSET(0x17823150)

inline static constexpr unsigned int Class_2_E0609FD0A1675E99_TypeDefinitionIndex = 79118;

class Class_2_E0609FD0A1675E99 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatRandomNextNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_E0609FD0A1675E99__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_45F0369A056A5CE7(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_E0609FD0A1675E99_METHOD_2_45F0369A056A5CE7_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_E0609FD0A1675E99_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

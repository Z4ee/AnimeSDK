#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatRandomNextNode; }

#define CLASS_2_E0609FD0A1675E99_METHOD_2_45F0369A056A5CE7_OFFSET UNITYSDK_OFFSET(0x1293E110)
#define CLASS_2_E0609FD0A1675E99_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1293E320)
#define CLASS_2_E0609FD0A1675E99__CTOR_OFFSET UNITYSDK_OFFSET(0x1293E090)

inline static constexpr unsigned int Class_2_E0609FD0A1675E99_TypeDefinitionIndex = 60753;

class Class_2_E0609FD0A1675E99 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatRandomNextNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_E0609FD0A1675E99__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_45F0369A056A5CE7(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_E0609FD0A1675E99_METHOD_2_45F0369A056A5CE7_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_E0609FD0A1675E99_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

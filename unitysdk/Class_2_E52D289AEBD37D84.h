#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCitySoundEventNode; }

#define CLASS_2_E52D289AEBD37D84_METHOD_2_5ED655A622B0DBD9_OFFSET UNITYSDK_OFFSET(0x123BA2B0)
#define CLASS_2_E52D289AEBD37D84_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x123BA540)
#define CLASS_2_E52D289AEBD37D84__CTOR_OFFSET UNITYSDK_OFFSET(0x123BA230)

inline static constexpr unsigned int Class_2_E52D289AEBD37D84_TypeDefinitionIndex = 55019;

class Class_2_E52D289AEBD37D84 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCitySoundEventNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_E52D289AEBD37D84__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_5ED655A622B0DBD9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_E52D289AEBD37D84_METHOD_2_5ED655A622B0DBD9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_E52D289AEBD37D84_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

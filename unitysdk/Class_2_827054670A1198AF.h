#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatSetExitChatTransitionNode; }

#define CLASS_2_827054670A1198AF_METHOD_2_2943CB55423DBA35_OFFSET UNITYSDK_OFFSET(0xFBE3C90)
#define CLASS_2_827054670A1198AF_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xFBE3DF0)
#define CLASS_2_827054670A1198AF__CTOR_OFFSET UNITYSDK_OFFSET(0xFBE3C10)

inline static constexpr unsigned int Class_2_827054670A1198AF_TypeDefinitionIndex = 76234;

class Class_2_827054670A1198AF : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_827054670A1198AF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_2943CB55423DBA35(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_827054670A1198AF_METHOD_2_2943CB55423DBA35_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_827054670A1198AF_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

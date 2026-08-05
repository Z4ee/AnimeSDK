#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B88DD88990EA3DAE;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatSetExitChatTransitionNode; }

#define CLASS_2_827054670A1198AF_METHOD_2_2943CB55423DBA35_OFFSET UNITYSDK_OFFSET(0x120F24B0)
#define CLASS_2_827054670A1198AF_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x120F2610)
#define CLASS_2_827054670A1198AF__CTOR_OFFSET UNITYSDK_OFFSET(0x120F2430)

inline static constexpr unsigned int Class_2_827054670A1198AF_TypeDefinitionIndex = 54334;

class Class_2_827054670A1198AF : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_827054670A1198AF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_2943CB55423DBA35(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_827054670A1198AF_METHOD_2_2943CB55423DBA35_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_827054670A1198AF_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

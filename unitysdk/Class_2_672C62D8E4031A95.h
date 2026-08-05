#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B88DD88990EA3DAE;
namespace MoleMole::GalGame { class MainCityChatActionPlayNode; }
namespace MoleMole::GalGame { class MainCityChatNPCEnterAction; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityMultiChatNPCEnterAction; }

#define CLASS_2_672C62D8E4031A95_METHOD_2_37DCC0D5568FAA0B_OFFSET UNITYSDK_OFFSET(0x16AEFC90)
#define CLASS_2_672C62D8E4031A95_METHOD_2_55C59E3B685A7B7D_OFFSET UNITYSDK_OFFSET(0x16AEFA00)
#define CLASS_2_672C62D8E4031A95_METHOD_2_60D66D1EE0DABC91_OFFSET UNITYSDK_OFFSET(0x16AEFD80)
#define CLASS_2_672C62D8E4031A95_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x16AEFDF0)
#define CLASS_2_672C62D8E4031A95__CTOR_OFFSET UNITYSDK_OFFSET(0x16AEF980)

inline static constexpr unsigned int Class_2_672C62D8E4031A95_TypeDefinitionIndex = 70976;

class Class_2_672C62D8E4031A95 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatActionPlayNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_672C62D8E4031A95__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_55C59E3B685A7B7D(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_672C62D8E4031A95_METHOD_2_55C59E3B685A7B7D_OFFSET))(this, a1);
	}

	::System::Void Method_2_37DCC0D5568FAA0B(::MoleMole::GalGame::MainCityChatNPCEnterAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatNPCEnterAction*))((::PBYTE)hIl2Cpp + CLASS_2_672C62D8E4031A95_METHOD_2_37DCC0D5568FAA0B_OFFSET))(this, a1);
	}

	::System::Void Method_2_60D66D1EE0DABC91(::MoleMole::GalGame::MainCityMultiChatNPCEnterAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityMultiChatNPCEnterAction*))((::PBYTE)hIl2Cpp + CLASS_2_672C62D8E4031A95_METHOD_2_60D66D1EE0DABC91_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_672C62D8E4031A95_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

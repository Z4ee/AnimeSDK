#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B88DD88990EA3DAE;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatShow3DModelNode; }

#define CLASS_2_EF31D343665AA4E3_METHOD_2_8E22B572EA9F050D_OFFSET UNITYSDK_OFFSET(0x117D4DA0)
#define CLASS_2_EF31D343665AA4E3_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x117D5000)
#define CLASS_2_EF31D343665AA4E3__CTOR_OFFSET UNITYSDK_OFFSET(0x117D4D20)

inline static constexpr unsigned int Class_2_EF31D343665AA4E3_TypeDefinitionIndex = 83537;

class Class_2_EF31D343665AA4E3 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatShow3DModelNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_EF31D343665AA4E3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E22B572EA9F050D(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_EF31D343665AA4E3_METHOD_2_8E22B572EA9F050D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_EF31D343665AA4E3_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

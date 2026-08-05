#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B88DD88990EA3DAE;
namespace MoleMole::GalGame { class MainCityChatConditionNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_E1C5A9B916F5D71D_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x117C9250)
#define CLASS_2_E1C5A9B916F5D71D_METHOD_2_D073B7A46C63850E_OFFSET UNITYSDK_OFFSET(0x117C9310)
#define CLASS_2_E1C5A9B916F5D71D_METHOD_2_D795A4BF26C50189_OFFSET UNITYSDK_OFFSET(0x117C93B0)
#define CLASS_2_E1C5A9B916F5D71D_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x117C9320)
#define CLASS_2_E1C5A9B916F5D71D__CTOR_OFFSET UNITYSDK_OFFSET(0x117C91D0)

inline static constexpr unsigned int Class_2_E1C5A9B916F5D71D_TypeDefinitionIndex = 48095;

class Class_2_E1C5A9B916F5D71D : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatConditionNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_E1C5A9B916F5D71D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_E1C5A9B916F5D71D_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::MoleMole::GalGame::MainCityChatConditionNode* Method_2_D073B7A46C63850E()
	{
		return ((::MoleMole::GalGame::MainCityChatConditionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1C5A9B916F5D71D_METHOD_2_D073B7A46C63850E_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_E1C5A9B916F5D71D_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_D795A4BF26C50189(::MoleMole::GalGame::MainCityChatConditionNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatConditionNode*))((::PBYTE)hIl2Cpp + CLASS_2_E1C5A9B916F5D71D_METHOD_2_D795A4BF26C50189_OFFSET))(this, a1);
	}
};

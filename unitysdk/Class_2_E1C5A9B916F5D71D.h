#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatConditionNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_E1C5A9B916F5D71D_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xE886DA0)
#define CLASS_2_E1C5A9B916F5D71D_METHOD_2_D073B7A46C63850E_OFFSET UNITYSDK_OFFSET(0xE886F00)
#define CLASS_2_E1C5A9B916F5D71D_METHOD_2_D795A4BF26C50189_OFFSET UNITYSDK_OFFSET(0xE886E60)
#define CLASS_2_E1C5A9B916F5D71D_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xE886E70)
#define CLASS_2_E1C5A9B916F5D71D__CTOR_OFFSET UNITYSDK_OFFSET(0xE886D20)

inline static constexpr unsigned int Class_2_E1C5A9B916F5D71D_TypeDefinitionIndex = 70772;

class Class_2_E1C5A9B916F5D71D : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatConditionNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_E1C5A9B916F5D71D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_E1C5A9B916F5D71D_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_D795A4BF26C50189(::MoleMole::GalGame::MainCityChatConditionNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatConditionNode*))((::PBYTE)hIl2Cpp + CLASS_2_E1C5A9B916F5D71D_METHOD_2_D795A4BF26C50189_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_E1C5A9B916F5D71D_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::MoleMole::GalGame::MainCityChatConditionNode* Method_2_D073B7A46C63850E()
	{
		return ((::MoleMole::GalGame::MainCityChatConditionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1C5A9B916F5D71D_METHOD_2_D073B7A46C63850E_OFFSET))(this);
	}
};

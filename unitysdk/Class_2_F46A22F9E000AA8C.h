#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B88DD88990EA3DAE;
namespace MoleMole::GalGame { class MainCityChatChangeActorsNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_F46A22F9E000AA8C_METHOD_2_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x1213D8E0)
#define CLASS_2_F46A22F9E000AA8C_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x1213D750)
#define CLASS_2_F46A22F9E000AA8C_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1213E230)
#define CLASS_2_F46A22F9E000AA8C__CTOR_OFFSET UNITYSDK_OFFSET(0x1213D6D0)

inline static constexpr unsigned int Class_2_F46A22F9E000AA8C_TypeDefinitionIndex = 75422;

class Class_2_F46A22F9E000AA8C : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatChangeActorsNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_F46A22F9E000AA8C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_F46A22F9E000AA8C_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F46A22F9E000AA8C_METHOD_2_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_F46A22F9E000AA8C_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

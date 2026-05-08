#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatChangeActorsNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_F46A22F9E000AA8C_METHOD_2_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x11AF5F10)
#define CLASS_2_F46A22F9E000AA8C_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x11AF5D80)
#define CLASS_2_F46A22F9E000AA8C_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x11AF6870)
#define CLASS_2_F46A22F9E000AA8C__CTOR_OFFSET UNITYSDK_OFFSET(0x11AF5D00)

inline static constexpr unsigned int Class_2_F46A22F9E000AA8C_TypeDefinitionIndex = 77098;

class Class_2_F46A22F9E000AA8C : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatChangeActorsNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_F46A22F9E000AA8C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_F46A22F9E000AA8C_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F46A22F9E000AA8C_METHOD_2_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_F46A22F9E000AA8C_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

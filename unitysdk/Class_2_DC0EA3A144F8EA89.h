#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatDelayNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_DC0EA3A144F8EA89_METHOD_2_722E1524F560C8AF_OFFSET UNITYSDK_OFFSET(0x16C42D70)
#define CLASS_2_DC0EA3A144F8EA89_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x16C42F70)
#define CLASS_2_DC0EA3A144F8EA89__CTOR_OFFSET UNITYSDK_OFFSET(0x16C42CF0)

inline static constexpr unsigned int Class_2_DC0EA3A144F8EA89_TypeDefinitionIndex = 40571;

class Class_2_DC0EA3A144F8EA89 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatDelayNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_DC0EA3A144F8EA89__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_722E1524F560C8AF(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_DC0EA3A144F8EA89_METHOD_2_722E1524F560C8AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_DC0EA3A144F8EA89_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class ChatChangeEffectStateNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_6656CC4CFA6EC40A_METHOD_2_697CEBDDAD44641A_OFFSET UNITYSDK_OFFSET(0xFF3A290)
#define CLASS_2_6656CC4CFA6EC40A_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xFF3A690)
#define CLASS_2_6656CC4CFA6EC40A__CTOR_OFFSET UNITYSDK_OFFSET(0xFF3A210)

inline static constexpr unsigned int Class_2_6656CC4CFA6EC40A_TypeDefinitionIndex = 76693;

class Class_2_6656CC4CFA6EC40A : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::ChatChangeEffectStateNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_6656CC4CFA6EC40A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_697CEBDDAD44641A(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_6656CC4CFA6EC40A_METHOD_2_697CEBDDAD44641A_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_6656CC4CFA6EC40A_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

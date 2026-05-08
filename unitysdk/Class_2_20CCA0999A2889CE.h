#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MiniGameRecordNode; }

#define CLASS_2_20CCA0999A2889CE_METHOD_2_B85F667AE369605C_OFFSET UNITYSDK_OFFSET(0x14375790)
#define CLASS_2_20CCA0999A2889CE_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x14375A60)
#define CLASS_2_20CCA0999A2889CE__CTOR_OFFSET UNITYSDK_OFFSET(0x14375710)

inline static constexpr unsigned int Class_2_20CCA0999A2889CE_TypeDefinitionIndex = 78491;

class Class_2_20CCA0999A2889CE : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MiniGameRecordNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_20CCA0999A2889CE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B85F667AE369605C(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_20CCA0999A2889CE_METHOD_2_B85F667AE369605C_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_20CCA0999A2889CE_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

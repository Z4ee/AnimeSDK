#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B88DD88990EA3DAE;
namespace MoleMole::GalGame { class MainCityChatCallCameraEffectNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_74416532082BC40F_METHOD_2_2CD98E928A4B8CAA_OFFSET UNITYSDK_OFFSET(0x14218CB0)
#define CLASS_2_74416532082BC40F_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x14218F20)
#define CLASS_2_74416532082BC40F__CTOR_OFFSET UNITYSDK_OFFSET(0x14218C30)

inline static constexpr unsigned int Class_2_74416532082BC40F_TypeDefinitionIndex = 54510;

class Class_2_74416532082BC40F : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatCallCameraEffectNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_74416532082BC40F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_2CD98E928A4B8CAA(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_74416532082BC40F_METHOD_2_2CD98E928A4B8CAA_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_74416532082BC40F_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

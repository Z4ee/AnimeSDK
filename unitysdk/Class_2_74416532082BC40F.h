#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatCallCameraEffectNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_74416532082BC40F_METHOD_2_2CD98E928A4B8CAA_OFFSET UNITYSDK_OFFSET(0xD466410)
#define CLASS_2_74416532082BC40F_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xD466680)
#define CLASS_2_74416532082BC40F__CTOR_OFFSET UNITYSDK_OFFSET(0xD466390)

inline static constexpr unsigned int Class_2_74416532082BC40F_TypeDefinitionIndex = 69007;

class Class_2_74416532082BC40F : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatCallCameraEffectNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_74416532082BC40F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_2CD98E928A4B8CAA(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_74416532082BC40F_METHOD_2_2CD98E928A4B8CAA_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_74416532082BC40F_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

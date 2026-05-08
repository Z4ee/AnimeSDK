#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatCallCameraEffectNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_74416532082BC40F_METHOD_2_2CD98E928A4B8CAA_OFFSET UNITYSDK_OFFSET(0x108FAFC0)
#define CLASS_2_74416532082BC40F_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x108FB230)
#define CLASS_2_74416532082BC40F__CTOR_OFFSET UNITYSDK_OFFSET(0x108FAF40)

inline static constexpr unsigned int Class_2_74416532082BC40F_TypeDefinitionIndex = 73777;

class Class_2_74416532082BC40F : public ::Class_1_328B10E9F3553A0D
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

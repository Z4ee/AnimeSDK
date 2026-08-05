#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B88DD88990EA3DAE;
namespace MoleMole::GalGame { class MainCityActiveDynamicObjectNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_32F440FF171ACC33_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x13DFB470)
#define CLASS_2_32F440FF171ACC33_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x13DFB4F0)
#define CLASS_2_32F440FF171ACC33__CTOR_OFFSET UNITYSDK_OFFSET(0x13DFB3F0)

inline static constexpr unsigned int Class_2_32F440FF171ACC33_TypeDefinitionIndex = 86520;

class Class_2_32F440FF171ACC33 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityActiveDynamicObjectNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_32F440FF171ACC33__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_097468641FDED14E(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_32F440FF171ACC33_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_32F440FF171ACC33_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityActiveDynamicObjectNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_32F440FF171ACC33_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x19F48C30)
#define CLASS_2_32F440FF171ACC33_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x19F48CB0)
#define CLASS_2_32F440FF171ACC33__CTOR_OFFSET UNITYSDK_OFFSET(0x19F48BB0)

inline static constexpr unsigned int Class_2_32F440FF171ACC33_TypeDefinitionIndex = 65258;

class Class_2_32F440FF171ACC33 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityActiveDynamicObjectNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_32F440FF171ACC33__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_097468641FDED14E(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_32F440FF171ACC33_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_32F440FF171ACC33_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

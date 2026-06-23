#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCitySoundActionNode; }

#define CLASS_2_8AF4A776F01108F7_METHOD_2_B966F9D199B44A2C_OFFSET UNITYSDK_OFFSET(0xB7EB070)
#define CLASS_2_8AF4A776F01108F7_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xB7EB2A0)
#define CLASS_2_8AF4A776F01108F7__CTOR_OFFSET UNITYSDK_OFFSET(0xB7EAFF0)

inline static constexpr unsigned int Class_2_8AF4A776F01108F7_TypeDefinitionIndex = 71795;

class Class_2_8AF4A776F01108F7 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCitySoundActionNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_8AF4A776F01108F7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B966F9D199B44A2C(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_8AF4A776F01108F7_METHOD_2_B966F9D199B44A2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_8AF4A776F01108F7_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

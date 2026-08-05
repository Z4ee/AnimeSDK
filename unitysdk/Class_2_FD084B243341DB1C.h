#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B88DD88990EA3DAE;
namespace MoleMole::GalGame { class MainCityChatPlayMontageNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_FD084B243341DB1C_METHOD_2_710617EA4BA4C457_OFFSET UNITYSDK_OFFSET(0x16AED880)
#define CLASS_2_FD084B243341DB1C_METHOD_2_D24EF79E293914CD_OFFSET UNITYSDK_OFFSET(0x16AED1F0)
#define CLASS_2_FD084B243341DB1C_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x16AEDA20)
#define CLASS_2_FD084B243341DB1C__CTOR_OFFSET UNITYSDK_OFFSET(0x16AED170)

inline static constexpr unsigned int Class_2_FD084B243341DB1C_TypeDefinitionIndex = 81330;

class Class_2_FD084B243341DB1C : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatPlayMontageNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_FD084B243341DB1C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_D24EF79E293914CD(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_FD084B243341DB1C_METHOD_2_D24EF79E293914CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_FD084B243341DB1C_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_710617EA4BA4C457(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_FD084B243341DB1C_METHOD_2_710617EA4BA4C457_OFFSET))(this, a1);
	}
};

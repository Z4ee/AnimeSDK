#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayMontageNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_FD084B243341DB1C_METHOD_2_710617EA4BA4C457_OFFSET UNITYSDK_OFFSET(0x1620B8F0)
#define CLASS_2_FD084B243341DB1C_METHOD_2_D24EF79E293914CD_OFFSET UNITYSDK_OFFSET(0x1620B2A0)
#define CLASS_2_FD084B243341DB1C_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1620BA90)
#define CLASS_2_FD084B243341DB1C__CTOR_OFFSET UNITYSDK_OFFSET(0x1620B220)

inline static constexpr unsigned int Class_2_FD084B243341DB1C_TypeDefinitionIndex = 49192;

class Class_2_FD084B243341DB1C : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatPlayMontageNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_FD084B243341DB1C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_D24EF79E293914CD(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_FD084B243341DB1C_METHOD_2_D24EF79E293914CD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_710617EA4BA4C457(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_FD084B243341DB1C_METHOD_2_710617EA4BA4C457_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_FD084B243341DB1C_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

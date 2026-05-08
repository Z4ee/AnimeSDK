#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityAttractorUseNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_49F4E8B058B729CD_METHOD_2_7F20D9555862CF22_OFFSET UNITYSDK_OFFSET(0x13B08920)
#define CLASS_2_49F4E8B058B729CD_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x13B08AE0)
#define CLASS_2_49F4E8B058B729CD__CTOR_OFFSET UNITYSDK_OFFSET(0x13B088A0)

inline static constexpr unsigned int Class_2_49F4E8B058B729CD_TypeDefinitionIndex = 55581;

class Class_2_49F4E8B058B729CD : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityAttractorUseNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_49F4E8B058B729CD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F20D9555862CF22(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_49F4E8B058B729CD_METHOD_2_7F20D9555862CF22_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_49F4E8B058B729CD_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

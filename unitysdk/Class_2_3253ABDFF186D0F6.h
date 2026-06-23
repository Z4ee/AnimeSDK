#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatModifyCameraNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_3253ABDFF186D0F6_METHOD_2_57D6489AC60AE928_OFFSET UNITYSDK_OFFSET(0x1AE7BE60)
#define CLASS_2_3253ABDFF186D0F6_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1AE7C120)
#define CLASS_2_3253ABDFF186D0F6__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE7BDE0)

inline static constexpr unsigned int Class_2_3253ABDFF186D0F6_TypeDefinitionIndex = 69795;

class Class_2_3253ABDFF186D0F6 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatModifyCameraNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_3253ABDFF186D0F6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_57D6489AC60AE928(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_3253ABDFF186D0F6_METHOD_2_57D6489AC60AE928_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_3253ABDFF186D0F6_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

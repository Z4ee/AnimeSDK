#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityAttractorEnableNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_2B1E5AAF727E62B9_METHOD_2_B5B6A4F2781B1BF6_OFFSET UNITYSDK_OFFSET(0x114F04B0)
#define CLASS_2_2B1E5AAF727E62B9_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x114F06B0)
#define CLASS_2_2B1E5AAF727E62B9__CTOR_OFFSET UNITYSDK_OFFSET(0x114F0430)

inline static constexpr unsigned int Class_2_2B1E5AAF727E62B9_TypeDefinitionIndex = 78908;

class Class_2_2B1E5AAF727E62B9 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityAttractorEnableNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_2B1E5AAF727E62B9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B5B6A4F2781B1BF6(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_2B1E5AAF727E62B9_METHOD_2_B5B6A4F2781B1BF6_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_2B1E5AAF727E62B9_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

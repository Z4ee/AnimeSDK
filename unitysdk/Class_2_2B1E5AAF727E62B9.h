#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityAttractorEnableNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_2B1E5AAF727E62B9_METHOD_2_B5B6A4F2781B1BF6_OFFSET UNITYSDK_OFFSET(0x12C9BCC0)
#define CLASS_2_2B1E5AAF727E62B9_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x12C9BEC0)
#define CLASS_2_2B1E5AAF727E62B9__CTOR_OFFSET UNITYSDK_OFFSET(0x12C9BC40)

inline static constexpr unsigned int Class_2_2B1E5AAF727E62B9_TypeDefinitionIndex = 77204;

class Class_2_2B1E5AAF727E62B9 : public ::Class_1_328B10E9F3553A0D
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatModifyCameraNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_3253ABDFF186D0F6_METHOD_2_57D6489AC60AE928_OFFSET UNITYSDK_OFFSET(0x131A84B0)
#define CLASS_2_3253ABDFF186D0F6_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x131A8770)
#define CLASS_2_3253ABDFF186D0F6__CTOR_OFFSET UNITYSDK_OFFSET(0x131A8430)

inline static constexpr unsigned int Class_2_3253ABDFF186D0F6_TypeDefinitionIndex = 68964;

class Class_2_3253ABDFF186D0F6 : public ::Class_1_328B10E9F3553A0D
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

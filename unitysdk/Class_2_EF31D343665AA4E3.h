#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatShow3DModelNode; }

#define CLASS_2_EF31D343665AA4E3_METHOD_2_8E22B572EA9F050D_OFFSET UNITYSDK_OFFSET(0x10DB2A50)
#define CLASS_2_EF31D343665AA4E3_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x10DB2CB0)
#define CLASS_2_EF31D343665AA4E3__CTOR_OFFSET UNITYSDK_OFFSET(0x10DB29D0)

inline static constexpr unsigned int Class_2_EF31D343665AA4E3_TypeDefinitionIndex = 52384;

class Class_2_EF31D343665AA4E3 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatShow3DModelNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_EF31D343665AA4E3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E22B572EA9F050D(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_EF31D343665AA4E3_METHOD_2_8E22B572EA9F050D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_EF31D343665AA4E3_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

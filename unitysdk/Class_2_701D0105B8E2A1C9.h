#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B88DD88990EA3DAE;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatQuestRecommendNode; }

#define CLASS_2_701D0105B8E2A1C9_METHOD_2_05679872695EE5DE_OFFSET UNITYSDK_OFFSET(0x17CF4EA0)
#define CLASS_2_701D0105B8E2A1C9_METHOD_2_3D1BF992603415DA_OFFSET UNITYSDK_OFFSET(0x17CF4FB0)
#define CLASS_2_701D0105B8E2A1C9_METHOD_2_DDA1A1F8EE95D4B5_OFFSET UNITYSDK_OFFSET(0x17CF4F10)
#define CLASS_2_701D0105B8E2A1C9_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x17CF4F20)
#define CLASS_2_701D0105B8E2A1C9__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF4E20)

inline static constexpr unsigned int Class_2_701D0105B8E2A1C9_TypeDefinitionIndex = 60401;

class Class_2_701D0105B8E2A1C9 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatQuestRecommendNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_701D0105B8E2A1C9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_05679872695EE5DE(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_701D0105B8E2A1C9_METHOD_2_05679872695EE5DE_OFFSET))(this, a1);
	}

	::MoleMole::GalGame::MainCityChatQuestRecommendNode* Method_2_DDA1A1F8EE95D4B5()
	{
		return ((::MoleMole::GalGame::MainCityChatQuestRecommendNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701D0105B8E2A1C9_METHOD_2_DDA1A1F8EE95D4B5_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_701D0105B8E2A1C9_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D1BF992603415DA(::MoleMole::GalGame::MainCityChatQuestRecommendNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatQuestRecommendNode*))((::PBYTE)hIl2Cpp + CLASS_2_701D0105B8E2A1C9_METHOD_2_3D1BF992603415DA_OFFSET))(this, a1);
	}
};

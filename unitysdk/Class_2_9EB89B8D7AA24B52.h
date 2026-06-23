#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayVoiceNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_9EB89B8D7AA24B52_METHOD_2_2177C24A5E2E46CB_OFFSET UNITYSDK_OFFSET(0xD0E5730)
#define CLASS_2_9EB89B8D7AA24B52_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xD0E5BA0)
#define CLASS_2_9EB89B8D7AA24B52__CTOR_OFFSET UNITYSDK_OFFSET(0xD0E56B0)

inline static constexpr unsigned int Class_2_9EB89B8D7AA24B52_TypeDefinitionIndex = 79785;

class Class_2_9EB89B8D7AA24B52 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatPlayVoiceNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_9EB89B8D7AA24B52__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_2177C24A5E2E46CB(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_9EB89B8D7AA24B52_METHOD_2_2177C24A5E2E46CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_9EB89B8D7AA24B52_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

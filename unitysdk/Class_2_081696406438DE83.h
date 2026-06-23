#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatRandomChoiceNode; }
namespace MoleMole::GalGame { class MainCityChatTransitionDisplayItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_081696406438DE83_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x130BF280)
#define CLASS_2_081696406438DE83_METHOD_2_4982E67EAD90F790_OFFSET UNITYSDK_OFFSET(0x130BED90)
#define CLASS_2_081696406438DE83_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x130BF1E0)
#define CLASS_2_081696406438DE83_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x130BF330)
#define CLASS_2_081696406438DE83__CTOR_OFFSET UNITYSDK_OFFSET(0x130BED10)

inline static constexpr unsigned int Class_2_081696406438DE83_TypeDefinitionIndex = 79429;

class Class_2_081696406438DE83 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatRandomChoiceNode* Field_2_1; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatTransitionDisplayItem*>* Field_2_0; // 0x48

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_081696406438DE83__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4982E67EAD90F790(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_081696406438DE83_METHOD_2_4982E67EAD90F790_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_081696406438DE83_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_081696406438DE83_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_081696406438DE83_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

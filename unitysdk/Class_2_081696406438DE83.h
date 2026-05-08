#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatRandomChoiceNode; }
namespace MoleMole::GalGame { class MainCityChatTransitionDisplayItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_081696406438DE83_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10687770)
#define CLASS_2_081696406438DE83_METHOD_2_4982E67EAD90F790_OFFSET UNITYSDK_OFFSET(0x10687280)
#define CLASS_2_081696406438DE83_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x106876D0)
#define CLASS_2_081696406438DE83_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x10687820)
#define CLASS_2_081696406438DE83__CTOR_OFFSET UNITYSDK_OFFSET(0x10687200)

inline static constexpr unsigned int Class_2_081696406438DE83_TypeDefinitionIndex = 60532;

class Class_2_081696406438DE83 : public ::Class_1_328B10E9F3553A0D
{
public:
	::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatTransitionDisplayItem*>* Field_2_0; // 0x40
	::MoleMole::GalGame::MainCityChatRandomChoiceNode* Field_2_1; // 0x48

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

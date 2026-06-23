#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatBranchNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9FF1651CF6F34EC4_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x153B9740)
#define CLASS_2_9FF1651CF6F34EC4_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x153B9800)
#define CLASS_2_9FF1651CF6F34EC4__CTOR_OFFSET UNITYSDK_OFFSET(0x153B96C0)

inline static constexpr unsigned int Class_2_9FF1651CF6F34EC4_TypeDefinitionIndex = 61509;

class Class_2_9FF1651CF6F34EC4 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatBranchNode* Field_2_0; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x48

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_9FF1651CF6F34EC4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_9FF1651CF6F34EC4_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_9FF1651CF6F34EC4_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

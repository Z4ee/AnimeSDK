#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatChangeNpcNameNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_79FB35EFF0337C0A_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x115A0790)
#define CLASS_2_79FB35EFF0337C0A_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x115A06B0)
#define CLASS_2_79FB35EFF0337C0A_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x115A0D50)
#define CLASS_2_79FB35EFF0337C0A__CTOR_OFFSET UNITYSDK_OFFSET(0x115A0630)

inline static constexpr unsigned int Class_2_79FB35EFF0337C0A_TypeDefinitionIndex = 53121;

class Class_2_79FB35EFF0337C0A : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatChangeNpcNameNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_79FB35EFF0337C0A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_79FB35EFF0337C0A_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_79FB35EFF0337C0A_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79FB35EFF0337C0A_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}
};

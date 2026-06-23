#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatJumpChapterNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_A6A0C790093A8319_METHOD_2_ADDD3B64D6B175BA_OFFSET UNITYSDK_OFFSET(0x144A2560)
#define CLASS_2_A6A0C790093A8319_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x144A2600)
#define CLASS_2_A6A0C790093A8319_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x144A2520)
#define CLASS_2_A6A0C790093A8319_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x144A2460)
#define CLASS_2_A6A0C790093A8319_METHOD_2_DCC0735D3152CA7D_OFFSET UNITYSDK_OFFSET(0x144A2690)
#define CLASS_2_A6A0C790093A8319_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x144A2570)
#define CLASS_2_A6A0C790093A8319__CTOR_OFFSET UNITYSDK_OFFSET(0x144A23E0)

inline static constexpr unsigned int Class_2_A6A0C790093A8319_TypeDefinitionIndex = 52380;

class Class_2_A6A0C790093A8319 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatJumpChapterNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::MoleMole::GalGame::MainCityChatJumpChapterNode* Method_2_ADDD3B64D6B175BA()
	{
		return ((::MoleMole::GalGame::MainCityChatJumpChapterNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319_METHOD_2_ADDD3B64D6B175BA_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_DCC0735D3152CA7D(::MoleMole::GalGame::MainCityChatJumpChapterNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatJumpChapterNode*))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319_METHOD_2_DCC0735D3152CA7D_OFFSET))(this, a1);
	}
};

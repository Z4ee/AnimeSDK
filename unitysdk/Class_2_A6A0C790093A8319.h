#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatJumpChapterNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_A6A0C790093A8319_METHOD_2_ADDD3B64D6B175BA_OFFSET UNITYSDK_OFFSET(0xFDC4970)
#define CLASS_2_A6A0C790093A8319_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xFDC4850)
#define CLASS_2_A6A0C790093A8319_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFDC4800)
#define CLASS_2_A6A0C790093A8319_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xFDC4740)
#define CLASS_2_A6A0C790093A8319_METHOD_2_DCC0735D3152CA7D_OFFSET UNITYSDK_OFFSET(0xFDC4840)
#define CLASS_2_A6A0C790093A8319_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xFDC48E0)
#define CLASS_2_A6A0C790093A8319__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC46C0)

inline static constexpr unsigned int Class_2_A6A0C790093A8319_TypeDefinitionIndex = 65383;

class Class_2_A6A0C790093A8319 : public ::Class_1_328B10E9F3553A0D
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

	::System::Void Method_2_DCC0735D3152CA7D(::MoleMole::GalGame::MainCityChatJumpChapterNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatJumpChapterNode*))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319_METHOD_2_DCC0735D3152CA7D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::MoleMole::GalGame::MainCityChatJumpChapterNode* Method_2_ADDD3B64D6B175BA()
	{
		return ((::MoleMole::GalGame::MainCityChatJumpChapterNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6A0C790093A8319_METHOD_2_ADDD3B64D6B175BA_OFFSET))(this);
	}
};

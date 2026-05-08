#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_81B8168352E894F2_METHOD_2_DEA6ACF0B96986BD_OFFSET UNITYSDK_OFFSET(0x16E01BB0)
#define CLASS_2_81B8168352E894F2_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x16E01D80)
#define CLASS_2_81B8168352E894F2__CTOR_OFFSET UNITYSDK_OFFSET(0x16E01BA0)

inline static constexpr unsigned int Class_2_81B8168352E894F2_TypeDefinitionIndex = 54361;

class Class_2_81B8168352E894F2 : public ::Class_1_328B10E9F3553A0D
{
public:
	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_81B8168352E894F2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_DEA6ACF0B96986BD(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_81B8168352E894F2_METHOD_2_DEA6ACF0B96986BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_81B8168352E894F2_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UITransitionAnimType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_82A1455F3BBBFC10__CTOR_OFFSET UNITYSDK_OFFSET(0x87D10)

inline static constexpr unsigned int Struct_2_82A1455F3BBBFC10_TypeDefinitionIndex = 73038;

struct alignas(4) Struct_2_82A1455F3BBBFC10
{
	::RPG::Client::UITransitionAnimType CEMOGKMHOPE; // 0x10
	::System::Boolean KONACBNAFEB; // 0x14
	::System::Boolean PGAECHMDDHC; // 0x15
	::System::Boolean HBNBMOPFOFE; // 0x16
	::System::Boolean OCAOELJIFMI; // 0x17
	::System::Boolean NFNDOGHCMPO; // 0x18
	::System::Boolean PMNAPOEENAB; // 0x19

	::System::Void _ctor(::RPG::Client::UITransitionAnimType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UITransitionAnimType))((::PBYTE)hIl2Cpp + STRUCT_2_82A1455F3BBBFC10__CTOR_OFFSET))(this, a1);
	}
};

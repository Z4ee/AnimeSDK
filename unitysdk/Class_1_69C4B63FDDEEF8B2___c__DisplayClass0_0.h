#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define CLASS_1_69C4B63FDDEEF8B2___C__DISPLAYCLASS0_0__APPLY_B__0_OFFSET UNITYSDK_OFFSET(0x1C54CBA0)
#define CLASS_1_69C4B63FDDEEF8B2___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54C8E0)

inline static constexpr unsigned int Class_1_69C4B63FDDEEF8B2___c__DisplayClass0_0_TypeDefinitionIndex = 41662;

class Class_1_69C4B63FDDEEF8B2___c__DisplayClass0_0 : public ::System::Object
{
public:
	::RPG::Client::MechCraft::MechCraftRotationType rotation; // 0x10
	::UnityEngine::Vector2Int pivot; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69C4B63FDDEEF8B2___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2Int _Apply_b__0(::UnityEngine::Vector2Int a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_69C4B63FDDEEF8B2___C__DISPLAYCLASS0_0__APPLY_B__0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_1A39E1B51756BF41;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONODIGITCONFIG_SETDIGITWITHLEADINGZERO_OFFSET UNITYSDK_OFFSET(0x13EFF8E0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONODIGITCONFIG_SETDIGIT_OFFSET UNITYSDK_OFFSET(0x13EFF730)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONODIGITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13EFF9F0)

namespace MoleMole::MiniGame::BangbooPartyGame
{
	inline static constexpr unsigned int MonoDigitConfig_TypeDefinitionIndex = 40252;

	class MonoDigitConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* gold; // 0x18
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* silver; // 0x20
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* time; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONODIGITCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void SetDigit(::Class_2_1A39E1B51756BF41* a1, ::Class_2_1A39E1B51756BF41* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::Class_2_1A39E1B51756BF41*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONODIGITCONFIG_SETDIGIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetDigitWithLeadingZero(::Class_2_1A39E1B51756BF41* a1, ::Class_2_1A39E1B51756BF41* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1A39E1B51756BF41*, ::Class_2_1A39E1B51756BF41*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONODIGITCONFIG_SETDIGITWITHLEADINGZERO_OFFSET))(this, a1, a2, a3);
		}
	};
}

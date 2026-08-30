#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_43BD383C98B4C0C5_220;
namespace RPG::GameCore { class GameComponentBase; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_PUZZLEITEMBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD006C0)
#define RPG_CLIENT_PROP_PUZZLEITEMBASE_INITPUZZLEITEM_OFFSET UNITYSDK_OFFSET(0xDD00680)
#define RPG_CLIENT_PROP_PUZZLEITEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xDD00780)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PuzzleItemBase_TypeDefinitionIndex = 78319;

	class PuzzleItemBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_43BD383C98B4C0C5_220* NFALKNMMPFM; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameComponentBase*>* GEEPKLAIPOC; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEITEMBASE__CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzleItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEITEMBASE_INITPUZZLEITEM_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLEITEMBASE_DISPOSE_OFFSET))(this);
		}
	};
}

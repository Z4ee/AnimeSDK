#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class LaserTurnablePuzzleInputObj; }
namespace RPG::Client::Prop { class LaserTurnablePuzzleOutputObj; }
namespace RPG::Client::Prop { class LaserTurnablePuzzleRing; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEFRAGMENT_GETOUTPUTLASER_OFFSET UNITYSDK_OFFSET(0x16118730)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEFRAGMENT_INITFRAGMENT_OFFSET UNITYSDK_OFFSET(0x16117CD0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEFRAGMENT_ISFRAGMENTMATCH_OFFSET UNITYSDK_OFFSET(0x16117FF0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEFRAGMENT_SETFRAGMENTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x161183C0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLEFRAGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x16117C50)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LaserTurnablePuzzleFragment_TypeDefinitionIndex = 78194;

	class LaserTurnablePuzzleFragment : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* CompleteTriggerCustomString; // 0x18
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::Prop::LaserTurnablePuzzleInputObj*>* InputObjs; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::Prop::LaserTurnablePuzzleOutputObj*>* OutputObjs; // 0x30
		::System::Boolean KDDCFJMGFIA; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEFRAGMENT__CTOR_OFFSET))(this);
		}

		::System::Void InitFragment(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::LaserTurnablePuzzleRing* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::LaserTurnablePuzzleRing*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEFRAGMENT_INITFRAGMENT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsFragmentMatch(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEFRAGMENT_ISFRAGMENTMATCH_OFFSET))(this, a1, a2);
		}

		::System::Void SetFragmentComplete(::System::Boolean a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEFRAGMENT_SETFRAGMENTCOMPLETE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetOutputLaser(::System::Collections::Generic::List_1<::System::Int32>*& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLEFRAGMENT_GETOUTPUTLASER_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

namespace RPG::Client::Prop { class ScenePuzzleItemBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_PROP_SCENEPUZZLEBOARDBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B06F50)
#define RPG_CLIENT_PROP_SCENEPUZZLEBOARDBASE_METHOD_6_90C7606F2C268BB2_OFFSET UNITYSDK_OFFSET(0x17B06A70)
#define RPG_CLIENT_PROP_SCENEPUZZLEBOARDBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x17B06BB0)
#define RPG_CLIENT_PROP_SCENEPUZZLEBOARDBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17B06FF0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ScenePuzzleBoardBase_TypeDefinitionIndex = 78383;

	class ScenePuzzleBoardBase : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ScenePuzzleItemBase*, ::UnityEngine::Collider*>* DNELBNCKKEE; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SCENEPUZZLEBOARDBASE__CTOR_OFFSET))(this);
		}

		::System::Void Method_6_90C7606F2C268BB2(::RPG::Client::Prop::ScenePuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ScenePuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SCENEPUZZLEBOARDBASE_METHOD_6_90C7606F2C268BB2_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SCENEPUZZLEBOARDBASE_UPDATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SCENEPUZZLEBOARDBASE_DISPOSE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class RubikCubePuzzleBlockData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16105B40)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleCubeData_TypeDefinitionIndex = 74874;

	class RubikCubePuzzleCubeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleBlockData*>* BlockStatus; // 0x10
		::UnityEngine::GameObject* Obj; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECUBEDATA__CTOR_OFFSET))(this);
		}
	};
}

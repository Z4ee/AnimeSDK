#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class LightRubikCubePuzzleBlockData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDC9E540)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LightRubikCubePuzzleCubeData_TypeDefinitionIndex = 78213;

	class LightRubikCubePuzzleCubeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::LightRubikCubePuzzleBlockData*>* BlockDatas; // 0x10
		::UnityEngine::GameObject* Obj; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECUBEDATA__CTOR_OFFSET))(this);
		}
	};
}

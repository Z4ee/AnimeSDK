#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RubikCubeFrameFace.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class LightRubikCubePuzzleConditionObjData; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1611ECC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LightRubikCubePuzzleConditionGroupData_TypeDefinitionIndex = 78208;

	class LightRubikCubePuzzleConditionGroupData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Obj; // 0x10
		::UnityEngine::GameObject* AttachCube; // 0x18
		::RPG::Client::Prop::LightRubikCubePuzzleConditionObjData* ObjectData; // 0x20
		::System::Int32 ObjectIndex; // 0x28
		::RPG::Client::Prop::RubikCubeFrameFace FaceGroup; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LIGHTRUBIKCUBEPUZZLECONDITIONGROUPDATA__CTOR_OFFSET))(this);
		}
	};
}

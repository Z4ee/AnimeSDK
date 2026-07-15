#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RubikCubeFrameFace.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEFRAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x161063B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleFrameData_TypeDefinitionIndex = 74880;

	class RubikCubePuzzleFrameData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* NewTargetStatus; // 0x10
		::UnityEngine::GameObject* Obj; // 0x18
		::UnityEngine::GameObject* AttachCubeObj; // 0x20
		::RPG::Client::Prop::RubikCubeFrameFace FaceGroup; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEFRAMEDATA__CTOR_OFFSET))(this);
		}
	};
}

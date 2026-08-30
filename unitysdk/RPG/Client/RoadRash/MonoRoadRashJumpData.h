#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::RoadRash { class MonoRoadRashJumpData_JumpLink; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHJUMPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC6ADA0)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashJumpData_TypeDefinitionIndex = 75464;

	class MonoRoadRashJumpData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RoadRash::MonoRoadRashJumpData_JumpLink*>* Links; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHJUMPDATA__CTOR_OFFSET))(this);
		}
	};
}

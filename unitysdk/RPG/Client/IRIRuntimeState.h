#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_303D5A33D1401D59;
class Class_2_8443F308FD8840B9;
namespace RPG::Client::OpenWorld { class StreamingItemData; }

#define RPG_CLIENT_IRIRUNTIMESTATE_INIT_OFFSET UNITYSDK_OFFSET(0x99370C0)
#define RPG_CLIENT_IRIRUNTIMESTATE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9937060)
#define RPG_CLIENT_IRIRUNTIMESTATE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9937000)
#define RPG_CLIENT_IRIRUNTIMESTATE_UNINIT_OFFSET UNITYSDK_OFFSET(0x9937130)
#define RPG_CLIENT_IRIRUNTIMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9937180)

namespace RPG::Client
{
	inline static constexpr unsigned int IRIRuntimeState_TypeDefinitionIndex = 56286;

	class IRIRuntimeState : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_2_8443F308FD8840B9* Field_5_0; // 0x18
		::RPG::Client::OpenWorld::StreamingItemData* Field_5_1; // 0x20
		::Class_1_303D5A33D1401D59* Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRUNTIMESTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRUNTIMESTATE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRUNTIMESTATE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_2_8443F308FD8840B9* a2, ::Class_1_303D5A33D1401D59* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_2_8443F308FD8840B9*, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRUNTIMESTATE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRUNTIMESTATE_UNINIT_OFFSET))(this);
		}
	};
}

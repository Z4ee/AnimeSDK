#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_303D5A33D1401D59;
class Class_2_250DE1D032671F25;
namespace RPG::Client::OpenWorld { class StreamingItemData; }

#define RPG_CLIENT_IRIRUNTIMESTATE_INIT_OFFSET UNITYSDK_OFFSET(0x1982FD50)
#define RPG_CLIENT_IRIRUNTIMESTATE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1982FCF0)
#define RPG_CLIENT_IRIRUNTIMESTATE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1982FC90)
#define RPG_CLIENT_IRIRUNTIMESTATE_UNINIT_OFFSET UNITYSDK_OFFSET(0x1982FDC0)
#define RPG_CLIENT_IRIRUNTIMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1982FE10)

namespace RPG::Client
{
	inline static constexpr unsigned int IRIRuntimeState_TypeDefinitionIndex = 68858;

	class IRIRuntimeState : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_2_250DE1D032671F25* BHHAMGJHDON; // 0x18
		::RPG::Client::OpenWorld::StreamingItemData* GCHGILECIEC; // 0x20
		::Class_1_303D5A33D1401D59* FKBJADHDHFO; // 0x28

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

		::System::Void Init(::RPG::Client::OpenWorld::StreamingItemData* a1, ::Class_2_250DE1D032671F25* a2, ::Class_1_303D5A33D1401D59* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_2_250DE1D032671F25*, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRUNTIMESTATE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRUNTIMESTATE_UNINIT_OFFSET))(this);
		}
	};
}

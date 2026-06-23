#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_DFC0757162C8CE99;

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUNTIMEDATA_GET_CACHEINFO_OFFSET UNITYSDK_OFFSET(0x2AB510)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUNTIMEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x79B1A0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUNTIMEDATA_SET_CACHEINFO_OFFSET UNITYSDK_OFFSET(0x7353A0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowNpcBodyNewAction_RuntimeData_TypeDefinitionIndex = 74568;

	struct alignas(8) ShowNpcBodyNewAction_RuntimeData
	{
		// static const ::System::Int32 NPC_PRIORITY = 0x3E8; // 0x0
		::System::Int32 npcid; // 0x10
		::MoleMole::HollowChessboard::RenderDataHandle animHandle; // 0x18
		::Class_1_DFC0757162C8CE99* _Cacheinfo_k__BackingField; // 0x28

		::Class_1_DFC0757162C8CE99* get_Cacheinfo()
		{
			return ((::Class_1_DFC0757162C8CE99*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUNTIMEDATA_GET_CACHEINFO_OFFSET))(this);
		}

		::System::Void set_Cacheinfo(::Class_1_DFC0757162C8CE99* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DFC0757162C8CE99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUNTIMEDATA_SET_CACHEINFO_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUNTIMEDATA_RESET_OFFSET))(this);
		}
	};
}

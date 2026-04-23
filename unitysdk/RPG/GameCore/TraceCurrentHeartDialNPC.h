#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRACECURRENTHEARTDIALNPC_METHOD_3_D0B0DD3127A9F81C_OFFSET UNITYSDK_OFFSET(0x190A0BF0)
#define RPG_GAMECORE_TRACECURRENTHEARTDIALNPC_METHOD_3_D3F9BBD0DCF7FAAD_OFFSET UNITYSDK_OFFSET(0x190A0C70)
#define RPG_GAMECORE_TRACECURRENTHEARTDIALNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x190A0C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TraceCurrentHeartDialNPC_TypeDefinitionIndex = 19658;

	class TraceCurrentHeartDialNPC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean OpenBigMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACECURRENTHEARTDIALNPC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D0B0DD3127A9F81C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TraceCurrentHeartDialNPC*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TraceCurrentHeartDialNPC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACECURRENTHEARTDIALNPC_METHOD_3_D0B0DD3127A9F81C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D3F9BBD0DCF7FAAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TraceCurrentHeartDialNPC* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TraceCurrentHeartDialNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACECURRENTHEARTDIALNPC_METHOD_3_D3F9BBD0DCF7FAAD_OFFSET))(a1, a2);
		}
	};
}

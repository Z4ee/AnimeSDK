#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA_GET_ANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x99991B0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA_GET_DELTACOIN_OFFSET UNITYSDK_OFFSET(0x99991E0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA_SET_ANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x99991D0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA_SET_DELTACOIN_OFFSET UNITYSDK_OFFSET(0x99991F0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9998760)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int GainCoinChangeData_TypeDefinitionIndex = 63284;

	class GainCoinChangeData : public ::System::Object
	{
	public:
		::System::Int32 _DeltaCoin_k__BackingField; // 0x10
		::UnityEngine::Vector3 _AnchorPosition_k__BackingField; // 0x14

		::System::Void _ctor(::UnityEngine::Transform* ancestorTransform, ::System::Int32 deltaCoin)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA__CTOR_OFFSET))(this, ancestorTransform, deltaCoin);
		}

		::UnityEngine::Vector3 get_AnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA_GET_ANCHORPOSITION_OFFSET))(this);
		}

		::System::Void set_AnchorPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA_SET_ANCHORPOSITION_OFFSET))(this, value);
		}

		::System::Int32 get_DeltaCoin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA_GET_DELTACOIN_OFFSET))(this);
		}

		::System::Void set_DeltaCoin(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA_SET_DELTACOIN_OFFSET))(this, value);
		}
	};
}

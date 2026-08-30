#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA_GET_ANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1AC22760)
#define RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA_GET_DELTACOIN_OFFSET UNITYSDK_OFFSET(0x1AC22790)
#define RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA_SET_ANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1AC22780)
#define RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA_SET_DELTACOIN_OFFSET UNITYSDK_OFFSET(0x1AC227A0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC21C70)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int GainCoinChangeData_TypeDefinitionIndex = 77355;

	class GainCoinChangeData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 _AnchorPosition_k__BackingField; // 0x10
		::System::Int32 _DeltaCoin_k__BackingField; // 0x1C

		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 get_AnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA_GET_ANCHORPOSITION_OFFSET))(this);
		}

		::System::Void set_AnchorPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA_SET_ANCHORPOSITION_OFFSET))(this, a1);
		}

		::System::Int32 get_DeltaCoin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA_GET_DELTACOIN_OFFSET))(this);
		}

		::System::Void set_DeltaCoin(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_GAINCOINCHANGEDATA_SET_DELTACOIN_OFFSET))(this, a1);
		}
	};
}

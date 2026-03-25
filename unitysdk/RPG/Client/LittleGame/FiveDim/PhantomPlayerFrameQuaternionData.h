#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PhantomPlayerFrameData_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERFRAMEQUATERNIONDATA_LERP_OFFSET UNITYSDK_OFFSET(0x1684EA50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERFRAMEQUATERNIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1684EB40)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PhantomPlayerFrameQuaternionData_TypeDefinitionIndex = 33602;

	class PhantomPlayerFrameQuaternionData : public ::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameData_1<::UnityEngine::Quaternion>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERFRAMEQUATERNIONDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion Lerp(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_PHANTOMPLAYERFRAMEQUATERNIONDATA_LERP_OFFSET))(this, a1, a2, a3);
		}
	};
}

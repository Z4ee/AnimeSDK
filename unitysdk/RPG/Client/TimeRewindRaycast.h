#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class TimeRewindAnimRaycastBind; }
namespace RPG::Client { class TimeRewindRaycastInfo; }

#define RPG_CLIENT_TIMEREWINDRAYCAST__CTOR_OFFSET UNITYSDK_OFFSET(0xB2F7130)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindRaycast_TypeDefinitionIndex = 56109;

	class TimeRewindRaycast : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::TimeRewindRaycastInfo*>* DefaultRaycastInfos; // 0x18
		::Il2CppArray<::RPG::Client::TimeRewindAnimRaycastBind*>* AnimRaycastInfos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDRAYCAST__CTOR_OFFSET))(this);
		}
	};
}

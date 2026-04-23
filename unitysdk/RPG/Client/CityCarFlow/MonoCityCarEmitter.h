#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CityCarFlow/MonoCityCarEmitter_Rule.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCAREMITTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA08DBA0)

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarEmitter_TypeDefinitionIndex = 72591;

	class MonoCityCarEmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::String*>* RoadNames; // 0x18
		::UnityEngine::Vector2 RandomRange; // 0x20
		::Il2CppArray<::RPG::Client::CityCarFlow::MonoCityCarEmitter_Rule>* Rules; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCAREMITTER__CTOR_OFFSET))(this);
		}
	};
}

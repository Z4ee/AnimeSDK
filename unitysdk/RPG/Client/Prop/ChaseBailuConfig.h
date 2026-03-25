#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class AreaDoor; }
namespace RPG::Client::Prop { class AreaEdge; }

#define RPG_CLIENT_PROP_CHASEBAILUCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA02CB80)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChaseBailuConfig_TypeDefinitionIndex = 63670;

	class ChaseBailuConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* AreaPoints; // 0x18
		::Il2CppArray<::RPG::Client::Prop::AreaEdge*>* AreaEdges; // 0x20
		::Il2CppArray<::RPG::Client::Prop::AreaDoor*>* AreaDoors; // 0x28
		::System::Int32 StartPoint; // 0x30
		::System::Int32 EndPoint; // 0x34
		::System::Single BackLaneFactor; // 0x38
		::System::Boolean DrawGizmos; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEBAILUCONFIG__CTOR_OFFSET))(this);
		}
	};
}

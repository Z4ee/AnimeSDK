#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_COLLIDERSHADERPROPERTYCONNECTION_GET_TARGETSHADERPROPERTYTRANSITION_OFFSET UNITYSDK_OFFSET(0x1A277910)
#define RPG_CLIENT_COLLIDERSHADERPROPERTYCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2779F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ColliderShaderPropertyConnection_TypeDefinitionIndex = 68823;

	class ColliderShaderPropertyConnection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* TargetRootGO; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERSHADERPROPERTYCONNECTION__CTOR_OFFSET))(this);
		}

		::RPG::Client::BaseShaderPropertyTransition* get_TargetShaderPropertyTransition()
		{
			return ((::RPG::Client::BaseShaderPropertyTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERSHADERPROPERTYCONNECTION_GET_TARGETSHADERPROPERTYTRANSITION_OFFSET))(this);
		}
	};
}

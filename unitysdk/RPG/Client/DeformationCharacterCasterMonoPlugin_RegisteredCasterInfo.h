#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_REGISTEREDCASTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCC9CF30)

namespace RPG::Client
{
	inline static constexpr unsigned int DeformationCharacterCasterMonoPlugin_RegisteredCasterInfo_TypeDefinitionIndex = 70236;

	class DeformationCharacterCasterMonoPlugin_RegisteredCasterInfo : public ::System::Object
	{
	public:
		::System::String* AttatchedBone; // 0x10
		::UnityEngine::Renderer* Renderer; // 0x18
		::System::Int32 InstanceId; // 0x20
		::System::Boolean Registered; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_REGISTEREDCASTERINFO__CTOR_OFFSET))(this);
		}
	};
}

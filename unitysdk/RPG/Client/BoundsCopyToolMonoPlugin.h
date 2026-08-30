#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_8FE15D155B05EF4E_2;

#define RPG_CLIENT_BOUNDSCOPYTOOLMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xC968CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int BoundsCopyToolMonoPlugin_TypeDefinitionIndex = 71005;

	class BoundsCopyToolMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::Class_3_8FE15D155B05EF4E_2*>
	{
	public:
		::UnityEngine::Vector3 boxCenter; // 0x30
		::UnityEngine::Vector3 boxSize; // 0x3C
		::System::Boolean keepPrefabInstance; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOUNDSCOPYTOOLMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}

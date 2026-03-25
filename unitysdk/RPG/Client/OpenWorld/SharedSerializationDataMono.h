#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class StageSceneItemSharedSerializationData; }

#define RPG_CLIENT_OPENWORLD_SHAREDSERIALIZATIONDATAMONO_APPLY_OFFSET UNITYSDK_OFFSET(0x9EAD770)
#define RPG_CLIENT_OPENWORLD_SHAREDSERIALIZATIONDATAMONO_REVERT_OFFSET UNITYSDK_OFFSET(0x9EA64E0)
#define RPG_CLIENT_OPENWORLD_SHAREDSERIALIZATIONDATAMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x9EAD810)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SharedSerializationDataMono_TypeDefinitionIndex = 60535;

	class SharedSerializationDataMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::StageSceneItemSharedSerializationData* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_SHAREDSERIALIZATIONDATAMONO__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::RPG::GameCore::StageSceneItemSharedSerializationData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageSceneItemSharedSerializationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_SHAREDSERIALIZATIONDATAMONO_APPLY_OFFSET))(this, a1);
		}

		::System::Void Revert()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_SHAREDSERIALIZATIONDATAMONO_REVERT_OFFSET))(this);
		}
	};
}

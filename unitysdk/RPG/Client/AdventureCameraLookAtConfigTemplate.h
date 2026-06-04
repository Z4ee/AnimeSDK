#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class SingleAdventureCameraLookAtConfigTemplate; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ADVENTURECAMERALOOKATCONFIGTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB22A760)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureCameraLookAtConfigTemplate_TypeDefinitionIndex = 64994;

	class AdventureCameraLookAtConfigTemplate : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SingleAdventureCameraLookAtConfigTemplate*>* AdventureCameraLookAtConfigTemplates; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTURECAMERALOOKATCONFIGTEMPLATE__CTOR_OFFSET))(this);
		}
	};
}

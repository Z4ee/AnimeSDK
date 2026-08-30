#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_OPENWORLD_MONONORMDISTANCELODTEMPLATESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD9F33F0)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int MonoNormDistanceLodTemplateSelector_TypeDefinitionIndex = 73637;

	class MonoNormDistanceLodTemplateSelector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_MONONORMDISTANCELODTEMPLATESELECTOR__CTOR_OFFSET))(this);
		}
	};
}

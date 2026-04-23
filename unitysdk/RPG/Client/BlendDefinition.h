#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class BlendDefinitionInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BLENDDEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x9E9CC30)

namespace RPG::Client
{
	inline static constexpr unsigned int BlendDefinition_TypeDefinitionIndex = 64074;

	class BlendDefinition : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BlendDefinitionInfo*>* Blends; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLENDDEFINITION__CTOR_OFFSET))(this);
		}
	};
}

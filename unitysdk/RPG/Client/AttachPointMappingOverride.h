#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AttachPointOverride; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ATTACHPOINTMAPPINGOVERRIDE_LOGICUPDATE_OFFSET UNITYSDK_OFFSET(0x9D48CB0)
#define RPG_CLIENT_ATTACHPOINTMAPPINGOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x9D48F80)

namespace RPG::Client
{
	inline static constexpr unsigned int AttachPointMappingOverride_TypeDefinitionIndex = 63032;

	class AttachPointMappingOverride : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AttachPointOverride*>* AttachPointOverrides; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPINGOVERRIDE__CTOR_OFFSET))(this);
		}

		::System::Void LogicUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPINGOVERRIDE_LOGICUPDATE_OFFSET))(this, a1);
		}
	};
}

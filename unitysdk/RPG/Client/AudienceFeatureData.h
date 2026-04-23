#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AudiencePrefabConfig; }
namespace System { class String; }

#define RPG_CLIENT_AUDIENCEFEATUREDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D49C80)
#define RPG_CLIENT_AUDIENCEFEATUREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D49D30)
#define RPG_CLIENT_AUDIENCEFEATUREDATA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D49D40)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceFeatureData_TypeDefinitionIndex = 63726;

	class AudienceFeatureData : public ::System::Object
	{
	public:
		::RPG::GameCore::NPCBodySize bodySize; // 0x10
		::Il2CppArray<::RPG::Client::AudiencePrefabConfig*>* configs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEFEATUREDATA__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEFEATUREDATA_TOSTRING_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEFEATUREDATA___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AudienceFeatureData; }
namespace System { class String; }

#define RPG_CLIENT_AUDIENCEIDENTITYDATA_METHOD_1_DB5B838B087C7494_OFFSET UNITYSDK_OFFSET(0xB33FDD0)
#define RPG_CLIENT_AUDIENCEIDENTITYDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB341BA0)
#define RPG_CLIENT_AUDIENCEIDENTITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB341BE0)
#define RPG_CLIENT_AUDIENCEIDENTITYDATA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB341BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceIdentityData_TypeDefinitionIndex = 64646;

	class AudienceIdentityData : public ::System::Object
	{
	public:
		::System::String* identityID; // 0x10
		::Il2CppArray<::RPG::Client::AudienceFeatureData*>* featureDatas; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEIDENTITYDATA__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEIDENTITYDATA_TOSTRING_OFFSET))(this);
		}

		::RPG::Client::AudienceFeatureData* Method_1_DB5B838B087C7494(::RPG::GameCore::NPCBodySize a1)
		{
			return ((::RPG::Client::AudienceFeatureData*(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEIDENTITYDATA_METHOD_1_DB5B838B087C7494_OFFSET))(this, a1);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEIDENTITYDATA___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}

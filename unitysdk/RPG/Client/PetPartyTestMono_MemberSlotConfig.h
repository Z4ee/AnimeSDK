#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_PETPARTYTESTMONO_MEMBERSLOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xDAEE020)

namespace RPG::Client
{
	inline static constexpr unsigned int PetPartyTestMono_MemberSlotConfig_TypeDefinitionIndex = 60210;

	class PetPartyTestMono_MemberSlotConfig : public ::System::Object
	{
	public:
		::System::String* UniqueName; // 0x10
		::UnityEngine::Vector3 LocalOffset; // 0x18
		::System::Single YawDegrees; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_MEMBERSLOTCONFIG__CTOR_OFFSET))(this);
		}
	};
}

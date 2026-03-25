#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define RPG_CLIENT_CHALLENGEDATA_CHALLENGEOPENRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x7C240)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeData_ChallengeOpenResult_TypeDefinitionIndex = 51190;

	struct alignas(8) ChallengeData_ChallengeOpenResult
	{
		::System::Boolean IsOpen; // 0x10
		::RPG::Client::TextID DisableHintTextID; // 0x18
		::Il2CppArray<::System::Object*>* Params; // 0x28

		::System::Void _ctor(::System::Boolean isOpen, ::RPG::Client::TextID disableHintTextID, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA_CHALLENGEOPENRESULT__CTOR_OFFSET))(this, isOpen, disableHintTextID, param);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_TRANSFEREXTRAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19899D80)

namespace RPG::Client
{
	inline static constexpr unsigned int TransferExtraInfo_TypeDefinitionIndex = 65159;

	class TransferExtraInfo : public ::System::Object
	{
	public:
		::System::Boolean FixFinalRotation; // 0x10
		::UnityEngine::Vector3 FinalRotationTarget; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFEREXTRAINFO__CTOR_OFFSET))(this);
		}
	};
}

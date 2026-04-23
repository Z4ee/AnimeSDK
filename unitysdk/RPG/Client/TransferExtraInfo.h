#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_TRANSFEREXTRAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB36D7C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TransferExtraInfo_TypeDefinitionIndex = 62856;

	class TransferExtraInfo : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 FinalRotationTarget; // 0x10
		::System::Boolean FixFinalRotation; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFEREXTRAINFO__CTOR_OFFSET))(this);
		}
	};
}

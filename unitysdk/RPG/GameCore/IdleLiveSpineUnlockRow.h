#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveSpineAnimTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVESPINEUNLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D215920)
#define RPG_GAMECORE_IDLELIVESPINEUNLOCKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D215A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSpineUnlockRow_TypeDefinitionIndex = 11799;

	class IdleLiveSpineUnlockRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockID; // 0x10
		::RPG::GameCore::IdleLiveSpineAnimTriggerType TriggerType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPINEUNLOCKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveSpineUnlockRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveSpineUnlockRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPINEUNLOCKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

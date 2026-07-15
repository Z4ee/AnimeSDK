#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEAVATARUPGRADECOSTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B692AE0)
#define RPG_GAMECORE_IDLELIVEAVATARUPGRADECOSTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B692C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAvatarUpgradeCostRow_TypeDefinitionIndex = 11271;

	class IdleLiveAvatarUpgradeCostRow : public ::System::Object
	{
	public:
		::System::UInt32 Cost; // 0x10
		::System::UInt32 Level; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARUPGRADECOSTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveAvatarUpgradeCostRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveAvatarUpgradeCostRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARUPGRADECOSTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

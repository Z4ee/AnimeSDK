#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEAVATARUPGRADECOSTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A0DF90)
#define RPG_GAMECORE_IDLELIVEAVATARUPGRADECOSTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0E0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAvatarUpgradeCostRow_TypeDefinitionIndex = 11123;

	class IdleLiveAvatarUpgradeCostRow : public ::System::Object
	{
	public:
		::System::UInt32 Cost; // 0x10
		::System::UInt32 Level; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARUPGRADECOSTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveAvatarUpgradeCostRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveAvatarUpgradeCostRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARUPGRADECOSTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

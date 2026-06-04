#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ILELITEGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1983EF80)
#define RPG_GAMECORE_ILELITEGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1983F1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILEliteGroupConfigRow_TypeDefinitionIndex = 13155;

	class ILEliteGroupConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 EliteGroup; // 0x10
		::RPG::GameCore::FixPoint AttackRatio; // 0x18
		::RPG::GameCore::FixPoint HPRatio; // 0x20
		::RPG::GameCore::FixPoint DefenceRatio; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILELITEGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ILEliteGroupConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILEliteGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILELITEGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

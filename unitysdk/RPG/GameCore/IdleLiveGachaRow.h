#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEGACHAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D74E240)
#define RPG_GAMECORE_IDLELIVEGACHAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D74E5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveGachaRow_TypeDefinitionIndex = 11772;

	class IdleLiveGachaRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* WorldTagList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* StarProbabilityList; // 0x18
		::System::UInt32 GachaID; // 0x20
		::System::UInt32 UpgradeCount; // 0x24
		::RPG::Client::TextID GachaName; // 0x28
		::System::Boolean IsAvatarGroupUp; // 0x38
		::System::Boolean IsStarUp; // 0x39
		::RPG::GameCore::FixPoint CrystalProbability; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGACHAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveGachaRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveGachaRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGACHAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

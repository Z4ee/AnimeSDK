#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C2E7A40)
#define RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E8090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingBreakBuffSelectConfigRow_TypeDefinitionIndex = 12814;

	class BoxingBreakBuffSelectConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x10
		::System::UInt32 BoxingClubBuffID; // 0x18
		::RPG::GameCore::AttackDamageType BoxingClubNatureType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoxingBreakBuffSelectConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoxingBreakBuffSelectConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGBREAKBUFFSELECTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

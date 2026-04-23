#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHENLINGENEMYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187EA890)
#define RPG_GAMECORE_CHENLINGENEMYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187EAD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingEnemyRow_TypeDefinitionIndex = 10603;

	class ChenLingEnemyRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EnchantList; // 0x10
		::RPG::GameCore::FixPoint AtkSpdRatio; // 0x18
		::RPG::GameCore::FixPoint HpRatio; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 Level; // 0x2C
		::RPG::GameCore::FixPoint CrtRatio; // 0x30
		::System::Boolean IsPromotion; // 0x38
		::System::UInt32 SoldierID; // 0x3C
		::RPG::GameCore::FixPoint AtkRatio; // 0x40
		::RPG::GameCore::FixPoint CrtDMGRatio; // 0x48
		::System::UInt32 GridIndex; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENEMYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingEnemyRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingEnemyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENEMYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

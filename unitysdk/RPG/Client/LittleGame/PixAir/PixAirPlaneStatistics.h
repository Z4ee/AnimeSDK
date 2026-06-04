#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::PixAir { class PixAirEquipStatistics; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS_GETEQUIPSTATSSORTEDBYUSECOUNT_OFFSET UNITYSDK_OFFSET(0x18CDC840)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS_GETORCREATEEQUIPSTATS_OFFSET UNITYSDK_OFFSET(0x18CDC6D0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDCAC0)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirPlaneStatistics_TypeDefinitionIndex = 40259;

	class PixAirPlaneStatistics : public ::System::Object
	{
	public:
		::System::String* ModelPath; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics*>* EquipStatistics; // 0x18
		::System::Int32 FinalBurnStacks; // 0x20
		::RPG::GameCore::FixPoint FinalShield; // 0x28
		::RPG::GameCore::FixPoint FinalHp; // 0x30
		::RPG::GameCore::FixPoint InitialHp; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS__CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics* GetOrCreateEquipStats(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS_GETORCREATEEQUIPSTATS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics*>* GetEquipStatsSortedByUseCount()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS_GETEQUIPSTATSSORTEDBYUSECOUNT_OFFSET))(this);
		}
	};
}

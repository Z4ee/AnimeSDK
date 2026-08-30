#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_CLAMPSTATISTICVALUE_OFFSET UNITYSDK_OFFSET(0x1C4997F0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_GET_TOTALDIRECTDAMAGE_OFFSET UNITYSDK_OFFSET(0x1C499750)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_GET_TOTALHASTEDURATIONAPPLIED_OFFSET UNITYSDK_OFFSET(0x1C499AB0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_GET_TOTALJAMDURATIONAPPLIED_OFFSET UNITYSDK_OFFSET(0x1C499A10)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_GET_TOTALSHIELDGENERATED_OFFSET UNITYSDK_OFFSET(0x1C499970)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_SET_TOTALDIRECTDAMAGE_OFFSET UNITYSDK_OFFSET(0x1C499760)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_SET_TOTALHASTEDURATIONAPPLIED_OFFSET UNITYSDK_OFFSET(0x1C499AC0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_SET_TOTALJAMDURATIONAPPLIED_OFFSET UNITYSDK_OFFSET(0x1C499A20)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_SET_TOTALSHIELDGENERATED_OFFSET UNITYSDK_OFFSET(0x1C499980)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C499B60)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C499B50)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirEquipStatistics_TypeDefinitionIndex = 42033;

	class PixAirEquipStatistics : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint* StaticGet_MaxStatisticValue()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipStatistics_TypeDefinitionIndex)->GetStaticField(0x105B0);
		}
		::RPG::GameCore::FixPoint _totalDirectDamage; // 0x10
		::RPG::GameCore::FixPoint _totalHasteDurationApplied; // 0x18
		::RPG::GameCore::FixPoint _totalShieldGenerated; // 0x20
		::System::Int32 EquipmentID; // 0x28
		::System::Int32 UseCount; // 0x2C
		::RPG::GameCore::FixPoint _totalJamDurationApplied; // 0x30
		::System::Int32 SlotIndex; // 0x38
		::System::Int32 EntityRuntimeID; // 0x3C
		::System::Int32 TotalBurnStacksAdded; // 0x40
		::System::UInt32 EquipLevel; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS__CCTOR_OFFSET))();
		}

		::RPG::GameCore::FixPoint get_TotalDirectDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_GET_TOTALDIRECTDAMAGE_OFFSET))(this);
		}

		::System::Void set_TotalDirectDamage(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_SET_TOTALDIRECTDAMAGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_TotalShieldGenerated()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_GET_TOTALSHIELDGENERATED_OFFSET))(this);
		}

		::System::Void set_TotalShieldGenerated(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_SET_TOTALSHIELDGENERATED_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_TotalJamDurationApplied()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_GET_TOTALJAMDURATIONAPPLIED_OFFSET))(this);
		}

		::System::Void set_TotalJamDurationApplied(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_SET_TOTALJAMDURATIONAPPLIED_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_TotalHasteDurationApplied()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_GET_TOTALHASTEDURATIONAPPLIED_OFFSET))(this);
		}

		::System::Void set_TotalHasteDurationApplied(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_SET_TOTALHASTEDURATIONAPPLIED_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::FixPoint ClampStatisticValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_CLAMPSTATISTICVALUE_OFFSET))(a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::PixAir { class PixAirEquipStatistics; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C594410)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C594450)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS___C__GETEQUIPSTATSSORTEDBYUSECOUNT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1C594460)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirPlaneStatistics___c_TypeDefinitionIndex = 41075;

	class PixAirPlaneStatistics___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirPlaneStatistics___c_TypeDefinitionIndex)->GetStaticField(0x4AF90);
		}
		static ::System::Comparison_1<::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics*>**)Il2CppClass::FromTypeDefinitionIndex(PixAirPlaneStatistics___c_TypeDefinitionIndex)->GetStaticField(0x4AF98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetEquipStatsSortedByUseCount_b__7_0(::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics* a1, ::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics*, ::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS___C__GETEQUIPSTATSSORTEDBYUSECOUNT_B__7_0_OFFSET))(this, a1, a2);
		}
	};
}

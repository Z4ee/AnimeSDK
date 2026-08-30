#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2HashSet.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2ADDKEYHAVECAPACITY_OFFSET UNITYSDK_OFFSET(0x1C788F80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2ADDKEY_OFFSET UNITYSDK_OFFSET(0x1C789270)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2CLEARSET_OFFSET UNITYSDK_OFFSET(0x1C788E70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1C7891C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2CREATESET_OFFSET UNITYSDK_OFFSET(0x1C788D70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2DESTROYSET_OFFSET UNITYSDK_OFFSET(0x1C788E20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2FINDSLOT_OFFSET UNITYSDK_OFFSET(0x1C788F10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2GETHASHSETBYTES_OFFSET UNITYSDK_OFFSET(0x1C7893B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2GETSETCAPACITY_OFFSET UNITYSDK_OFFSET(0x1C789400)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2GETSETCOUNT_OFFSET UNITYSDK_OFFSET(0x1C7893F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2GROWTABLE_OFFSET UNITYSDK_OFFSET(0x1C789000)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2KEYHASH_OFFSET UNITYSDK_OFFSET(0x1C788ED0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2REMOVEKEY_OFFSET UNITYSDK_OFFSET(0x1C789410)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2_SHAPE_PAIR_KEY_OFFSET UNITYSDK_OFFSET(0x1C788D50)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Tables_TypeDefinitionIndex = 36103;

	class B2Tables : public ::System::Object
	{
	public:
		static ::System::UInt64 B2_SHAPE_PAIR_KEY(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::UInt64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2_SHAPE_PAIR_KEY_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet b2CreateSet(::System::Int32 a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2CREATESET_OFFSET))(a1);
		}

		static ::System::Void b2DestroySet(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet& a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2DESTROYSET_OFFSET))(a1);
		}

		static ::System::Void b2ClearSet(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet& a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2CLEARSET_OFFSET))(a1);
		}

		static ::System::UInt32 b2KeyHash(::System::UInt64 a1)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2KEYHASH_OFFSET))(a1);
		}

		static ::System::Int32 b2FindSlot(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet& a1, ::System::UInt64 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet&, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2FINDSLOT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2AddKeyHaveCapacity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet& a1, ::System::UInt64 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet&, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2ADDKEYHAVECAPACITY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2GrowTable(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet& a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2GROWTABLE_OFFSET))(a1);
		}

		static ::System::Boolean b2ContainsKey(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet& a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet&, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2CONTAINSKEY_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2AddKey(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet& a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet&, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2ADDKEY_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2GetHashSetBytes(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet& a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2GETHASHSETBYTES_OFFSET))(a1);
		}

		static ::System::Int32 b2GetSetCount(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet& a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2GETSETCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 b2GetSetCapacity(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet& a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2GETSETCAPACITY_OFFSET))(a1);
		}

		static ::System::Boolean b2RemoveKey(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet& a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2HashSet&, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TABLES_B2REMOVEKEY_OFFSET))(a1, a2);
		}
	};
}

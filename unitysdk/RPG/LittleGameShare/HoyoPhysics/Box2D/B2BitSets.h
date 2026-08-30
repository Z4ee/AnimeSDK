#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BitSet.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2CLEARBIT_OFFSET UNITYSDK_OFFSET(0xC2C93C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2COUNTSETBITS_OFFSET UNITYSDK_OFFSET(0xC2C9720)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2CREATEBITSET_1_OFFSET UNITYSDK_OFFSET(0xC2C94E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2CREATEBITSET_OFFSET UNITYSDK_OFFSET(0xC2C9460)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2DESTROYBITSET_OFFSET UNITYSDK_OFFSET(0xC2C95A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2GETBITSETBYTES_OFFSET UNITYSDK_OFFSET(0xC2C9450)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2GETBIT_OFFSET UNITYSDK_OFFSET(0xC2C9400)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2GROWBITSET_OFFSET UNITYSDK_OFFSET(0xC2C9250)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2INPLACEUNION_OFFSET UNITYSDK_OFFSET(0xC2C9810)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2SETBITCOUNTANDCLEAR_OFFSET UNITYSDK_OFFSET(0xC2C95F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2SETBITGROW_OFFSET UNITYSDK_OFFSET(0xC2C91F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2SETBIT_OFFSET UNITYSDK_OFFSET(0xC2C91B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS__CUSTOMFILL_OFFSET UNITYSDK_OFFSET(0xC2C9550)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2BitSets_TypeDefinitionIndex = 35900;

	class B2BitSets : public ::System::Object
	{
	public:
		static ::System::Void b2SetBit(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2SETBIT_OFFSET))(a1, a2);
		}

		static ::System::Void b2SetBitGrow(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2SETBITGROW_OFFSET))(a1, a2);
		}

		static ::System::Void b2ClearBit(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet& a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet&, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2CLEARBIT_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2GetBit(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet& a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2GETBIT_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2GetBitSetBytes(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet& a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2GETBITSETBYTES_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet b2CreateBitSet(::System::Int32 a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2CREATEBITSET_OFFSET))(a1);
		}

		static ::System::Void b2CreateBitSet_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2CREATEBITSET_1_OFFSET))(a1, a2);
		}

		static ::System::Void b2DestroyBitSet(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet& a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2DESTROYBITSET_OFFSET))(a1);
		}

		static ::System::Void b2SetBitCountAndClear(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2SETBITCOUNTANDCLEAR_OFFSET))(a1, a2);
		}

		static ::System::Void b2GrowBitSet(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2GROWBITSET_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2CountSetBits(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet& a1)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2COUNTSETBITS_OFFSET))(a1);
		}

		static ::System::Void b2InPlaceUnion(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet& a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet& a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet&, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS_B2INPLACEUNION_OFFSET))(a1, a2);
		}

		static ::System::Void _CustomFill(::Il2CppArray<::System::UInt64>* a1, ::System::Int32 a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt64>*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BITSETS__CUSTOMFILL_OFFSET))(a1, a2, a3);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyStateW.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FloatW.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2RotW.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2W.h"
#include "unitysdk/System/Numerics/Vector_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BodyState; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2StepContext; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ADDW_1_OFFSET UNITYSDK_OFFSET(0x1C2C0920)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ADDW_OFFSET UNITYSDK_OFFSET(0x1C2BF510)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ALLZEROW_1_OFFSET UNITYSDK_OFFSET(0x1C2C0B90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ALLZEROW_OFFSET UNITYSDK_OFFSET(0x1C2C07A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2APPLYOVERFLOWRESTITUTION_OFFSET UNITYSDK_OFFSET(0x1C2BE590)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2APPLYRESTITUTIONTASK_OFFSET UNITYSDK_OFFSET(0x1C2C5EB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2BLENDW_1_OFFSET UNITYSDK_OFFSET(0x1C2C0BD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2BLENDW_OFFSET UNITYSDK_OFFSET(0x1C2C0550)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2CROSSW_OFFSET UNITYSDK_OFFSET(0x1C2C0C60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2DOTW_OFFSET UNITYSDK_OFFSET(0x1C2C0C40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2EQUALSW_1_OFFSET UNITYSDK_OFFSET(0x1C2C0B70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2EQUALSW_OFFSET UNITYSDK_OFFSET(0x1C2C02B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GATHERBODIES_OFFSET UNITYSDK_OFFSET(0x1C2C0CC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GETCONTACTCONSTRAINTSIMDBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1C2C0CB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GREATERTHANW_1_OFFSET UNITYSDK_OFFSET(0x1C2C0B50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GREATERTHANW_OFFSET UNITYSDK_OFFSET(0x1C2C0010)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MAXW_1_OFFSET UNITYSDK_OFFSET(0x1C2C09E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MAXW_OFFSET UNITYSDK_OFFSET(0x1C2BF960)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MINW_1_OFFSET UNITYSDK_OFFSET(0x1C2C09C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MINW_OFFSET UNITYSDK_OFFSET(0x1C2BF8C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULADDW_1_OFFSET UNITYSDK_OFFSET(0x1C2C0980)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULADDW_OFFSET UNITYSDK_OFFSET(0x1C2BF6F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULSUBW_1_OFFSET UNITYSDK_OFFSET(0x1C2C09A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULSUBW_OFFSET UNITYSDK_OFFSET(0x1C2BF7D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULW_1_OFFSET UNITYSDK_OFFSET(0x1C2C0960)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULW_OFFSET UNITYSDK_OFFSET(0x1C2BF650)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ORW_1_OFFSET UNITYSDK_OFFSET(0x1C2C0AA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ORW_OFFSET UNITYSDK_OFFSET(0x1C2BFBB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2PREPARECONTACTSTASK_OFFSET UNITYSDK_OFFSET(0x1C2C13F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2PREPAREOVERFLOWCONTACTS_OFFSET UNITYSDK_OFFSET(0x1C2BC420)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ROTATEVECTORW_OFFSET UNITYSDK_OFFSET(0x1C2C0C80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SCATTERBODIES_OFFSET UNITYSDK_OFFSET(0x1C2C11D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SOLVECONTACTSTASK_OFFSET UNITYSDK_OFFSET(0x1C2C4F50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SOLVEOVERFLOWCONTACTS_OFFSET UNITYSDK_OFFSET(0x1C2BD6E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SPLATW_OFFSET UNITYSDK_OFFSET(0x1C2C0910)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2STOREIMPULSESTASK_OFFSET UNITYSDK_OFFSET(0x1C2C6720)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2STOREOVERFLOWIMPULSES_OFFSET UNITYSDK_OFFSET(0x1C2BEE60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SUBW_1_OFFSET UNITYSDK_OFFSET(0x1C2C0940)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SUBW_OFFSET UNITYSDK_OFFSET(0x1C2BF5B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SYMCLAMPW_1_OFFSET UNITYSDK_OFFSET(0x1C2C0A00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SYMCLAMPW_OFFSET UNITYSDK_OFFSET(0x1C2BFA00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2WARMSTARTCONTACTSTASK_OFFSET UNITYSDK_OFFSET(0x1C2C4970)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2WARMSTARTOVERFLOWCONTACTS_OFFSET UNITYSDK_OFFSET(0x1C2BCED0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ZEROW_OFFSET UNITYSDK_OFFSET(0x1C2C08E0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ContactSolvers_TypeDefinitionIndex = 35945;

	class B2ContactSolvers : public ::System::Object
	{
	public:
		static ::System::Void b2PrepareOverflowContacts(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2PREPAREOVERFLOWCONTACTS_OFFSET))(a1);
		}

		static ::System::Void b2WarmStartOverflowContacts(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2WARMSTARTOVERFLOWCONTACTS_OFFSET))(a1);
		}

		static ::System::Void b2SolveOverflowContacts(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SOLVEOVERFLOWCONTACTS_OFFSET))(a1, a2);
		}

		static ::System::Void b2ApplyOverflowRestitution(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2APPLYOVERFLOWRESTITUTION_OFFSET))(a1);
		}

		static ::System::Void b2StoreOverflowImpulses(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2STOREOVERFLOWIMPULSES_OFFSET))(a1);
		}

		static ::System::Numerics::Vector_1<::System::Single> b2AddW(::System::Numerics::Vector_1<::System::Single> a1, ::System::Numerics::Vector_1<::System::Single> a2)
		{
			return ((::System::Numerics::Vector_1<::System::Single>(*)(::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ADDW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector_1<::System::Single> b2SubW(::System::Numerics::Vector_1<::System::Single> a1, ::System::Numerics::Vector_1<::System::Single> a2)
		{
			return ((::System::Numerics::Vector_1<::System::Single>(*)(::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SUBW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector_1<::System::Single> b2MulW(::System::Numerics::Vector_1<::System::Single> a1, ::System::Numerics::Vector_1<::System::Single> a2)
		{
			return ((::System::Numerics::Vector_1<::System::Single>(*)(::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector_1<::System::Single> b2MulAddW(::System::Numerics::Vector_1<::System::Single> a1, ::System::Numerics::Vector_1<::System::Single> a2, ::System::Numerics::Vector_1<::System::Single> a3)
		{
			return ((::System::Numerics::Vector_1<::System::Single>(*)(::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULADDW_OFFSET))(a1, a2, a3);
		}

		static ::System::Numerics::Vector_1<::System::Single> b2MulSubW(::System::Numerics::Vector_1<::System::Single> a1, ::System::Numerics::Vector_1<::System::Single> a2, ::System::Numerics::Vector_1<::System::Single> a3)
		{
			return ((::System::Numerics::Vector_1<::System::Single>(*)(::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULSUBW_OFFSET))(a1, a2, a3);
		}

		static ::System::Numerics::Vector_1<::System::Single> b2MinW(::System::Numerics::Vector_1<::System::Single> a1, ::System::Numerics::Vector_1<::System::Single> a2)
		{
			return ((::System::Numerics::Vector_1<::System::Single>(*)(::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MINW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector_1<::System::Single> b2MaxW(::System::Numerics::Vector_1<::System::Single> a1, ::System::Numerics::Vector_1<::System::Single> a2)
		{
			return ((::System::Numerics::Vector_1<::System::Single>(*)(::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MAXW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector_1<::System::Single> b2SymClampW(::System::Numerics::Vector_1<::System::Single> a1, ::System::Numerics::Vector_1<::System::Single> a2)
		{
			return ((::System::Numerics::Vector_1<::System::Single>(*)(::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SYMCLAMPW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector_1<::System::Single> b2OrW(::System::Numerics::Vector_1<::System::Single> a1, ::System::Numerics::Vector_1<::System::Single> a2)
		{
			return ((::System::Numerics::Vector_1<::System::Single>(*)(::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ORW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector_1<::System::Single> b2GreaterThanW(::System::Numerics::Vector_1<::System::Single> a1, ::System::Numerics::Vector_1<::System::Single> a2)
		{
			return ((::System::Numerics::Vector_1<::System::Single>(*)(::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GREATERTHANW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector_1<::System::Single> b2EqualsW(::System::Numerics::Vector_1<::System::Single> a1, ::System::Numerics::Vector_1<::System::Single> a2)
		{
			return ((::System::Numerics::Vector_1<::System::Single>(*)(::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2EQUALSW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector_1<::System::Single> b2BlendW(::System::Numerics::Vector_1<::System::Single> a1, ::System::Numerics::Vector_1<::System::Single> a2, ::System::Numerics::Vector_1<::System::Single> a3)
		{
			return ((::System::Numerics::Vector_1<::System::Single>(*)(::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>, ::System::Numerics::Vector_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2BLENDW_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean b2AllZeroW(::System::Numerics::Vector_1<::System::Single> a1)
		{
			return ((::System::Boolean(*)(::System::Numerics::Vector_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ALLZEROW_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2ZeroW()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ZEROW_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2SplatW(::System::Single a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SPLATW_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2AddW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ADDW_1_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2SubW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SUBW_1_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2MulW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULW_1_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2MulAddW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULADDW_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2MulSubW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULSUBW_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2MinW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MINW_1_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2MaxW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MAXW_1_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2SymClampW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SYMCLAMPW_1_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2OrW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ORW_1_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2GreaterThanW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GREATERTHANW_1_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2EqualsW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2EQUALSW_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2AllZeroW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ALLZEROW_1_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2BlendW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2BLENDW_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2DotW(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2DOTW_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2CrossW(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2CROSSW_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W b2RotateVectorW(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RotW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RotW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ROTATEVECTORW_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2GetContactConstraintSIMDByteCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GETCONTACTCONSTRAINTSIMDBYTECOUNT_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyStateW b2GatherBodies(::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState*>* a1, ::System::ReadOnlySpan_1<::System::Int32> a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyStateW(*)(::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState*>*, ::System::ReadOnlySpan_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GATHERBODIES_OFFSET))(a1, a2);
		}

		static ::System::Void b2ScatterBodies(::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState*>* a1, ::System::ReadOnlySpan_1<::System::Int32> a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyStateW& a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState*>*, ::System::ReadOnlySpan_1<::System::Int32>, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyStateW&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SCATTERBODIES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2PrepareContactsTask(::System::Int32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2PREPARECONTACTSTASK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2WarmStartContactsTask(::System::Int32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2WARMSTARTCONTACTSTASK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2SolveContactsTask(::System::Int32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SOLVECONTACTSTASK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void b2ApplyRestitutionTask(::System::Int32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2APPLYRESTITUTIONTASK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2StoreImpulsesTask(::System::Int32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2STOREIMPULSESTASK_OFFSET))(a1, a2, a3);
		}
	};
}

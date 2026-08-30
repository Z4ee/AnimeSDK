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

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ADDW_1_OFFSET UNITYSDK_OFFSET(0xC2DF420)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ADDW_OFFSET UNITYSDK_OFFSET(0xC2DE010)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ALLZEROW_1_OFFSET UNITYSDK_OFFSET(0xC2DF690)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ALLZEROW_OFFSET UNITYSDK_OFFSET(0xC2DF2A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2APPLYOVERFLOWRESTITUTION_OFFSET UNITYSDK_OFFSET(0xC2DD090)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2APPLYRESTITUTIONTASK_OFFSET UNITYSDK_OFFSET(0xC2E49D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2BLENDW_1_OFFSET UNITYSDK_OFFSET(0xC2DF6D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2BLENDW_OFFSET UNITYSDK_OFFSET(0xC2DF050)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2CROSSW_OFFSET UNITYSDK_OFFSET(0xC2DF760)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2DOTW_OFFSET UNITYSDK_OFFSET(0xC2DF740)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2EQUALSW_1_OFFSET UNITYSDK_OFFSET(0xC2DF670)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2EQUALSW_OFFSET UNITYSDK_OFFSET(0xC2DEDB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GATHERBODIES_OFFSET UNITYSDK_OFFSET(0xC2DF7C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GETCONTACTCONSTRAINTSIMDBYTECOUNT_OFFSET UNITYSDK_OFFSET(0xC2DF7B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GREATERTHANW_1_OFFSET UNITYSDK_OFFSET(0xC2DF650)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GREATERTHANW_OFFSET UNITYSDK_OFFSET(0xC2DEB10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MAXW_1_OFFSET UNITYSDK_OFFSET(0xC2DF4E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MAXW_OFFSET UNITYSDK_OFFSET(0xC2DE460)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MINW_1_OFFSET UNITYSDK_OFFSET(0xC2DF4C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MINW_OFFSET UNITYSDK_OFFSET(0xC2DE3C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULADDW_1_OFFSET UNITYSDK_OFFSET(0xC2DF480)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULADDW_OFFSET UNITYSDK_OFFSET(0xC2DE1F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULSUBW_1_OFFSET UNITYSDK_OFFSET(0xC2DF4A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULSUBW_OFFSET UNITYSDK_OFFSET(0xC2DE2D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULW_1_OFFSET UNITYSDK_OFFSET(0xC2DF460)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULW_OFFSET UNITYSDK_OFFSET(0xC2DE150)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ORW_1_OFFSET UNITYSDK_OFFSET(0xC2DF5A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ORW_OFFSET UNITYSDK_OFFSET(0xC2DE6B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2PREPARECONTACTSTASK_OFFSET UNITYSDK_OFFSET(0xC2DFEF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2PREPAREOVERFLOWCONTACTS_OFFSET UNITYSDK_OFFSET(0xC2DAF10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ROTATEVECTORW_OFFSET UNITYSDK_OFFSET(0xC2DF780)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SCATTERBODIES_OFFSET UNITYSDK_OFFSET(0xC2DFCD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SOLVECONTACTSTASK_OFFSET UNITYSDK_OFFSET(0xC2E3A70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SOLVEOVERFLOWCONTACTS_OFFSET UNITYSDK_OFFSET(0xC2DC1E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SPLATW_OFFSET UNITYSDK_OFFSET(0xC2DF410)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2STOREIMPULSESTASK_OFFSET UNITYSDK_OFFSET(0xC2E5240)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2STOREOVERFLOWIMPULSES_OFFSET UNITYSDK_OFFSET(0xC2DD960)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SUBW_1_OFFSET UNITYSDK_OFFSET(0xC2DF440)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SUBW_OFFSET UNITYSDK_OFFSET(0xC2DE0B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SYMCLAMPW_1_OFFSET UNITYSDK_OFFSET(0xC2DF500)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SYMCLAMPW_OFFSET UNITYSDK_OFFSET(0xC2DE500)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2WARMSTARTCONTACTSTASK_OFFSET UNITYSDK_OFFSET(0xC2E3490)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2WARMSTARTOVERFLOWCONTACTS_OFFSET UNITYSDK_OFFSET(0xC2DB9C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ZEROW_OFFSET UNITYSDK_OFFSET(0xC2DF3E0)

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

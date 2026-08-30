#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2QueryPairContext.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BroadPhase; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2BROADPHASE_CREATEPROXY_OFFSET UNITYSDK_OFFSET(0x1C2AC190)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2BROADPHASE_DESTROYPROXY_OFFSET UNITYSDK_OFFSET(0x1C2AC3C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2BROADPHASE_ENLARGEPROXY_OFFSET UNITYSDK_OFFSET(0x1C2AC750)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2BROADPHASE_GETSHAPEINDEX_OFFSET UNITYSDK_OFFSET(0x1C2AEC90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2BROADPHASE_MOVEPROXY_OFFSET UNITYSDK_OFFSET(0x1C2AC580)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2BROADPHASE_REBUILDTREES_OFFSET UNITYSDK_OFFSET(0x1C2AE750)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2BROADPHASE_TESTOVERLAP_OFFSET UNITYSDK_OFFSET(0x1C2AE5A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2BUFFERMOVE_OFFSET UNITYSDK_OFFSET(0x1C2AAFB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2CREATEBROADPHASE_OFFSET UNITYSDK_OFFSET(0x1C2AB040)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2DESTROYBROADPHASE_OFFSET UNITYSDK_OFFSET(0x1C2ABC20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2FINDPAIRSTASK_OFFSET UNITYSDK_OFFSET(0x1C2AD0D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2PAIRQUERYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C2AC9E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2UNBUFFERMOVE_OFFSET UNITYSDK_OFFSET(0x1C2AC110)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2UPDATEBROADPHASEPAIRS_OFFSET UNITYSDK_OFFSET(0x1C2AD570)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2VALIDATEBROADPHASE_OFFSET UNITYSDK_OFFSET(0x1C2AED40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2VALIDATENOENLARGED_OFFSET UNITYSDK_OFFSET(0x1C2AEDE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2_PROXY_ID_OFFSET UNITYSDK_OFFSET(0x1C2AAF90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2_PROXY_KEY_OFFSET UNITYSDK_OFFSET(0x1C2AAFA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2_PROXY_TYPE_OFFSET UNITYSDK_OFFSET(0x1C2AAF80)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2BoardPhases_TypeDefinitionIndex = 35901;

	class B2BoardPhases : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType B2_PROXY_TYPE(::System::Int32 a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2_PROXY_TYPE_OFFSET))(a1);
		}

		static ::System::Int32 B2_PROXY_ID(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2_PROXY_ID_OFFSET))(a1);
		}

		static ::System::Int32 B2_PROXY_KEY(::System::Int32 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2_PROXY_KEY_OFFSET))(a1, a2);
		}

		static ::System::Void b2BufferMove(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2BUFFERMOVE_OFFSET))(a1, a2);
		}

		static ::System::Void b2CreateBroadPhase(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase*& a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase*&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2CREATEBROADPHASE_OFFSET))(a1);
		}

		static ::System::Void b2DestroyBroadPhase(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2DESTROYBROADPHASE_OFFSET))(a1);
		}

		static ::System::Void b2UnBufferMove(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2UNBUFFERMOVE_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2BroadPhase_CreateProxy(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a3, ::System::UInt64 a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB, ::System::UInt64, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2BROADPHASE_CREATEPROXY_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void b2BroadPhase_DestroyProxy(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2BROADPHASE_DESTROYPROXY_OFFSET))(a1, a2);
		}

		static ::System::Void b2BroadPhase_MoveProxy(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase*, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2BROADPHASE_MOVEPROXY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2BroadPhase_EnlargeProxy(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase*, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2BROADPHASE_ENLARGEPROXY_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean b2PairQueryCallback(::System::Int32 a1, ::System::UInt64 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryPairContext& a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt64, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2QueryPairContext&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2PAIRQUERYCALLBACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2FindPairsTask(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2FINDPAIRSTASK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2UpdateBroadPhasePairs(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2UPDATEBROADPHASEPAIRS_OFFSET))(a1);
		}

		static ::System::Boolean b2BroadPhase_TestOverlap(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2BROADPHASE_TESTOVERLAP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2BroadPhase_RebuildTrees(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2BROADPHASE_REBUILDTREES_OFFSET))(a1);
		}

		static ::System::Int32 b2BroadPhase_GetShapeIndex(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2BROADPHASE_GETSHAPEINDEX_OFFSET))(a1, a2);
		}

		static ::System::Void b2ValidateBroadphase(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2VALIDATEBROADPHASE_OFFSET))(a1);
		}

		static ::System::Void b2ValidateNoEnlarged(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BOARDPHASES_B2VALIDATENOENLARGED_OFFSET))(a1);
		}
	};
}

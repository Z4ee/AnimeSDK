#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContinuousContext.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Softness.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2SolverBlock; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2SolverStage; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2StepContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2TaskContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2BULLETBODYTASK_OFFSET UNITYSDK_OFFSET(0x1C7846F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2CONTINUOUSQUERYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C780980)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2EXECUTEBLOCK_OFFSET UNITYSDK_OFFSET(0x1C782E30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2EXECUTEMAINSTAGE_OFFSET UNITYSDK_OFFSET(0x1C783460)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2EXECUTESTAGE_OFFSET UNITYSDK_OFFSET(0x1C7831D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2FINALIZEBODIESTASK_OFFSET UNITYSDK_OFFSET(0x1C782170)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2INTEGRATEPOSITIONSTASK_OFFSET UNITYSDK_OFFSET(0x1C780750)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2INTEGRATEVELOCITIESTASK_OFFSET UNITYSDK_OFFSET(0x1C77FF00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2MAKESOFT_OFFSET UNITYSDK_OFFSET(0x1C77FE70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2PAUSE_OFFSET UNITYSDK_OFFSET(0x1C77FEE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2PREPAREJOINTSTASK_OFFSET UNITYSDK_OFFSET(0x1C780400)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2SIMDSHIFT_OFFSET UNITYSDK_OFFSET(0x1C77FE60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2SOLVECONTINUOUS_OFFSET UNITYSDK_OFFSET(0x1C781350)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2SOLVEJOINTSTASK_OFFSET UNITYSDK_OFFSET(0x1C780500)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2SOLVERTASK_OFFSET UNITYSDK_OFFSET(0x1C7835D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2SOLVE_OFFSET UNITYSDK_OFFSET(0x1C784800)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2WARMSTARTJOINTSTASK_OFFSET UNITYSDK_OFFSET(0x1C780460)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_GETWORKERSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x1C783160)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C788D10)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Solvers_TypeDefinitionIndex = 36095;

	class B2Solvers : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_B2_SIMD_SHIFT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(B2Solvers_TypeDefinitionIndex)->GetStaticField(0xCC70);
		}
		// static const ::System::Int32 ITERATIONS = 0x1; // 0x0
		// static const ::System::Int32 RELAX_ITERATIONS = 0x1; // 0x0
		// static const ::System::Single B2_CORE_FRACTION; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS__CCTOR_OFFSET))();
		}

		static ::System::Int32 b2SIMDShift()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2SIMDSHIFT_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness b2MakeSoft(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2MAKESOFT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2Pause()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2PAUSE_OFFSET))();
		}

		static ::System::Void b2IntegrateVelocitiesTask(::System::Int32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2INTEGRATEVELOCITIESTASK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2PrepareJointsTask(::System::Int32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2PREPAREJOINTSTASK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2WarmStartJointsTask(::System::Int32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2WARMSTARTJOINTSTASK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2SolveJointsTask(::System::Int32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2SOLVEJOINTSTASK_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void b2IntegratePositionsTask(::System::Int32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2INTEGRATEPOSITIONSTASK_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean b2ContinuousQueryCallback(::System::Int32 a1, ::System::UInt64 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContinuousContext& a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt64, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContinuousContext&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2CONTINUOUSQUERYCALLBACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2SolveContinuous(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TaskContext* a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TaskContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2SOLVECONTINUOUS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2FinalizeBodiesTask(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2FINALIZEBODIESTASK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2ExecuteBlock(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverStage* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverBlock* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverStage*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2EXECUTEBLOCK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 GetWorkerStartIndex(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_GETWORKERSTARTINDEX_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2ExecuteStage(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverStage* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverStage*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2EXECUTESTAGE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void b2ExecuteMainStage(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverStage* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverStage*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2EXECUTEMAINSTAGE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2SolverTask(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2SOLVERTASK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2BulletBodyTask(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2BULLETBODYTASK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2Solve(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2SOLVE_OFFSET))(a1, a2);
		}
	};
}

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

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2BULLETBODYTASK_OFFSET UNITYSDK_OFFSET(0x1AB1DF10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2CONTINUOUSQUERYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AB1A1C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2EXECUTEBLOCK_OFFSET UNITYSDK_OFFSET(0x1AB1C650)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2EXECUTEMAINSTAGE_OFFSET UNITYSDK_OFFSET(0x1AB1CC80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2EXECUTESTAGE_OFFSET UNITYSDK_OFFSET(0x1AB1C9F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2FINALIZEBODIESTASK_OFFSET UNITYSDK_OFFSET(0x1AB1B9B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2INTEGRATEPOSITIONSTASK_OFFSET UNITYSDK_OFFSET(0x1AB19F90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2INTEGRATEVELOCITIESTASK_OFFSET UNITYSDK_OFFSET(0x1AB19730)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2MAKESOFT_OFFSET UNITYSDK_OFFSET(0x1AB196A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2PAUSE_OFFSET UNITYSDK_OFFSET(0x1AB19710)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2PREPAREJOINTSTASK_OFFSET UNITYSDK_OFFSET(0x1AB19C30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2SIMDSHIFT_OFFSET UNITYSDK_OFFSET(0x1AB19690)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2SOLVECONTINUOUS_OFFSET UNITYSDK_OFFSET(0x1AB1AB90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2SOLVEJOINTSTASK_OFFSET UNITYSDK_OFFSET(0x1AB19D30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2SOLVERTASK_OFFSET UNITYSDK_OFFSET(0x1AB1CDF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2SOLVE_OFFSET UNITYSDK_OFFSET(0x1AB1E020)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_B2WARMSTARTJOINTSTASK_OFFSET UNITYSDK_OFFSET(0x1AB19C90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS_GETWORKERSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x1AB1C980)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB22520)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Solvers_TypeDefinitionIndex = 35234;

	class B2Solvers : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_B2_SIMD_SHIFT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(B2Solvers_TypeDefinitionIndex)->GetStaticField(0xF7F0);
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

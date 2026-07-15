#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ConstraintGraph.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Contact; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2ContactSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Joint; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2JointSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTRAINTGRAPHS_B2ADDCONTACTTOGRAPH_OFFSET UNITYSDK_OFFSET(0xB614530)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTRAINTGRAPHS_B2ADDJOINTTOGRAPH_OFFSET UNITYSDK_OFFSET(0xB615710)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTRAINTGRAPHS_B2ASSIGNJOINTCOLOR_OFFSET UNITYSDK_OFFSET(0xB615080)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTRAINTGRAPHS_B2CREATEGRAPH_OFFSET UNITYSDK_OFFSET(0xB614280)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTRAINTGRAPHS_B2CREATEJOINTINGRAPH_OFFSET UNITYSDK_OFFSET(0xB615350)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTRAINTGRAPHS_B2DESTROYGRAPH_OFFSET UNITYSDK_OFFSET(0xB6143C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTRAINTGRAPHS_B2REMOVECONTACTFROMGRAPH_OFFSET UNITYSDK_OFFSET(0xB614F00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTRAINTGRAPHS_B2REMOVEJOINTFROMGRAPH_OFFSET UNITYSDK_OFFSET(0xB615990)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ConstraintGraphs_TypeDefinitionIndex = 35068;

	class B2ConstraintGraphs : public ::System::Object
	{
	public:
		// static const ::System::Int32 B2_OVERFLOW_INDEX = 0x17; // 0x0
		// static const ::System::Int32 B2_DYNAMIC_COLOR_COUNT = 0x14; // 0x0

		static ::System::Void b2CreateGraph(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ConstraintGraph& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ConstraintGraph&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTRAINTGRAPHS_B2CREATEGRAPH_OFFSET))(a1, a2);
		}

		static ::System::Void b2DestroyGraph(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ConstraintGraph& a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ConstraintGraph&))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTRAINTGRAPHS_B2DESTROYGRAPH_OFFSET))(a1);
		}

		static ::System::Void b2AddContactToGraph(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactSim* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact* a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTRAINTGRAPHS_B2ADDCONTACTTOGRAPH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2RemoveContactFromGraph(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTRAINTGRAPHS_B2REMOVECONTACTFROMGRAPH_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 b2AssignJointColor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ConstraintGraph& a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ConstraintGraph&, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTRAINTGRAPHS_B2ASSIGNJOINTCOLOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*& b2CreateJointInGraph(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint* a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*&(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTRAINTGRAPHS_B2CREATEJOINTINGRAPH_OFFSET))(a1, a2);
		}

		static ::System::Void b2AddJointToGraph(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint* a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTRAINTGRAPHS_B2ADDJOINTTOGRAPH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2RemoveJointFromGraph(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONSTRAINTGRAPHS_B2REMOVEJOINTFROMGRAPH_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}

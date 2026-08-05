#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/Line.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/Object.h"

namespace RVO { class Agent; }
namespace RVO { class KdTree; }
namespace RVO { class Obstacle; }
namespace RVO { class Simulator_Worker; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RVO_SIMULATOR_ADDAGENT_1_OFFSET UNITYSDK_OFFSET(0x1EDBBF80)
#define RVO_SIMULATOR_ADDAGENT_OFFSET UNITYSDK_OFFSET(0x1EDBBD80)
#define RVO_SIMULATOR_ADDOBSTACLE_OFFSET UNITYSDK_OFFSET(0x1EDBC210)
#define RVO_SIMULATOR_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EDBCE70)
#define RVO_SIMULATOR_DOSTEP_OFFSET UNITYSDK_OFFSET(0x1EDBD0C0)
#define RVO_SIMULATOR_GETAGENTAGENTNEIGHBOR_OFFSET UNITYSDK_OFFSET(0x1EDBD8C0)
#define RVO_SIMULATOR_GETAGENTMAXNEIGHBORS_OFFSET UNITYSDK_OFFSET(0x1EDBDA60)
#define RVO_SIMULATOR_GETAGENTMAXSPEED_OFFSET UNITYSDK_OFFSET(0x1EDBDB50)
#define RVO_SIMULATOR_GETAGENTNEIGHBORDIST_OFFSET UNITYSDK_OFFSET(0x1EDBDC40)
#define RVO_SIMULATOR_GETAGENTNUMAGENTNEIGHBORS_OFFSET UNITYSDK_OFFSET(0x1EDBDD30)
#define RVO_SIMULATOR_GETAGENTNUMOBSTACLENEIGHBORS_OFFSET UNITYSDK_OFFSET(0x1EDBDEB0)
#define RVO_SIMULATOR_GETAGENTOBSTACLENEIGHBOR_OFFSET UNITYSDK_OFFSET(0x1EDBE030)
#define RVO_SIMULATOR_GETAGENTORCALINES_OFFSET UNITYSDK_OFFSET(0x1EDBE1D0)
#define RVO_SIMULATOR_GETAGENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1EDBE2C0)
#define RVO_SIMULATOR_GETAGENTPREFVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDBE3B0)
#define RVO_SIMULATOR_GETAGENTRADIUS_OFFSET UNITYSDK_OFFSET(0x1EDBE460)
#define RVO_SIMULATOR_GETAGENTTIMEHORIZONOBST_OFFSET UNITYSDK_OFFSET(0x1EDBE640)
#define RVO_SIMULATOR_GETAGENTTIMEHORIZON_OFFSET UNITYSDK_OFFSET(0x1EDBE550)
#define RVO_SIMULATOR_GETAGENTVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDBE730)
#define RVO_SIMULATOR_GETAGENTWEIGHT_OFFSET UNITYSDK_OFFSET(0x1EDBEF40)
#define RVO_SIMULATOR_GETGLOBALTIME_OFFSET UNITYSDK_OFFSET(0x1EDBE7E0)
#define RVO_SIMULATOR_GETNEXTOBSTACLEVERTEXNO_OFFSET UNITYSDK_OFFSET(0x1EDBEAB0)
#define RVO_SIMULATOR_GETNUMAGENTS_OFFSET UNITYSDK_OFFSET(0x1EDBE7F0)
#define RVO_SIMULATOR_GETNUMOBSTACLEVERTICES_OFFSET UNITYSDK_OFFSET(0x1EDBE8D0)
#define RVO_SIMULATOR_GETNUMWORKERS_OFFSET UNITYSDK_OFFSET(0x1EDBE9B0)
#define RVO_SIMULATOR_GETOBSTACLEVERTEX_OFFSET UNITYSDK_OFFSET(0x1EDBE9C0)
#define RVO_SIMULATOR_GETPREVOBSTACLEVERTEXNO_OFFSET UNITYSDK_OFFSET(0x1EDBEBB0)
#define RVO_SIMULATOR_GETTIMESTEP_OFFSET UNITYSDK_OFFSET(0x1EDBECB0)
#define RVO_SIMULATOR_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1EDBB910)
#define RVO_SIMULATOR_GET_STEPTICKFRAME_OFFSET UNITYSDK_OFFSET(0x1EDBB8F0)
#define RVO_SIMULATOR_PROCESSOBSTACLES_OFFSET UNITYSDK_OFFSET(0x1EDBECC0)
#define RVO_SIMULATOR_QUERYVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1EDBECE0)
#define RVO_SIMULATOR_REMOVEAGENT_OFFSET UNITYSDK_OFFSET(0x1EDBB970)
#define RVO_SIMULATOR_SETAGENTDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1EDBED10)
#define RVO_SIMULATOR_SETAGENTMAXNEIGHBORS_OFFSET UNITYSDK_OFFSET(0x1EDBEDE0)
#define RVO_SIMULATOR_SETAGENTMAXSPEED_OFFSET UNITYSDK_OFFSET(0x1EDBEE90)
#define RVO_SIMULATOR_SETAGENTNEIGHBORDIST_OFFSET UNITYSDK_OFFSET(0x1EDBF0A0)
#define RVO_SIMULATOR_SETAGENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1EDBF150)
#define RVO_SIMULATOR_SETAGENTPREFVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDBF200)
#define RVO_SIMULATOR_SETAGENTRADIUS_OFFSET UNITYSDK_OFFSET(0x1EDBF2B0)
#define RVO_SIMULATOR_SETAGENTTIMEHORIZONOBST_OFFSET UNITYSDK_OFFSET(0x1EDBF410)
#define RVO_SIMULATOR_SETAGENTTIMEHORIZON_OFFSET UNITYSDK_OFFSET(0x1EDBF360)
#define RVO_SIMULATOR_SETAGENTVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDBF4C0)
#define RVO_SIMULATOR_SETAGENTWEIGHT_OFFSET UNITYSDK_OFFSET(0x1EDBEFF0)
#define RVO_SIMULATOR_SETGLOBALTIME_OFFSET UNITYSDK_OFFSET(0x1EDBF570)
#define RVO_SIMULATOR_SETNUMWORKERS_OFFSET UNITYSDK_OFFSET(0x1EDBD080)
#define RVO_SIMULATOR_SETTIMESTEP_OFFSET UNITYSDK_OFFSET(0x1EDBF580)
#define RVO_SIMULATOR_SET_STEPTICKFRAME_OFFSET UNITYSDK_OFFSET(0x1EDBB900)
#define RVO_SIMULATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDBF5A0)
#define RVO_SIMULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDBF590)

namespace RVO
{
	inline static constexpr unsigned int Simulator_TypeDefinitionIndex = 38730;

	class Simulator : public ::System::Object
	{
	public:
		static ::RVO::Simulator** StaticGet_instance_()
		{
			return (::RVO::Simulator**)Il2CppClass::FromTypeDefinitionIndex(Simulator_TypeDefinitionIndex)->GetStaticField(0x2A720);
		}
		static ::System::Int32* StaticGet__id()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Simulator_TypeDefinitionIndex)->GetStaticField(0x8E70);
		}
		::RVO::Simulator_Worker* workers_; // 0x10
		::RVO::KdTree* kdTree_; // 0x18
		::System::Collections::Generic::IList_1<::RVO::Obstacle*>* obstacles_; // 0x20
		::System::Collections::Generic::IList_1<::RVO::Agent*>* agents_; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RVO::Agent*>* agentDic; // 0x30
		::RVO::Agent* defaultAgent_; // 0x38
		::System::Int32 stepFrameCount; // 0x40
		::System::Int32 numWorkers_; // 0x44
		::System::Single globalTime_; // 0x48
		::System::Single timeStep_; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RVO_SIMULATOR__CCTOR_OFFSET))();
		}

		::System::Int32 get_StepTickFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GET_STEPTICKFRAME_OFFSET))(this);
		}

		::System::Void set_StepTickFrame(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SET_STEPTICKFRAME_OFFSET))(this, value);
		}

		static ::RVO::Simulator* get_Instance()
		{
			return ((::RVO::Simulator*(*)())((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GET_INSTANCE_OFFSET))();
		}

		::System::Void removeAgent(::System::Int32 agentid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_REMOVEAGENT_OFFSET))(this, agentid);
		}

		::System::Int32 addAgent(::RVO::Vector2 position)
		{
			return ((::System::Int32(*)(::PVOID, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_ADDAGENT_OFFSET))(this, position);
		}

		::System::Int32 addAgent_1(::RVO::Vector2 position, ::System::Single neighborDist, ::System::Int32 maxNeighbors, ::System::Single timeHorizon, ::System::Single timeHorizonObst, ::System::Single radius, ::System::Single maxSpeed, ::RVO::Vector2 velocity, ::System::Single weight)
		{
			return ((::System::Int32(*)(::PVOID, ::RVO::Vector2, ::System::Single, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RVO::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_ADDAGENT_1_OFFSET))(this, position, neighborDist, maxNeighbors, timeHorizon, timeHorizonObst, radius, maxSpeed, velocity, weight);
		}

		::System::Int32 addObstacle(::System::Collections::Generic::IList_1<::RVO::Vector2>* vertices)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RVO::Vector2>*))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_ADDOBSTACLE_OFFSET))(this, vertices);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_CLEAR_OFFSET))(this);
		}

		::System::Single doStep()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_DOSTEP_OFFSET))(this);
		}

		::System::Int32 getAgentAgentNeighbor(::System::Int32 agentNo, ::System::Int32 neighborNo)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTAGENTNEIGHBOR_OFFSET))(this, agentNo, neighborNo);
		}

		::System::Int32 getAgentMaxNeighbors(::System::Int32 agentNo)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTMAXNEIGHBORS_OFFSET))(this, agentNo);
		}

		::System::Single getAgentMaxSpeed(::System::Int32 agentNo)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTMAXSPEED_OFFSET))(this, agentNo);
		}

		::System::Single getAgentNeighborDist(::System::Int32 agentNo)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTNEIGHBORDIST_OFFSET))(this, agentNo);
		}

		::System::Int32 getAgentNumAgentNeighbors(::System::Int32 agentNo)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTNUMAGENTNEIGHBORS_OFFSET))(this, agentNo);
		}

		::System::Int32 getAgentNumObstacleNeighbors(::System::Int32 agentNo)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTNUMOBSTACLENEIGHBORS_OFFSET))(this, agentNo);
		}

		::System::Int32 getAgentObstacleNeighbor(::System::Int32 agentNo, ::System::Int32 neighborNo)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTOBSTACLENEIGHBOR_OFFSET))(this, agentNo, neighborNo);
		}

		::System::Collections::Generic::IList_1<::RVO::Line>* getAgentOrcaLines(::System::Int32 agentNo)
		{
			return ((::System::Collections::Generic::IList_1<::RVO::Line>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTORCALINES_OFFSET))(this, agentNo);
		}

		::RVO::Vector2 getAgentPosition(::System::Int32 agentNo)
		{
			return ((::RVO::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTPOSITION_OFFSET))(this, agentNo);
		}

		::RVO::Vector2 getAgentPrefVelocity(::System::Int32 agentNo)
		{
			return ((::RVO::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTPREFVELOCITY_OFFSET))(this, agentNo);
		}

		::System::Single getAgentRadius(::System::Int32 agentNo)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTRADIUS_OFFSET))(this, agentNo);
		}

		::System::Single getAgentTimeHorizon(::System::Int32 agentNo)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTTIMEHORIZON_OFFSET))(this, agentNo);
		}

		::System::Single getAgentTimeHorizonObst(::System::Int32 agentNo)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTTIMEHORIZONOBST_OFFSET))(this, agentNo);
		}

		::RVO::Vector2 getAgentVelocity(::System::Int32 agentNo)
		{
			return ((::RVO::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTVELOCITY_OFFSET))(this, agentNo);
		}

		::System::Single getGlobalTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETGLOBALTIME_OFFSET))(this);
		}

		::System::Int32 getNumAgents()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETNUMAGENTS_OFFSET))(this);
		}

		::System::Int32 getNumObstacleVertices()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETNUMOBSTACLEVERTICES_OFFSET))(this);
		}

		::System::Int32 GetNumWorkers()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETNUMWORKERS_OFFSET))(this);
		}

		::RVO::Vector2 getObstacleVertex(::System::Int32 vertexNo)
		{
			return ((::RVO::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETOBSTACLEVERTEX_OFFSET))(this, vertexNo);
		}

		::System::Int32 getNextObstacleVertexNo(::System::Int32 vertexNo)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETNEXTOBSTACLEVERTEXNO_OFFSET))(this, vertexNo);
		}

		::System::Int32 getPrevObstacleVertexNo(::System::Int32 vertexNo)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETPREVOBSTACLEVERTEXNO_OFFSET))(this, vertexNo);
		}

		::System::Single getTimeStep()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETTIMESTEP_OFFSET))(this);
		}

		::System::Void processObstacles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_PROCESSOBSTACLES_OFFSET))(this);
		}

		::System::Boolean queryVisibility(::RVO::Vector2 point1, ::RVO::Vector2 point2, ::System::Single radius)
		{
			return ((::System::Boolean(*)(::PVOID, ::RVO::Vector2, ::RVO::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_QUERYVISIBILITY_OFFSET))(this, point1, point2, radius);
		}

		::System::Void setAgentDefaults(::System::Single neighborDist, ::System::Int32 maxNeighbors, ::System::Single timeHorizon, ::System::Single timeHorizonObst, ::System::Single radius, ::System::Single maxSpeed, ::RVO::Vector2 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTDEFAULTS_OFFSET))(this, neighborDist, maxNeighbors, timeHorizon, timeHorizonObst, radius, maxSpeed, velocity);
		}

		::System::Void setAgentMaxNeighbors(::System::Int32 agentNo, ::System::Int32 maxNeighbors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTMAXNEIGHBORS_OFFSET))(this, agentNo, maxNeighbors);
		}

		::System::Void setAgentMaxSpeed(::System::Int32 agentNo, ::System::Single maxSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTMAXSPEED_OFFSET))(this, agentNo, maxSpeed);
		}

		::System::Single getAgentWeight(::System::Int32 agentNo)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTWEIGHT_OFFSET))(this, agentNo);
		}

		::System::Void setAgentWeight(::System::Int32 agentNo, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTWEIGHT_OFFSET))(this, agentNo, weight);
		}

		::System::Void setAgentNeighborDist(::System::Int32 agentNo, ::System::Single neighborDist)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTNEIGHBORDIST_OFFSET))(this, agentNo, neighborDist);
		}

		::System::Void setAgentPosition(::System::Int32 agentNo, ::RVO::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTPOSITION_OFFSET))(this, agentNo, position);
		}

		::System::Void setAgentPrefVelocity(::System::Int32 agentNo, ::RVO::Vector2 prefVelocity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTPREFVELOCITY_OFFSET))(this, agentNo, prefVelocity);
		}

		::System::Void setAgentRadius(::System::Int32 agentNo, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTRADIUS_OFFSET))(this, agentNo, radius);
		}

		::System::Void setAgentTimeHorizon(::System::Int32 agentNo, ::System::Single timeHorizon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTTIMEHORIZON_OFFSET))(this, agentNo, timeHorizon);
		}

		::System::Void setAgentTimeHorizonObst(::System::Int32 agentNo, ::System::Single timeHorizonObst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTTIMEHORIZONOBST_OFFSET))(this, agentNo, timeHorizonObst);
		}

		::System::Void setAgentVelocity(::System::Int32 agentNo, ::RVO::Vector2 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTVELOCITY_OFFSET))(this, agentNo, velocity);
		}

		::System::Void setGlobalTime(::System::Single globalTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETGLOBALTIME_OFFSET))(this, globalTime);
		}

		::System::Void SetNumWorkers(::System::Int32 numWorkers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETNUMWORKERS_OFFSET))(this, numWorkers);
		}

		::System::Void setTimeStep(::System::Single timeStep)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETTIMESTEP_OFFSET))(this, timeStep);
		}
	};
}

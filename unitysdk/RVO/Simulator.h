#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/Line.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/Object.h"

namespace RVO { class Agent; }
namespace RVO { class KdTree; }
namespace RVO { class Obstacle; }
namespace RVO { class Simulator_Worker; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Threading { class ManualResetEvent; }

#define RVO_SIMULATOR_ADDAGENT_1_OFFSET UNITYSDK_OFFSET(0xA250B70)
#define RVO_SIMULATOR_ADDAGENT_OFFSET UNITYSDK_OFFSET(0xA2544C0)
#define RVO_SIMULATOR_ADDOBSTACLE_OFFSET UNITYSDK_OFFSET(0xA2536D0)
#define RVO_SIMULATOR_CLEAR_OFFSET UNITYSDK_OFFSET(0xA252EB0)
#define RVO_SIMULATOR_CREATE_OFFSET UNITYSDK_OFFSET(0xA252C20)
#define RVO_SIMULATOR_DOSTEP_OFFSET UNITYSDK_OFFSET(0xA252FB0)
#define RVO_SIMULATOR_GETAGENTAGENTNEIGHBOR_OFFSET UNITYSDK_OFFSET(0xA254910)
#define RVO_SIMULATOR_GETAGENTHEIGHT_OFFSET UNITYSDK_OFFSET(0xA2518D0)
#define RVO_SIMULATOR_GETAGENTMAXNEIGHBORS_OFFSET UNITYSDK_OFFSET(0xA252590)
#define RVO_SIMULATOR_GETAGENTMAXSPEED_OFFSET UNITYSDK_OFFSET(0xA252150)
#define RVO_SIMULATOR_GETAGENTNEIGHBORDIST_OFFSET UNITYSDK_OFFSET(0xA252370)
#define RVO_SIMULATOR_GETAGENTNUMAGENTNEIGHBORS_OFFSET UNITYSDK_OFFSET(0xA254AB0)
#define RVO_SIMULATOR_GETAGENTNUMOBSTACLENEIGHBORS_OFFSET UNITYSDK_OFFSET(0xA254C30)
#define RVO_SIMULATOR_GETAGENTOBSTACLENEIGHBOR_OFFSET UNITYSDK_OFFSET(0xA254DB0)
#define RVO_SIMULATOR_GETAGENTORCALINES_OFFSET UNITYSDK_OFFSET(0xA254F50)
#define RVO_SIMULATOR_GETAGENTPOSITION_OFFSET UNITYSDK_OFFSET(0xA251260)
#define RVO_SIMULATOR_GETAGENTPREFVELOCITY_OFFSET UNITYSDK_OFFSET(0xA251680)
#define RVO_SIMULATOR_GETAGENTRADIUS_OFFSET UNITYSDK_OFFSET(0xA251AF0)
#define RVO_SIMULATOR_GETAGENTTIMEHORIZONOBST_OFFSET UNITYSDK_OFFSET(0xA251F30)
#define RVO_SIMULATOR_GETAGENTTIMEHORIZON_OFFSET UNITYSDK_OFFSET(0xA251D10)
#define RVO_SIMULATOR_GETAGENTVELOCITY_OFFSET UNITYSDK_OFFSET(0xA251470)
#define RVO_SIMULATOR_GETGLOBALTIME_OFFSET UNITYSDK_OFFSET(0xA255040)
#define RVO_SIMULATOR_GETNEXTOBSTACLEVERTEXNO_OFFSET UNITYSDK_OFFSET(0xA255230)
#define RVO_SIMULATOR_GETNUMAGENTS_OFFSET UNITYSDK_OFFSET(0xA254810)
#define RVO_SIMULATOR_GETNUMOBSTACLEVERTICES_OFFSET UNITYSDK_OFFSET(0xA255050)
#define RVO_SIMULATOR_GETNUMWORKERS_OFFSET UNITYSDK_OFFSET(0xA255130)
#define RVO_SIMULATOR_GETOBSTACLEVERTEX_OFFSET UNITYSDK_OFFSET(0xA255140)
#define RVO_SIMULATOR_GETPREVOBSTACLEVERTEXNO_OFFSET UNITYSDK_OFFSET(0xA255320)
#define RVO_SIMULATOR_GETTIMESTEP_OFFSET UNITYSDK_OFFSET(0xA255410)
#define RVO_SIMULATOR_GET_NEIGHBORHEIGHTLIMIT_OFFSET UNITYSDK_OFFSET(0xA2544A0)
#define RVO_SIMULATOR_PROCESSOBSTACLES_OFFSET UNITYSDK_OFFSET(0xA254440)
#define RVO_SIMULATOR_QUERYVISIBILITY_OFFSET UNITYSDK_OFFSET(0xA255420)
#define RVO_SIMULATOR_SETAGENTDEFAULTS_OFFSET UNITYSDK_OFFSET(0xA255450)
#define RVO_SIMULATOR_SETAGENTHEIGHT_OFFSET UNITYSDK_OFFSET(0xA2519C0)
#define RVO_SIMULATOR_SETAGENTMAXNEIGHBORS_OFFSET UNITYSDK_OFFSET(0xA252680)
#define RVO_SIMULATOR_SETAGENTMAXSPEED_OFFSET UNITYSDK_OFFSET(0xA252240)
#define RVO_SIMULATOR_SETAGENTNEIGHBORDIST_OFFSET UNITYSDK_OFFSET(0xA252460)
#define RVO_SIMULATOR_SETAGENTPOSITION_OFFSET UNITYSDK_OFFSET(0xA251350)
#define RVO_SIMULATOR_SETAGENTPREFVELOCITY_OFFSET UNITYSDK_OFFSET(0xA2517B0)
#define RVO_SIMULATOR_SETAGENTRADIUS_OFFSET UNITYSDK_OFFSET(0xA251BE0)
#define RVO_SIMULATOR_SETAGENTTIMEHORIZONOBST_OFFSET UNITYSDK_OFFSET(0xA252020)
#define RVO_SIMULATOR_SETAGENTTIMEHORIZON_OFFSET UNITYSDK_OFFSET(0xA251E00)
#define RVO_SIMULATOR_SETAGENTVELOCITY_OFFSET UNITYSDK_OFFSET(0xA251560)
#define RVO_SIMULATOR_SETGLOBALTIME_OFFSET UNITYSDK_OFFSET(0xA255520)
#define RVO_SIMULATOR_SETNUMWORKERS_OFFSET UNITYSDK_OFFSET(0xA2547D0)
#define RVO_SIMULATOR_SETTIMESTEP_OFFSET UNITYSDK_OFFSET(0xA255530)
#define RVO_SIMULATOR_SET_NEIGHBORHEIGHTLIMIT_OFFSET UNITYSDK_OFFSET(0xA2544B0)
#define RVO_SIMULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA255540)
#define RVO_SIMULATOR__ONAGENTADDED_OFFSET UNITYSDK_OFFSET(0xA254710)

namespace RVO
{
	inline static constexpr unsigned int Simulator_TypeDefinitionIndex = 41858;

	class Simulator : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::RVO::Agent*>* agents_; // 0x10
		::RVO::KdTree* kdTree_; // 0x18
		::RVO::Agent* defaultAgent_; // 0x20
		::Il2CppArray<::System::Threading::ManualResetEvent*>* doneEvents_; // 0x28
		::Il2CppArray<::RVO::Simulator_Worker*>* workers_; // 0x30
		::System::Collections::Generic::IList_1<::RVO::Obstacle*>* obstacles_; // 0x38
		::System::Single _neighborHeightLimit_k__BackingField; // 0x40
		::System::Int32 numWorkers_; // 0x44
		::System::Single timeStep_; // 0x48
		::System::Single globalTime_; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR__CTOR_OFFSET))(this);
		}

		::System::Single get_neighborHeightLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GET_NEIGHBORHEIGHTLIMIT_OFFSET))(this);
		}

		::System::Void set_neighborHeightLimit(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SET_NEIGHBORHEIGHTLIMIT_OFFSET))(this, a1);
		}

		::System::Int32 addAgent(::RVO::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RVO::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_ADDAGENT_OFFSET))(this, a1, a2);
		}

		::System::Int32 addAgent_1(::RVO::Vector2 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::RVO::Vector2 a9)
		{
			return ((::System::Int32(*)(::PVOID, ::RVO::Vector2, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_ADDAGENT_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Int32 addObstacle(::System::Collections::Generic::IList_1<::RVO::Vector2>* a1, ::System::Collections::Generic::IList_1<::System::Single>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RVO::Vector2>*, ::System::Collections::Generic::IList_1<::System::Single>*))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_ADDOBSTACLE_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_CLEAR_OFFSET))(this);
		}

		::System::Single doStep()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_DOSTEP_OFFSET))(this);
		}

		::System::Int32 getAgentAgentNeighbor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTAGENTNEIGHBOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 getAgentMaxNeighbors(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTMAXNEIGHBORS_OFFSET))(this, a1);
		}

		::System::Single getAgentMaxSpeed(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTMAXSPEED_OFFSET))(this, a1);
		}

		::System::Single getAgentNeighborDist(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTNEIGHBORDIST_OFFSET))(this, a1);
		}

		::System::Int32 getAgentNumAgentNeighbors(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTNUMAGENTNEIGHBORS_OFFSET))(this, a1);
		}

		::System::Int32 getAgentNumObstacleNeighbors(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTNUMOBSTACLENEIGHBORS_OFFSET))(this, a1);
		}

		::System::Int32 getAgentObstacleNeighbor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTOBSTACLENEIGHBOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IList_1<::RVO::Line>* getAgentOrcaLines(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::IList_1<::RVO::Line>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTORCALINES_OFFSET))(this, a1);
		}

		::RVO::Vector2 getAgentPosition(::System::Int32 a1)
		{
			return ((::RVO::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTPOSITION_OFFSET))(this, a1);
		}

		::RVO::Vector2 getAgentPrefVelocity(::System::Int32 a1)
		{
			return ((::RVO::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTPREFVELOCITY_OFFSET))(this, a1);
		}

		::System::Single getAgentHeight(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTHEIGHT_OFFSET))(this, a1);
		}

		::System::Single getAgentRadius(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTRADIUS_OFFSET))(this, a1);
		}

		::System::Single getAgentTimeHorizon(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTTIMEHORIZON_OFFSET))(this, a1);
		}

		::System::Single getAgentTimeHorizonObst(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTTIMEHORIZONOBST_OFFSET))(this, a1);
		}

		::RVO::Vector2 getAgentVelocity(::System::Int32 a1)
		{
			return ((::RVO::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETAGENTVELOCITY_OFFSET))(this, a1);
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

		::RVO::Vector2 getObstacleVertex(::System::Int32 a1)
		{
			return ((::RVO::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETOBSTACLEVERTEX_OFFSET))(this, a1);
		}

		::System::Int32 getNextObstacleVertexNo(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETNEXTOBSTACLEVERTEXNO_OFFSET))(this, a1);
		}

		::System::Int32 getPrevObstacleVertexNo(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETPREVOBSTACLEVERTEXNO_OFFSET))(this, a1);
		}

		::System::Single getTimeStep()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_GETTIMESTEP_OFFSET))(this);
		}

		::System::Void processObstacles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_PROCESSOBSTACLES_OFFSET))(this);
		}

		::System::Boolean queryVisibility(::RVO::Vector2 a1, ::RVO::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RVO::Vector2, ::RVO::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_QUERYVISIBILITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void setAgentDefaults(::System::Single a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::RVO::Vector2 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTDEFAULTS_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void setAgentMaxNeighbors(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTMAXNEIGHBORS_OFFSET))(this, a1, a2);
		}

		::System::Void setAgentMaxSpeed(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTMAXSPEED_OFFSET))(this, a1, a2);
		}

		::System::Void setAgentNeighborDist(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTNEIGHBORDIST_OFFSET))(this, a1, a2);
		}

		::System::Void setAgentPosition(::System::Int32 a1, ::RVO::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void setAgentPrefVelocity(::System::Int32 a1, ::RVO::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTPREFVELOCITY_OFFSET))(this, a1, a2);
		}

		::System::Void setAgentHeight(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTHEIGHT_OFFSET))(this, a1, a2);
		}

		::System::Void setAgentRadius(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTRADIUS_OFFSET))(this, a1, a2);
		}

		::System::Void setAgentTimeHorizon(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTTIMEHORIZON_OFFSET))(this, a1, a2);
		}

		::System::Void setAgentTimeHorizonObst(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTTIMEHORIZONOBST_OFFSET))(this, a1, a2);
		}

		::System::Void setAgentVelocity(::System::Int32 a1, ::RVO::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETAGENTVELOCITY_OFFSET))(this, a1, a2);
		}

		::System::Void setGlobalTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETGLOBALTIME_OFFSET))(this, a1);
		}

		::System::Void SetNumWorkers(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETNUMWORKERS_OFFSET))(this, a1);
		}

		::System::Void setTimeStep(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_SIMULATOR_SETTIMESTEP_OFFSET))(this, a1);
		}

		::System::Void _OnAgentAdded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_SIMULATOR__ONAGENTADDED_OFFSET))(this);
		}

		static ::RVO::Simulator* Create()
		{
			return ((::RVO::Simulator*(*)())((::PBYTE)hIl2Cpp + RVO_SIMULATOR_CREATE_OFFSET))();
		}
	};
}

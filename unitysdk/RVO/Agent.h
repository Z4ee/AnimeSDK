#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/Line.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RVO { class Obstacle; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RVO_AGENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DA04280)
#define RVO_AGENT_COMPUTENEIGHBORS_OFFSET UNITYSDK_OFFSET(0x1DA044E0)
#define RVO_AGENT_COMPUTENEWVELOCITY_OFFSET UNITYSDK_OFFSET(0x1DA04850)
#define RVO_AGENT_INSERTAGENTNEIGHBOR_OFFSET UNITYSDK_OFFSET(0x1DA07E90)
#define RVO_AGENT_INSERTOBSTACLENEIGHBOR_OFFSET UNITYSDK_OFFSET(0x1DA085E0)
#define RVO_AGENT_LINEARPROGRAM1_OFFSET UNITYSDK_OFFSET(0x1DA08D40)
#define RVO_AGENT_LINEARPROGRAM2_OFFSET UNITYSDK_OFFSET(0x1DA067E0)
#define RVO_AGENT_LINEARPROGRAM3_OFFSET UNITYSDK_OFFSET(0x1DA06BD0)
#define RVO_AGENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DA08D30)
#define RVO_AGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA09BC0)

namespace RVO
{
	inline static constexpr unsigned int Agent_TypeDefinitionIndex = 38061;

	class Agent : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::System::Single, ::RVO::Obstacle*>>* obstacleNeighbors_; // 0x10
		::System::Collections::Generic::List_1<::RVO::Line>* projLinesBylinearProgram3; // 0x18
		::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::System::Single, ::RVO::Agent*>>* agentNeighbors_; // 0x20
		::System::Collections::Generic::IList_1<::RVO::Line>* orcaLines_; // 0x28
		::RVO::Vector2 newVelocity_; // 0x30
		::System::Single radius_; // 0x38
		::System::Single maxSpeed_; // 0x3C
		::System::Int32 id_; // 0x40
		::RVO::Vector2 velocity_; // 0x44
		::System::Single timeHorizonObst_; // 0x4C
		::System::Int32 maxNeighbors_; // 0x50
		::RVO::Vector2 position_; // 0x54
		::System::Single weight_; // 0x5C
		::System::Single neighborDist_; // 0x60
		::System::Single timeHorizon_; // 0x64
		::RVO::Vector2 prefVelocity_; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_AGENT__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_AGENT_CLEAR_OFFSET))(this);
		}

		::System::Void computeNeighbors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_AGENT_COMPUTENEIGHBORS_OFFSET))(this);
		}

		::System::Void computeNewVelocity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_AGENT_COMPUTENEWVELOCITY_OFFSET))(this);
		}

		::System::Void insertAgentNeighbor(::RVO::Agent* agent, ::System::Single& rangeSq)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Agent*, ::System::Single&))((::PBYTE)hIl2Cpp + RVO_AGENT_INSERTAGENTNEIGHBOR_OFFSET))(this, agent, rangeSq);
		}

		::System::Void insertObstacleNeighbor(::RVO::Obstacle* obstacle, ::System::Single rangeSq)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Obstacle*, ::System::Single))((::PBYTE)hIl2Cpp + RVO_AGENT_INSERTOBSTACLENEIGHBOR_OFFSET))(this, obstacle, rangeSq);
		}

		::System::Void update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_AGENT_UPDATE_OFFSET))(this);
		}

		::System::Boolean linearProgram1(::System::Collections::Generic::IList_1<::RVO::Line>* lines, ::System::Int32 lineNo, ::System::Single radius, ::RVO::Vector2 optVelocity, ::System::Boolean directionOpt, ::RVO::Vector2& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::RVO::Line>*, ::System::Int32, ::System::Single, ::RVO::Vector2, ::System::Boolean, ::RVO::Vector2&))((::PBYTE)hIl2Cpp + RVO_AGENT_LINEARPROGRAM1_OFFSET))(this, lines, lineNo, radius, optVelocity, directionOpt, result);
		}

		::System::Int32 linearProgram2(::System::Collections::Generic::IList_1<::RVO::Line>* lines, ::System::Single radius, ::RVO::Vector2 optVelocity, ::System::Boolean directionOpt, ::RVO::Vector2& result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RVO::Line>*, ::System::Single, ::RVO::Vector2, ::System::Boolean, ::RVO::Vector2&))((::PBYTE)hIl2Cpp + RVO_AGENT_LINEARPROGRAM2_OFFSET))(this, lines, radius, optVelocity, directionOpt, result);
		}

		::System::Void linearProgram3(::System::Collections::Generic::IList_1<::RVO::Line>* lines, ::System::Int32 numObstLines, ::System::Int32 beginLine, ::System::Single radius, ::RVO::Vector2& result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RVO::Line>*, ::System::Int32, ::System::Int32, ::System::Single, ::RVO::Vector2&))((::PBYTE)hIl2Cpp + RVO_AGENT_LINEARPROGRAM3_OFFSET))(this, lines, numObstLines, beginLine, radius, result);
		}
	};
}

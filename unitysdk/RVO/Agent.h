#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/Line.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RVO { class Obstacle; }
namespace RVO { class Simulator; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RVO_AGENT_COMPUTENEIGHBORS_OFFSET UNITYSDK_OFFSET(0x85C3F10)
#define RVO_AGENT_COMPUTENEWVELOCITY_OFFSET UNITYSDK_OFFSET(0x85C4160)
#define RVO_AGENT_INSERTAGENTNEIGHBOR_OFFSET UNITYSDK_OFFSET(0x85C76B0)
#define RVO_AGENT_INSERTOBSTACLENEIGHBOR_OFFSET UNITYSDK_OFFSET(0x85C7E80)
#define RVO_AGENT_LINEARPROGRAM1_OFFSET UNITYSDK_OFFSET(0x85C86A0)
#define RVO_AGENT_LINEARPROGRAM2_OFFSET UNITYSDK_OFFSET(0x85C60C0)
#define RVO_AGENT_LINEARPROGRAM3_OFFSET UNITYSDK_OFFSET(0x85C64B0)
#define RVO_AGENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x85C8610)
#define RVO_AGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x85C3E20)

namespace RVO
{
	inline static constexpr unsigned int Agent_TypeDefinitionIndex = 35215;

	class Agent : public ::System::Object
	{
	public:
		::RVO::Simulator* _simulator; // 0x10
		::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::System::Single, ::RVO::Obstacle*>>* obstacleNeighbors_; // 0x18
		::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::System::Single, ::RVO::Agent*>>* agentNeighbors_; // 0x20
		::System::Collections::Generic::IList_1<::RVO::Line>* orcaLines_; // 0x28
		::System::Single timeHorizon_; // 0x30
		::RVO::Vector2 prefVelocity_; // 0x34
		::RVO::Vector2 velocity_; // 0x3C
		::RVO::Vector2 position_; // 0x44
		::System::Int32 maxNeighbors_; // 0x4C
		::System::Single maxSpeed_; // 0x50
		::System::Int32 id_; // 0x54
		::System::Single neighborDist_; // 0x58
		::System::Single radius_; // 0x5C
		::System::Single height_; // 0x60
		::System::Single timeHorizonObst_; // 0x64
		::RVO::Vector2 newVelocity_; // 0x68

		::System::Void _ctor(::RVO::Simulator* simulator)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Simulator*))((::PBYTE)hIl2Cpp + RVO_AGENT__CTOR_OFFSET))(this, simulator);
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

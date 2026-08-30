#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/Line.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RVO { class Obstacle; }
namespace RVO { class Simulator; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RVO_AGENT_COMPUTENEIGHBORS_OFFSET UNITYSDK_OFFSET(0x1967EA60)
#define RVO_AGENT_COMPUTENEWVELOCITY_OFFSET UNITYSDK_OFFSET(0x1967ED60)
#define RVO_AGENT_INSERTAGENTNEIGHBOR_OFFSET UNITYSDK_OFFSET(0x19683600)
#define RVO_AGENT_INSERTOBSTACLENEIGHBOR_OFFSET UNITYSDK_OFFSET(0x19684190)
#define RVO_AGENT_LINEARPROGRAM1_OFFSET UNITYSDK_OFFSET(0x19684BD0)
#define RVO_AGENT_LINEARPROGRAM2_OFFSET UNITYSDK_OFFSET(0x196814A0)
#define RVO_AGENT_LINEARPROGRAM3_OFFSET UNITYSDK_OFFSET(0x19681A30)
#define RVO_AGENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x19684B40)
#define RVO_AGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1967E970)

namespace RVO
{
	inline static constexpr unsigned int Agent_TypeDefinitionIndex = 44887;

	class Agent : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::RVO::Line>* orcaLines_; // 0x10
		::RVO::Simulator* _simulator; // 0x18
		::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::System::Single, ::RVO::Obstacle*>>* obstacleNeighbors_; // 0x20
		::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::System::Single, ::RVO::Agent*>>* agentNeighbors_; // 0x28
		::RVO::Vector2 newVelocity_; // 0x30
		::System::Int32 maxNeighbors_; // 0x38
		::System::Single radius_; // 0x3C
		::System::Single maxSpeed_; // 0x40
		::RVO::Vector2 velocity_; // 0x44
		::System::Single timeHorizon_; // 0x4C
		::RVO::Vector2 prefVelocity_; // 0x50
		::System::Single neighborDist_; // 0x58
		::RVO::Vector2 position_; // 0x5C
		::System::Int32 id_; // 0x64
		::System::Single height_; // 0x68
		::System::Single timeHorizonObst_; // 0x6C

		::System::Void _ctor(::RVO::Simulator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Simulator*))((::PBYTE)hIl2Cpp + RVO_AGENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void computeNeighbors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_AGENT_COMPUTENEIGHBORS_OFFSET))(this);
		}

		::System::Void computeNewVelocity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_AGENT_COMPUTENEWVELOCITY_OFFSET))(this);
		}

		::System::Void insertAgentNeighbor(::RVO::Agent* a1, ::System::Single& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Agent*, ::System::Single&))((::PBYTE)hIl2Cpp + RVO_AGENT_INSERTAGENTNEIGHBOR_OFFSET))(this, a1, a2);
		}

		::System::Void insertObstacleNeighbor(::RVO::Obstacle* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Obstacle*, ::System::Single))((::PBYTE)hIl2Cpp + RVO_AGENT_INSERTOBSTACLENEIGHBOR_OFFSET))(this, a1, a2);
		}

		::System::Void update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_AGENT_UPDATE_OFFSET))(this);
		}

		::System::Boolean linearProgram1(::System::Collections::Generic::IList_1<::RVO::Line>* a1, ::System::Int32 a2, ::System::Single a3, ::RVO::Vector2 a4, ::System::Boolean a5, ::RVO::Vector2& a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::RVO::Line>*, ::System::Int32, ::System::Single, ::RVO::Vector2, ::System::Boolean, ::RVO::Vector2&))((::PBYTE)hIl2Cpp + RVO_AGENT_LINEARPROGRAM1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 linearProgram2(::System::Collections::Generic::IList_1<::RVO::Line>* a1, ::System::Single a2, ::RVO::Vector2 a3, ::System::Boolean a4, ::RVO::Vector2& a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RVO::Line>*, ::System::Single, ::RVO::Vector2, ::System::Boolean, ::RVO::Vector2&))((::PBYTE)hIl2Cpp + RVO_AGENT_LINEARPROGRAM2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void linearProgram3(::System::Collections::Generic::IList_1<::RVO::Line>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::RVO::Vector2& a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RVO::Line>*, ::System::Int32, ::System::Int32, ::System::Single, ::RVO::Vector2&))((::PBYTE)hIl2Cpp + RVO_AGENT_LINEARPROGRAM3_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}

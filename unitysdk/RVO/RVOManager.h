#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/RVOAgentParam.h"
#include "unitysdk/RVO/RVOObstacleParam.h"
#include "unitysdk/System/Object.h"

namespace RVO { class RVOAgent; }
namespace RVO { class Simulator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RVO_RVOMANAGER_ADDOBSTACLE_OFFSET UNITYSDK_OFFSET(0xB2F4E30)
#define RVO_RVOMANAGER_ALLOCAGENT_OFFSET UNITYSDK_OFFSET(0xB2F4BD0)
#define RVO_RVOMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2F43B0)
#define RVO_RVOMANAGER_GET_SIMULATOR_OFFSET UNITYSDK_OFFSET(0xB2F6420)
#define RVO_RVOMANAGER_PROCESSOBSTACLES_OFFSET UNITYSDK_OFFSET(0xB2F63D0)
#define RVO_RVOMANAGER_RELEASEAGENT_OFFSET UNITYSDK_OFFSET(0xB2F4D10)
#define RVO_RVOMANAGER_SIMULATE_OFFSET UNITYSDK_OFFSET(0xB2F4710)
#define RVO_RVOMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2F6430)
#define RVO_RVOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2F4040)

namespace RVO
{
	inline static constexpr unsigned int RVOManager_TypeDefinitionIndex = 44894;

	class RVOManager : public ::System::Object
	{
	public:
		static ::RVO::RVOAgentParam* StaticGet_InvalidParam()
		{
			return (::RVO::RVOAgentParam*)Il2CppClass::FromTypeDefinitionIndex(RVOManager_TypeDefinitionIndex)->GetStaticField(0x13480);
		}
		::System::Collections::Generic::List_1<::RVO::RVOAgent*>* _AgentPool; // 0x10
		::System::Collections::Generic::List_1<::RVO::RVOAgent*>* _Agents; // 0x18
		::RVO::Simulator* _Simulator; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RVO_RVOMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Simulate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_SIMULATE_OFFSET))(this, a1);
		}

		::RVO::RVOAgent* AllocAgent(::RVO::RVOAgentParam& a1)
		{
			return ((::RVO::RVOAgent*(*)(::PVOID, ::RVO::RVOAgentParam&))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_ALLOCAGENT_OFFSET))(this, a1);
		}

		::System::Void ReleaseAgent(::RVO::RVOAgent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::RVOAgent*))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_RELEASEAGENT_OFFSET))(this, a1);
		}

		::System::Void AddObstacle(::RVO::RVOObstacleParam& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::RVOObstacleParam&))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_ADDOBSTACLE_OFFSET))(this, a1);
		}

		::System::Void ProcessObstacles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_PROCESSOBSTACLES_OFFSET))(this);
		}

		::RVO::Simulator* get_Simulator()
		{
			return ((::RVO::Simulator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_GET_SIMULATOR_OFFSET))(this);
		}
	};
}

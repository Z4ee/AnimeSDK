#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/RVOAgentParam.h"
#include "unitysdk/RVO/RVOObstacleParam.h"
#include "unitysdk/System/Object.h"

namespace RVO { class RVOAgent; }
namespace RVO { class Simulator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RVO_RVOMANAGER_ADDOBSTACLE_OFFSET UNITYSDK_OFFSET(0x8E04C40)
#define RVO_RVOMANAGER_ALLOCAGENT_OFFSET UNITYSDK_OFFSET(0x8E04AA0)
#define RVO_RVOMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E042B0)
#define RVO_RVOMANAGER_GET_SIMULATOR_OFFSET UNITYSDK_OFFSET(0x8E059F0)
#define RVO_RVOMANAGER_PROCESSOBSTACLES_OFFSET UNITYSDK_OFFSET(0x8E059A0)
#define RVO_RVOMANAGER_RELEASEAGENT_OFFSET UNITYSDK_OFFSET(0x8E04B90)
#define RVO_RVOMANAGER_SIMULATE_OFFSET UNITYSDK_OFFSET(0x8E04580)
#define RVO_RVOMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8E05A00)
#define RVO_RVOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x8E04000)

namespace RVO
{
	inline static constexpr unsigned int RVOManager_TypeDefinitionIndex = 41048;

	class RVOManager : public ::System::Object
	{
	public:
		static ::RVO::RVOAgentParam* StaticGet_InvalidParam()
		{
			return (::RVO::RVOAgentParam*)Il2CppClass::FromTypeDefinitionIndex(RVOManager_TypeDefinitionIndex)->GetStaticField(0x10140);
		}
		::System::Collections::Generic::List_1<::RVO::RVOAgent*>* _Agents; // 0x10
		::System::Collections::Generic::List_1<::RVO::RVOAgent*>* _AgentPool; // 0x18
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

		::System::Void Simulate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_SIMULATE_OFFSET))(this, deltaTime);
		}

		::RVO::RVOAgent* AllocAgent(::RVO::RVOAgentParam& param)
		{
			return ((::RVO::RVOAgent*(*)(::PVOID, ::RVO::RVOAgentParam&))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_ALLOCAGENT_OFFSET))(this, param);
		}

		::System::Void ReleaseAgent(::RVO::RVOAgent* agent)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::RVOAgent*))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_RELEASEAGENT_OFFSET))(this, agent);
		}

		::System::Void AddObstacle(::RVO::RVOObstacleParam& param)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::RVOObstacleParam&))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_ADDOBSTACLE_OFFSET))(this, param);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Effect_GPUCrowdAnimation; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CROWDUNIT_GET_UNITGROUPIDX_OFFSET UNITYSDK_OFFSET(0x18038090)
#define RPG_CLIENT_CROWDUNIT_SET_UNITGROUPIDX_OFFSET UNITYSDK_OFFSET(0x180380A0)
#define RPG_CLIENT_CROWDUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x180380B0)

namespace RPG::Client
{
	inline static constexpr unsigned int CrowdUnit_TypeDefinitionIndex = 67320;

	class CrowdUnit : public ::System::Object
	{
	public:
		::System::Int32 CrowdGoIdx; // 0x10
		::UnityEngine::Vector3 Translation; // 0x14
		::UnityEngine::Vector3 Rotation; // 0x20
		::UnityEngine::Vector3 Scale; // 0x2C
		::System::Single AnimationPhaseOffset; // 0x38
		::System::Single CurvePhaseOffset; // 0x3C
		::RPG::Client::Effect_GPUCrowdAnimation* _Owner; // 0x40
		::System::Int32 _UnitGroupIdx; // 0x48
		::UnityEngine::Transform* _EditNode; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDUNIT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_UnitGroupIdx()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDUNIT_GET_UNITGROUPIDX_OFFSET))(this);
		}

		::System::Void set_UnitGroupIdx(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDUNIT_SET_UNITGROUPIDX_OFFSET))(this, a1);
		}
	};
}

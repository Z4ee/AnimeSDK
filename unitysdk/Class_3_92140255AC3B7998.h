#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class ByCompareAngleBetweenVCameraAndDir; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_92140255AC3B7998_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1136CD50)
#define CLASS_3_92140255AC3B7998_METHOD_3_4F4018519B20BBDD_OFFSET UNITYSDK_OFFSET(0x1136DAF0)
#define CLASS_3_92140255AC3B7998_METHOD_3_8D663608A7B74715_OFFSET UNITYSDK_OFFSET(0x1136D6C0)
#define CLASS_3_92140255AC3B7998_METHOD_3_FCCC900C61954F18_OFFSET UNITYSDK_OFFSET(0x1136CFF0)
#define CLASS_3_92140255AC3B7998__CTOR_OFFSET UNITYSDK_OFFSET(0x1136CD20)

inline static constexpr unsigned int Class_3_92140255AC3B7998_TypeDefinitionIndex = 43594;

class Class_3_92140255AC3B7998 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*))((::PBYTE)hIl2Cpp + CLASS_3_92140255AC3B7998__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92140255AC3B7998_EVALUATE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_8D663608A7B74715()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92140255AC3B7998_METHOD_3_8D663608A7B74715_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_FCCC900C61954F18()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92140255AC3B7998_METHOD_3_FCCC900C61954F18_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_4F4018519B20BBDD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92140255AC3B7998_METHOD_3_4F4018519B20BBDD_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class SetViewModeServantFollow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5EB3AE5DE3D10D53_METHOD_3_64453C30F7BB234B_OFFSET UNITYSDK_OFFSET(0x128BE070)
#define CLASS_3_5EB3AE5DE3D10D53_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x128BDD30)
#define CLASS_3_5EB3AE5DE3D10D53__CTOR_OFFSET UNITYSDK_OFFSET(0x128BDD00)

inline static constexpr unsigned int Class_3_5EB3AE5DE3D10D53_TypeDefinitionIndex = 52017;

class Class_3_5EB3AE5DE3D10D53 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetViewModeServantFollow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetViewModeServantFollow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetViewModeServantFollow*))((::PBYTE)hIl2Cpp + CLASS_3_5EB3AE5DE3D10D53__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EB3AE5DE3D10D53_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::MVector3 Method_3_64453C30F7BB234B(::UnityEngine::Vector3 a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_5EB3AE5DE3D10D53_METHOD_3_64453C30F7BB234B_OFFSET))(this, a1);
	}
};

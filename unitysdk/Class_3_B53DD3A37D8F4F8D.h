#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEffectAnimatorParameter; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_B53DD3A37D8F4F8D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1589B550)
#define CLASS_3_B53DD3A37D8F4F8D_METHOD_3_13C17766DA70575A_OFFSET UNITYSDK_OFFSET(0x1589B730)
#define CLASS_3_B53DD3A37D8F4F8D_METHOD_3_14DF5948888ACBED_OFFSET UNITYSDK_OFFSET(0x1589B9B0)
#define CLASS_3_B53DD3A37D8F4F8D_METHOD_3_9378A003CFB69E64_OFFSET UNITYSDK_OFFSET(0x1589BC30)
#define CLASS_3_B53DD3A37D8F4F8D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1589B590)
#define CLASS_3_B53DD3A37D8F4F8D__CTOR_OFFSET UNITYSDK_OFFSET(0x1589B520)

inline static constexpr unsigned int Class_3_B53DD3A37D8F4F8D_TypeDefinitionIndex = 55487;

class Class_3_B53DD3A37D8F4F8D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEffectAnimatorParameter*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectAnimatorParameter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectAnimatorParameter*))((::PBYTE)hIl2Cpp + CLASS_3_B53DD3A37D8F4F8D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B53DD3A37D8F4F8D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B53DD3A37D8F4F8D_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_3_13C17766DA70575A(::UnityEngine::GameObject* a1, ::RPG::GameCore::SetEffectAnimatorParameter* a2, ::RPG::GameCore::TaskContext* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::GameCore::SetEffectAnimatorParameter*, ::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_B53DD3A37D8F4F8D_METHOD_3_13C17766DA70575A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_9378A003CFB69E64(::UnityEngine::Animator* a1, ::RPG::GameCore::SetEffectAnimatorParameter* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Animator*, ::RPG::GameCore::SetEffectAnimatorParameter*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_3_B53DD3A37D8F4F8D_METHOD_3_9378A003CFB69E64_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_14DF5948888ACBED(::UnityEngine::Animator* a1, ::RPG::GameCore::SetEffectAnimatorParameter* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Animator*, ::RPG::GameCore::SetEffectAnimatorParameter*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_3_B53DD3A37D8F4F8D_METHOD_3_14DF5948888ACBED_OFFSET))(a1, a2, a3);
	}
};

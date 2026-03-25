#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class AnimSetParameter; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define CLASS_3_20FC37B7E166C5BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BE47C0)
#define CLASS_3_20FC37B7E166C5BD_METHOD_3_767603D35FDE039B_OFFSET UNITYSDK_OFFSET(0x10BE4E00)
#define CLASS_3_20FC37B7E166C5BD_METHOD_3_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x10BE4840)
#define CLASS_3_20FC37B7E166C5BD_METHOD_3_BF302FCDF545D0AF_OFFSET UNITYSDK_OFFSET(0x10BE5470)
#define CLASS_3_20FC37B7E166C5BD_METHOD_3_FD50A2BC3997CE67_OFFSET UNITYSDK_OFFSET(0x10BE4A50)
#define CLASS_3_20FC37B7E166C5BD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10BE4FE0)
#define CLASS_3_20FC37B7E166C5BD__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE4790)
#define CLASS_3_20FC37B7E166C5BD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BE5750)

inline static constexpr unsigned int Class_3_20FC37B7E166C5BD_TypeDefinitionIndex = 44777;

class Class_3_20FC37B7E166C5BD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AnimSetParameter*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AnimSetParameter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AnimSetParameter*))((::PBYTE)hIl2Cpp + CLASS_3_20FC37B7E166C5BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_20FC37B7E166C5BD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_20FC37B7E166C5BD_METHOD_3_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_20FC37B7E166C5BD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_FD50A2BC3997CE67(::RPG::Client::MockAnimator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_3_20FC37B7E166C5BD_METHOD_3_FD50A2BC3997CE67_OFFSET))(this, a1);
	}

	::System::Void Method_3_BF302FCDF545D0AF(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_3_20FC37B7E166C5BD_METHOD_3_BF302FCDF545D0AF_OFFSET))(this, a1);
	}

	::System::Void Method_3_767603D35FDE039B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_20FC37B7E166C5BD_METHOD_3_767603D35FDE039B_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_20FC37B7E166C5BD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

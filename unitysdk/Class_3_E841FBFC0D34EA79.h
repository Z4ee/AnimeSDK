#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRogueTournCollectionBoothUpdate; }
namespace System { class Object; }

#define CLASS_3_E841FBFC0D34EA79_METHOD_3_5CC3C7A9D6CEEBD6_OFFSET UNITYSDK_OFFSET(0xC458340)
#define CLASS_3_E841FBFC0D34EA79__CTOR_OFFSET UNITYSDK_OFFSET(0xC458090)
#define CLASS_3_E841FBFC0D34EA79__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC458200)
#define CLASS_3_E841FBFC0D34EA79__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC4582A0)

inline static constexpr unsigned int Class_3_E841FBFC0D34EA79_TypeDefinitionIndex = 59071;

class Class_3_E841FBFC0D34EA79 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitRogueTournCollectionBoothUpdate*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRogueTournCollectionBoothUpdate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRogueTournCollectionBoothUpdate*))((::PBYTE)hIl2Cpp + CLASS_3_E841FBFC0D34EA79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E841FBFC0D34EA79__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E841FBFC0D34EA79__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_5CC3C7A9D6CEEBD6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E841FBFC0D34EA79_METHOD_3_5CC3C7A9D6CEEBD6_OFFSET))(this, a1);
	}
};

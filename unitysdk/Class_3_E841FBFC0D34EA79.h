#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRogueTournCollectionBoothUpdate; }
namespace System { class Object; }

#define CLASS_3_E841FBFC0D34EA79_METHOD_3_D8E44F7C510402BB_OFFSET UNITYSDK_OFFSET(0xAFF4FC0)
#define CLASS_3_E841FBFC0D34EA79__CTOR_OFFSET UNITYSDK_OFFSET(0xAFF4D10)
#define CLASS_3_E841FBFC0D34EA79__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xAFF4E80)
#define CLASS_3_E841FBFC0D34EA79__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xAFF4F20)
#define CLASS_3_E841FBFC0D34EA79___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xAFF5150)
#define CLASS_3_E841FBFC0D34EA79___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xAFF5160)

inline static constexpr unsigned int Class_3_E841FBFC0D34EA79_TypeDefinitionIndex = 55056;

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

	::System::Void Method_3_D8E44F7C510402BB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E841FBFC0D34EA79_METHOD_3_D8E44F7C510402BB_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E841FBFC0D34EA79___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E841FBFC0D34EA79___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

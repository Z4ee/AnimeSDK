#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRogueTournCollectionBoothUpdate; }
namespace System { class Object; }

#define CLASS_3_BD0559256C8279B1_METHOD_3_2ADBA02EC0F7C432_OFFSET UNITYSDK_OFFSET(0x10B49AD0)
#define CLASS_3_BD0559256C8279B1__CTOR_OFFSET UNITYSDK_OFFSET(0x10B49890)
#define CLASS_3_BD0559256C8279B1__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10B499F0)
#define CLASS_3_BD0559256C8279B1__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10B49A60)
#define CLASS_3_BD0559256C8279B1___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10B49C50)
#define CLASS_3_BD0559256C8279B1___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10B49CC0)

inline static constexpr unsigned int Class_3_BD0559256C8279B1_TypeDefinitionIndex = 47591;

class Class_3_BD0559256C8279B1 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitRogueTournCollectionBoothUpdate*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRogueTournCollectionBoothUpdate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRogueTournCollectionBoothUpdate*))((::PBYTE)hIl2Cpp + CLASS_3_BD0559256C8279B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD0559256C8279B1__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD0559256C8279B1__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_2ADBA02EC0F7C432(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_BD0559256C8279B1_METHOD_3_2ADBA02EC0F7C432_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD0559256C8279B1___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD0559256C8279B1___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRogueTournExhibitionBoothUpdate; }
namespace System { class Object; }

#define CLASS_3_0E0157CC89A4BBED_METHOD_3_2ADBA02EC0F7C432_OFFSET UNITYSDK_OFFSET(0x11DCB270)
#define CLASS_3_0E0157CC89A4BBED__CTOR_OFFSET UNITYSDK_OFFSET(0x11DCB030)
#define CLASS_3_0E0157CC89A4BBED__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11DCB190)
#define CLASS_3_0E0157CC89A4BBED__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11DCB200)
#define CLASS_3_0E0157CC89A4BBED___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11DCB3F0)
#define CLASS_3_0E0157CC89A4BBED___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11DCB460)

inline static constexpr unsigned int Class_3_0E0157CC89A4BBED_TypeDefinitionIndex = 54330;

class Class_3_0E0157CC89A4BBED : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate*))((::PBYTE)hIl2Cpp + CLASS_3_0E0157CC89A4BBED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E0157CC89A4BBED__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E0157CC89A4BBED__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_2ADBA02EC0F7C432(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_0E0157CC89A4BBED_METHOD_3_2ADBA02EC0F7C432_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E0157CC89A4BBED___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0E0157CC89A4BBED___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

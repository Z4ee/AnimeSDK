#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRogueTournExhibitionBoothUpdate; }
namespace System { class Object; }

#define CLASS_3_F5E1C39BD3CADD2C_METHOD_3_D8E44F7C510402BB_OFFSET UNITYSDK_OFFSET(0xA762510)
#define CLASS_3_F5E1C39BD3CADD2C__CTOR_OFFSET UNITYSDK_OFFSET(0xA762260)
#define CLASS_3_F5E1C39BD3CADD2C__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA7623D0)
#define CLASS_3_F5E1C39BD3CADD2C__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA762470)
#define CLASS_3_F5E1C39BD3CADD2C___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA7626A0)
#define CLASS_3_F5E1C39BD3CADD2C___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA7626B0)

inline static constexpr unsigned int Class_3_F5E1C39BD3CADD2C_TypeDefinitionIndex = 55057;

class Class_3_F5E1C39BD3CADD2C : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate*))((::PBYTE)hIl2Cpp + CLASS_3_F5E1C39BD3CADD2C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F5E1C39BD3CADD2C__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F5E1C39BD3CADD2C__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_D8E44F7C510402BB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_F5E1C39BD3CADD2C_METHOD_3_D8E44F7C510402BB_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F5E1C39BD3CADD2C___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F5E1C39BD3CADD2C___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

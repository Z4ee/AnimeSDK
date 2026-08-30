#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRogueTournExhibitionBoothUpdate; }
namespace System { class Object; }

#define CLASS_3_F5E1C39BD3CADD2C_METHOD_3_5CC3C7A9D6CEEBD6_OFFSET UNITYSDK_OFFSET(0x188D1080)
#define CLASS_3_F5E1C39BD3CADD2C__CTOR_OFFSET UNITYSDK_OFFSET(0x188D0DD0)
#define CLASS_3_F5E1C39BD3CADD2C__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x188D0F40)
#define CLASS_3_F5E1C39BD3CADD2C__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x188D0FE0)

inline static constexpr unsigned int Class_3_F5E1C39BD3CADD2C_TypeDefinitionIndex = 59072;

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

	::System::Void Method_3_5CC3C7A9D6CEEBD6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_F5E1C39BD3CADD2C_METHOD_3_5CC3C7A9D6CEEBD6_OFFSET))(this, a1);
	}
};

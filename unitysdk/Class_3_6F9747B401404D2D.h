#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDrinkMakerCheersShowMainPage; }
namespace System { class Object; }

#define CLASS_3_6F9747B401404D2D_METHOD_3_7DD2ABCCFE16960C_OFFSET UNITYSDK_OFFSET(0x145588C0)
#define CLASS_3_6F9747B401404D2D__CTOR_OFFSET UNITYSDK_OFFSET(0x145585B0)
#define CLASS_3_6F9747B401404D2D__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x14558740)
#define CLASS_3_6F9747B401404D2D__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x14558800)

inline static constexpr unsigned int Class_3_6F9747B401404D2D_TypeDefinitionIndex = 56252;

class Class_3_6F9747B401404D2D : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitDrinkMakerCheersShowMainPage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage*))((::PBYTE)hIl2Cpp + CLASS_3_6F9747B401404D2D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F9747B401404D2D__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F9747B401404D2D__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_7DD2ABCCFE16960C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_6F9747B401404D2D_METHOD_3_7DD2ABCCFE16960C_OFFSET))(this, a1);
	}
};

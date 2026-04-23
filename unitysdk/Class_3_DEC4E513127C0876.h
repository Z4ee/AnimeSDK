#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDrinkMakerCheersShowMainPage; }
namespace System { class Object; }

#define CLASS_3_DEC4E513127C0876_METHOD_3_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x124D5AF0)
#define CLASS_3_DEC4E513127C0876__CTOR_OFFSET UNITYSDK_OFFSET(0x124D5850)
#define CLASS_3_DEC4E513127C0876__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x124D59D0)
#define CLASS_3_DEC4E513127C0876__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x124D5A60)
#define CLASS_3_DEC4E513127C0876___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x124D5BF0)
#define CLASS_3_DEC4E513127C0876___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x124D5C00)

inline static constexpr unsigned int Class_3_DEC4E513127C0876_TypeDefinitionIndex = 54292;

class Class_3_DEC4E513127C0876 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitDrinkMakerCheersShowMainPage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage*))((::PBYTE)hIl2Cpp + CLASS_3_DEC4E513127C0876__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC4E513127C0876__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC4E513127C0876__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_DEC4E513127C0876_METHOD_3_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC4E513127C0876___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEC4E513127C0876___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

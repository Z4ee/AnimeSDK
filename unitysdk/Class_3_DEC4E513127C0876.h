#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDrinkMakerCheersShowMainPage; }
namespace System { class Object; }

#define CLASS_3_DEC4E513127C0876_METHOD_3_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x89BCED0)
#define CLASS_3_DEC4E513127C0876__CTOR_OFFSET UNITYSDK_OFFSET(0x89BCC30)
#define CLASS_3_DEC4E513127C0876__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x89BCDB0)
#define CLASS_3_DEC4E513127C0876__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x89BCE40)
#define CLASS_3_DEC4E513127C0876___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x89BCFD0)
#define CLASS_3_DEC4E513127C0876___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x89BCFE0)

inline static constexpr unsigned int Class_3_DEC4E513127C0876_TypeDefinitionIndex = 47555;

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

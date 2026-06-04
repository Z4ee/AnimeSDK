#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitEntityEvent; }
namespace System { class String; }

#define CLASS_3_84C1D2ED24B9286E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA43D760)
#define CLASS_3_84C1D2ED24B9286E_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA43D940)
#define CLASS_3_84C1D2ED24B9286E_METHOD_3_A57296D1929045EC_OFFSET UNITYSDK_OFFSET(0xA43DA70)
#define CLASS_3_84C1D2ED24B9286E_METHOD_3_BAE7592D149B0E7F_OFFSET UNITYSDK_OFFSET(0xA43DC00)
#define CLASS_3_84C1D2ED24B9286E__CTOR_OFFSET UNITYSDK_OFFSET(0xA43D3D0)
#define CLASS_3_84C1D2ED24B9286E__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA43D7B0)
#define CLASS_3_84C1D2ED24B9286E__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA43D9A0)
#define CLASS_3_84C1D2ED24B9286E___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA43DC80)
#define CLASS_3_84C1D2ED24B9286E___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA43DCD0)
#define CLASS_3_84C1D2ED24B9286E___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA43DCE0)

inline static constexpr unsigned int Class_3_84C1D2ED24B9286E_TypeDefinitionIndex = 49123;

class Class_3_84C1D2ED24B9286E : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitEntityEvent*>
{
public:
	::System::String* Field_3_0; // 0x68
	::RPG::GameCore::GameEntity* Field_3_1; // 0x70
	::System::UInt32 Field_3_2; // 0x78

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitEntityEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitEntityEvent*))((::PBYTE)hIl2Cpp + CLASS_3_84C1D2ED24B9286E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84C1D2ED24B9286E_DISPOSE_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84C1D2ED24B9286E__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84C1D2ED24B9286E__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_A57296D1929045EC(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_3_84C1D2ED24B9286E_METHOD_3_A57296D1929045EC_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_BAE7592D149B0E7F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_84C1D2ED24B9286E_METHOD_3_BAE7592D149B0E7F_OFFSET))(this, a1);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84C1D2ED24B9286E_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84C1D2ED24B9286E___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84C1D2ED24B9286E___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84C1D2ED24B9286E___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

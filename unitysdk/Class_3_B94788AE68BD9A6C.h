#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorCustomValueChange; }
namespace System { class String; }

#define CLASS_3_B94788AE68BD9A6C_METHOD_3_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x1236DE60)
#define CLASS_3_B94788AE68BD9A6C__CTOR_OFFSET UNITYSDK_OFFSET(0x1236DC60)
#define CLASS_3_B94788AE68BD9A6C__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1236DF60)
#define CLASS_3_B94788AE68BD9A6C__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1236E060)
#define CLASS_3_B94788AE68BD9A6C___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1236E150)
#define CLASS_3_B94788AE68BD9A6C___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1236E160)

inline static constexpr unsigned int Class_3_B94788AE68BD9A6C_TypeDefinitionIndex = 49296;

class Class_3_B94788AE68BD9A6C : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitFloorCustomValueChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorCustomValueChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorCustomValueChange*))((::PBYTE)hIl2Cpp + CLASS_3_B94788AE68BD9A6C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_B94788AE68BD9A6C_METHOD_3_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B94788AE68BD9A6C__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B94788AE68BD9A6C__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B94788AE68BD9A6C___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B94788AE68BD9A6C___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

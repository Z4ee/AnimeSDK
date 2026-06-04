#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::Client { class MissionModule; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMissionCustomValueChange; }
namespace System { class String; }

#define CLASS_3_69B41F515A518C5D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA44B2F0)
#define CLASS_3_69B41F515A518C5D_METHOD_3_6EA824B987E032BB_OFFSET UNITYSDK_OFFSET(0xA44B550)
#define CLASS_3_69B41F515A518C5D__CTOR_OFFSET UNITYSDK_OFFSET(0xA44B050)
#define CLASS_3_69B41F515A518C5D__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xA44B340)
#define CLASS_3_69B41F515A518C5D__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA44B390)
#define CLASS_3_69B41F515A518C5D__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA44B470)
#define CLASS_3_69B41F515A518C5D___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA44B6B0)
#define CLASS_3_69B41F515A518C5D___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xA44B700)
#define CLASS_3_69B41F515A518C5D___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA44B750)
#define CLASS_3_69B41F515A518C5D___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA44B760)

inline static constexpr unsigned int Class_3_69B41F515A518C5D_TypeDefinitionIndex = 49972;

class Class_3_69B41F515A518C5D : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitMissionCustomValueChange*>
{
public:
	::RPG::Client::MissionModule* Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMissionCustomValueChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMissionCustomValueChange*))((::PBYTE)hIl2Cpp + CLASS_3_69B41F515A518C5D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69B41F515A518C5D_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69B41F515A518C5D__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69B41F515A518C5D__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69B41F515A518C5D__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_6EA824B987E032BB(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_69B41F515A518C5D_METHOD_3_6EA824B987E032BB_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69B41F515A518C5D___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69B41F515A518C5D___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69B41F515A518C5D___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69B41F515A518C5D___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

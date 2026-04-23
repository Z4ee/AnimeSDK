#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_298A90B03D7BB92F;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_E9B4A16C3CC1D841_3_METHOD_3_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x9598CE0)
#define CLASS_3_E9B4A16C3CC1D841_3__CTOR_OFFSET UNITYSDK_OFFSET(0x9598A30)
#define CLASS_3_E9B4A16C3CC1D841_3__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9598BC0)
#define CLASS_3_E9B4A16C3CC1D841_3__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9598C50)
#define CLASS_3_E9B4A16C3CC1D841_3___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9598DE0)
#define CLASS_3_E9B4A16C3CC1D841_3___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9598DF0)

inline static constexpr unsigned int Class_3_E9B4A16C3CC1D841_3_TypeDefinitionIndex = 49293;

class Class_3_E9B4A16C3CC1D841_3 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_298A90B03D7BB92F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_298A90B03D7BB92F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_298A90B03D7BB92F*))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841_3__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841_3__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841_3_METHOD_3_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841_3___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841_3___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

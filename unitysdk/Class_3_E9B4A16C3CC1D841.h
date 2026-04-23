#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_48C0863CAA8EB6BB_3;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_E9B4A16C3CC1D841_METHOD_3_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x11B13250)
#define CLASS_3_E9B4A16C3CC1D841__CTOR_OFFSET UNITYSDK_OFFSET(0x11B12FB0)
#define CLASS_3_E9B4A16C3CC1D841__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11B13130)
#define CLASS_3_E9B4A16C3CC1D841__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11B131C0)
#define CLASS_3_E9B4A16C3CC1D841___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11B13350)
#define CLASS_3_E9B4A16C3CC1D841___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11B13360)

inline static constexpr unsigned int Class_3_E9B4A16C3CC1D841_TypeDefinitionIndex = 48773;

class Class_3_E9B4A16C3CC1D841 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_48C0863CAA8EB6BB_3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_48C0863CAA8EB6BB_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_48C0863CAA8EB6BB_3*))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841_METHOD_3_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9B4A16C3CC1D841___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_1_64D890C466F37235;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRotatableRegionChange; }
namespace System { class Object; }

#define CLASS_3_EF97853890A0F8E6_METHOD_3_A10DADB5B6A4C8AC_OFFSET UNITYSDK_OFFSET(0xA4BD130)
#define CLASS_3_EF97853890A0F8E6__CTOR_OFFSET UNITYSDK_OFFSET(0xA4BCD30)
#define CLASS_3_EF97853890A0F8E6__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xA4BCEC0)
#define CLASS_3_EF97853890A0F8E6__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA4BCFB0)
#define CLASS_3_EF97853890A0F8E6__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA4BD070)
#define CLASS_3_EF97853890A0F8E6___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xA4BD290)
#define CLASS_3_EF97853890A0F8E6___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA4BD2A0)
#define CLASS_3_EF97853890A0F8E6___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA4BD2B0)

inline static constexpr unsigned int Class_3_EF97853890A0F8E6_TypeDefinitionIndex = 49546;

class Class_3_EF97853890A0F8E6 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitRotatableRegionChange*>
{
public:
	::Class_1_64D890C466F37235* Field_3_0; // 0x68
	::System::Int32 Field_3_1; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRotatableRegionChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRotatableRegionChange*))((::PBYTE)hIl2Cpp + CLASS_3_EF97853890A0F8E6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF97853890A0F8E6__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF97853890A0F8E6__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF97853890A0F8E6__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_A10DADB5B6A4C8AC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_EF97853890A0F8E6_METHOD_3_A10DADB5B6A4C8AC_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF97853890A0F8E6___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF97853890A0F8E6___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF97853890A0F8E6___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

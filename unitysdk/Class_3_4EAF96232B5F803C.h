#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGroupStateChange; }

#define CLASS_3_4EAF96232B5F803C_METHOD_3_4930847B1B18C7DA_OFFSET UNITYSDK_OFFSET(0x12A94520)
#define CLASS_3_4EAF96232B5F803C_METHOD_3_4D26F58D36CA150E_OFFSET UNITYSDK_OFFSET(0x12A94640)
#define CLASS_3_4EAF96232B5F803C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE48EAB0)
#define CLASS_3_4EAF96232B5F803C__CTOR_OFFSET UNITYSDK_OFFSET(0xE48E870)
#define CLASS_3_4EAF96232B5F803C__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xE48EB30)
#define CLASS_3_4EAF96232B5F803C__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x12A942A0)
#define CLASS_3_4EAF96232B5F803C__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x12A943E0)
#define CLASS_3_4EAF96232B5F803C___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12A946F0)
#define CLASS_3_4EAF96232B5F803C___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x12A94790)
#define CLASS_3_4EAF96232B5F803C___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x12A947A0)
#define CLASS_3_4EAF96232B5F803C___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x12A947B0)

inline static constexpr unsigned int Class_3_4EAF96232B5F803C_TypeDefinitionIndex = 49970;

class Class_3_4EAF96232B5F803C : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitGroupStateChange*>
{
public:
	::System::UInt32 Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGroupStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGroupStateChange*))((::PBYTE)hIl2Cpp + CLASS_3_4EAF96232B5F803C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EAF96232B5F803C_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EAF96232B5F803C__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EAF96232B5F803C__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EAF96232B5F803C__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_4930847B1B18C7DA(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_4EAF96232B5F803C_METHOD_3_4930847B1B18C7DA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4D26F58D36CA150E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_4EAF96232B5F803C_METHOD_3_4D26F58D36CA150E_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EAF96232B5F803C___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EAF96232B5F803C___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EAF96232B5F803C___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EAF96232B5F803C___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorSavedValueChangeV2; }
namespace System { class String; }

#define CLASS_3_21467A3AEDEFDA35_METHOD_3_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x143AE580)
#define CLASS_3_21467A3AEDEFDA35__CTOR_OFFSET UNITYSDK_OFFSET(0x143AE370)
#define CLASS_3_21467A3AEDEFDA35__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x143AE880)
#define CLASS_3_21467A3AEDEFDA35__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x143AE650)
#define CLASS_3_21467A3AEDEFDA35__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x143AE760)
#define CLASS_3_21467A3AEDEFDA35___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x143AE9B0)
#define CLASS_3_21467A3AEDEFDA35___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x143AE990)
#define CLASS_3_21467A3AEDEFDA35___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x143AE9A0)

inline static constexpr unsigned int Class_3_21467A3AEDEFDA35_TypeDefinitionIndex = 49966;

class Class_3_21467A3AEDEFDA35 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitFloorSavedValueChangeV2*>
{
public:
	::System::String* Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorSavedValueChangeV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorSavedValueChangeV2*))((::PBYTE)hIl2Cpp + CLASS_3_21467A3AEDEFDA35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_21467A3AEDEFDA35_METHOD_3_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_21467A3AEDEFDA35__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_21467A3AEDEFDA35__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_21467A3AEDEFDA35__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_21467A3AEDEFDA35___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_21467A3AEDEFDA35___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_21467A3AEDEFDA35___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}
};

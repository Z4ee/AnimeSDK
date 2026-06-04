#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropEventInBattle; }
namespace System { class Object; }

#define CLASS_3_BAF8A020BC857ED2_METHOD_3_F69068FADEFBD596_OFFSET UNITYSDK_OFFSET(0x14609110)
#define CLASS_3_BAF8A020BC857ED2__CTOR_OFFSET UNITYSDK_OFFSET(0x14608F40)
#define CLASS_3_BAF8A020BC857ED2__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x14609280)
#define CLASS_3_BAF8A020BC857ED2__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x14609340)
#define CLASS_3_BAF8A020BC857ED2___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x14609400)
#define CLASS_3_BAF8A020BC857ED2___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x14609410)

inline static constexpr unsigned int Class_3_BAF8A020BC857ED2_TypeDefinitionIndex = 49982;

class Class_3_BAF8A020BC857ED2 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitPropEventInBattle*>
{
public:
	::System::Int32 Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropEventInBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropEventInBattle*))((::PBYTE)hIl2Cpp + CLASS_3_BAF8A020BC857ED2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F69068FADEFBD596(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_BAF8A020BC857ED2_METHOD_3_F69068FADEFBD596_OFFSET))(this, a1);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BAF8A020BC857ED2__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BAF8A020BC857ED2__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BAF8A020BC857ED2___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BAF8A020BC857ED2___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

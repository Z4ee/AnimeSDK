#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMatchThreeBirdLocationChange; }
namespace System { class Object; }

#define CLASS_3_53531B0C5A14BC20_METHOD_3_F69068FADEFBD596_OFFSET UNITYSDK_OFFSET(0x127CE830)
#define CLASS_3_53531B0C5A14BC20__CTOR_OFFSET UNITYSDK_OFFSET(0x127CE560)
#define CLASS_3_53531B0C5A14BC20__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x127CE710)
#define CLASS_3_53531B0C5A14BC20__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x127CE7A0)
#define CLASS_3_53531B0C5A14BC20___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x127CE9A0)
#define CLASS_3_53531B0C5A14BC20___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x127CE9B0)

inline static constexpr unsigned int Class_3_53531B0C5A14BC20_TypeDefinitionIndex = 48886;

class Class_3_53531B0C5A14BC20 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitMatchThreeBirdLocationChange*>
{
public:
	::System::UInt32 Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMatchThreeBirdLocationChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMatchThreeBirdLocationChange*))((::PBYTE)hIl2Cpp + CLASS_3_53531B0C5A14BC20__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53531B0C5A14BC20__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53531B0C5A14BC20__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_F69068FADEFBD596(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_53531B0C5A14BC20_METHOD_3_F69068FADEFBD596_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53531B0C5A14BC20___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53531B0C5A14BC20___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

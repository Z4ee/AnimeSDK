#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLittleGameCustomEvent; }
namespace System { class String; }

#define CLASS_3_241C564BFB74F918_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA1C6740)
#define CLASS_3_241C564BFB74F918__CTOR_OFFSET UNITYSDK_OFFSET(0xA1C65E0)
#define CLASS_3_241C564BFB74F918__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xA1C67A0)
#define CLASS_3_241C564BFB74F918__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1C69F0)
#define CLASS_3_241C564BFB74F918__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1C6C60)
#define CLASS_3_241C564BFB74F918___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA1C6ED0)
#define CLASS_3_241C564BFB74F918___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xA1C6F30)
#define CLASS_3_241C564BFB74F918___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1C6F40)
#define CLASS_3_241C564BFB74F918___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1C6F50)

inline static constexpr unsigned int Class_3_241C564BFB74F918_TypeDefinitionIndex = 42858;

class Class_3_241C564BFB74F918 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitLittleGameCustomEvent*>
{
public:
	::System::String* Field_3_0; // 0x68
	::System::UInt32 Field_3_1; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitLittleGameCustomEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

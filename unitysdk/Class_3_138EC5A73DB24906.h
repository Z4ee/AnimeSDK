#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLittleGameCustomEvent; }
namespace System { class String; }

#define CLASS_3_138EC5A73DB24906_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x142FB3D0)
#define CLASS_3_138EC5A73DB24906__CTOR_OFFSET UNITYSDK_OFFSET(0x142FB260)
#define CLASS_3_138EC5A73DB24906__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x142FB430)
#define CLASS_3_138EC5A73DB24906__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x142FB680)
#define CLASS_3_138EC5A73DB24906__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x142FBAD0)
#define CLASS_3_138EC5A73DB24906___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x142FBF20)
#define CLASS_3_138EC5A73DB24906___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x142FBF80)
#define CLASS_3_138EC5A73DB24906___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x142FBF90)
#define CLASS_3_138EC5A73DB24906___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x142FBFA0)

inline static constexpr unsigned int Class_3_138EC5A73DB24906_TypeDefinitionIndex = 49508;

class Class_3_138EC5A73DB24906 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitLittleGameCustomEvent*>
{
public:
	::System::String* Field_3_0; // 0x68
	::System::UInt32 Field_3_1; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitLittleGameCustomEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + CLASS_3_138EC5A73DB24906__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_138EC5A73DB24906_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_138EC5A73DB24906__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_138EC5A73DB24906__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_138EC5A73DB24906__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_138EC5A73DB24906___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_138EC5A73DB24906___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_138EC5A73DB24906___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_138EC5A73DB24906___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

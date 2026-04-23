#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_1_151B93D9C4BBDCA4;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLittleGameLevelVarChange; }
namespace System { class String; }

#define CLASS_3_14B987D3731A5209_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x129FA570)
#define CLASS_3_14B987D3731A5209__CTOR_OFFSET UNITYSDK_OFFSET(0x129FA370)
#define CLASS_3_14B987D3731A5209__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x129FA5D0)
#define CLASS_3_14B987D3731A5209__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x129FA6D0)
#define CLASS_3_14B987D3731A5209__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x129FA7C0)
#define CLASS_3_14B987D3731A5209___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x129FA8B0)
#define CLASS_3_14B987D3731A5209___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x129FA910)
#define CLASS_3_14B987D3731A5209___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x129FA920)
#define CLASS_3_14B987D3731A5209___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x129FA930)

inline static constexpr unsigned int Class_3_14B987D3731A5209_TypeDefinitionIndex = 48848;

class Class_3_14B987D3731A5209 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitLittleGameLevelVarChange*>
{
public:
	::System::String* Field_3_1; // 0x68
	::Class_1_151B93D9C4BBDCA4* Field_3_0; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitLittleGameLevelVarChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitLittleGameLevelVarChange*))((::PBYTE)hIl2Cpp + CLASS_3_14B987D3731A5209__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14B987D3731A5209_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14B987D3731A5209__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14B987D3731A5209__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14B987D3731A5209__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14B987D3731A5209___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14B987D3731A5209___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14B987D3731A5209___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14B987D3731A5209___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};

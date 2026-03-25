#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapRotationListenerBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRotatableRegionLoadingStateChange; }
namespace System { class Object; }

#define CLASS_3_D7FC114DCF614244_METHOD_3_1163E691B9066722_OFFSET UNITYSDK_OFFSET(0x1164D6B0)
#define CLASS_3_D7FC114DCF614244_METHOD_3_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x1164D620)
#define CLASS_3_D7FC114DCF614244_METHOD_3_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x1164D530)
#define CLASS_3_D7FC114DCF614244_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1164D4E0)
#define CLASS_3_D7FC114DCF614244_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1164D5C0)
#define CLASS_3_D7FC114DCF614244__CTOR_OFFSET UNITYSDK_OFFSET(0x1164D420)
#define CLASS_3_D7FC114DCF614244___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1164D720)
#define CLASS_3_D7FC114DCF614244___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1164D770)

inline static constexpr unsigned int Class_3_D7FC114DCF614244_TypeDefinitionIndex = 42884;

class Class_3_D7FC114DCF614244 : public ::RPG::GameCore::MapRotationListenerBase_1<::RPG::GameCore::WaitRotatableRegionLoadingStateChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange*))((::PBYTE)hIl2Cpp + CLASS_3_D7FC114DCF614244__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7FC114DCF614244_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7FC114DCF614244_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7FC114DCF614244_METHOD_3_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_3_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7FC114DCF614244_METHOD_3_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_3_1163E691B9066722(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_D7FC114DCF614244_METHOD_3_1163E691B9066722_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7FC114DCF614244___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7FC114DCF614244___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};

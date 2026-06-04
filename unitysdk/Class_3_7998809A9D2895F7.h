#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85AC304C554D1558_3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7998809A9D2895F7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB994E0)
#define CLASS_3_7998809A9D2895F7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAB99520)
#define CLASS_3_7998809A9D2895F7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAB99590)
#define CLASS_3_7998809A9D2895F7_TICK_OFFSET UNITYSDK_OFFSET(0xAB995E0)
#define CLASS_3_7998809A9D2895F7__CTOR_OFFSET UNITYSDK_OFFSET(0xAB994A0)
#define CLASS_3_7998809A9D2895F7___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB99640)
#define CLASS_3_7998809A9D2895F7___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAB99680)
#define CLASS_3_7998809A9D2895F7___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xAB996D0)

inline static constexpr unsigned int Class_3_7998809A9D2895F7_TypeDefinitionIndex = 54364;

class Class_3_7998809A9D2895F7 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_3*>
{
public:
	::System::Boolean Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_3*))((::PBYTE)hIl2Cpp + CLASS_3_7998809A9D2895F7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7998809A9D2895F7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7998809A9D2895F7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7998809A9D2895F7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7998809A9D2895F7_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7998809A9D2895F7___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7998809A9D2895F7___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7998809A9D2895F7___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};

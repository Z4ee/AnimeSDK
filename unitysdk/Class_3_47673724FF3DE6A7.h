#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_29ADE9724E15BDC9;
class Class_3_2641F1F88DCFA311;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_47673724FF3DE6A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9914D90)
#define CLASS_3_47673724FF3DE6A7_METHOD_3_9FE8229FA80E064B_OFFSET UNITYSDK_OFFSET(0x9914EF0)
#define CLASS_3_47673724FF3DE6A7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9914DD0)
#define CLASS_3_47673724FF3DE6A7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x99152C0)
#define CLASS_3_47673724FF3DE6A7_TICK_OFFSET UNITYSDK_OFFSET(0x9915310)
#define CLASS_3_47673724FF3DE6A7__CTOR_OFFSET UNITYSDK_OFFSET(0x9914D60)
#define CLASS_3_47673724FF3DE6A7___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9915370)
#define CLASS_3_47673724FF3DE6A7___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x99153B0)
#define CLASS_3_47673724FF3DE6A7___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9915400)

inline static constexpr unsigned int Class_3_47673724FF3DE6A7_TypeDefinitionIndex = 53655;

class Class_3_47673724FF3DE6A7 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2641F1F88DCFA311*>
{
public:
	::Class_3_2641F1F88DCFA311* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2641F1F88DCFA311* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2641F1F88DCFA311*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_9FE8229FA80E064B(::Class_1_29ADE9724E15BDC9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_29ADE9724E15BDC9*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_METHOD_3_9FE8229FA80E064B_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};

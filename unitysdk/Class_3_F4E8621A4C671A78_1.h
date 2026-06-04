#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85AC304C554D1558_11;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F4E8621A4C671A78_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1445F8A0)
#define CLASS_3_F4E8621A4C671A78_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1445F8E0)
#define CLASS_3_F4E8621A4C671A78_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1445F9B0)
#define CLASS_3_F4E8621A4C671A78_1_TICK_OFFSET UNITYSDK_OFFSET(0x1445FA00)
#define CLASS_3_F4E8621A4C671A78_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1445F870)
#define CLASS_3_F4E8621A4C671A78_1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1445FA60)
#define CLASS_3_F4E8621A4C671A78_1___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1445FAA0)
#define CLASS_3_F4E8621A4C671A78_1___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1445FAF0)

inline static constexpr unsigned int Class_3_F4E8621A4C671A78_1_TypeDefinitionIndex = 49438;

class Class_3_F4E8621A4C671A78_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85AC304C554D1558_11*>
{
public:
	::Class_3_85AC304C554D1558_11* Field_3_0; // 0x28
	::RPG::GameCore::TaskContext* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_11* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_11*))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_1_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_1___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_1___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};

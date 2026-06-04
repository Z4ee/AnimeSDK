#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_85CDC97563BA896D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F4E8621A4C671A78_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC465D80)
#define CLASS_3_F4E8621A4C671A78_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC465DC0)
#define CLASS_3_F4E8621A4C671A78_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC465EA0)
#define CLASS_3_F4E8621A4C671A78_TICK_OFFSET UNITYSDK_OFFSET(0xC465EF0)
#define CLASS_3_F4E8621A4C671A78__CTOR_OFFSET UNITYSDK_OFFSET(0xC465D50)
#define CLASS_3_F4E8621A4C671A78___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC465F50)
#define CLASS_3_F4E8621A4C671A78___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC465F90)
#define CLASS_3_F4E8621A4C671A78___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xC465FE0)

inline static constexpr unsigned int Class_3_F4E8621A4C671A78_TypeDefinitionIndex = 49409;

class Class_3_F4E8621A4C671A78 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_85CDC97563BA896D*>
{
public:
	::RPG::GameCore::TaskContext* Field_3_0; // 0x28
	::Class_3_85CDC97563BA896D* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85CDC97563BA896D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85CDC97563BA896D*))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};

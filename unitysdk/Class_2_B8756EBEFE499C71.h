#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ShowEnterPasswordPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_B8756EBEFE499C71_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA271D0)
#define CLASS_2_B8756EBEFE499C71_METHOD_2_0D7638DBC93E5002_1_OFFSET UNITYSDK_OFFSET(0xBA27BB0)
#define CLASS_2_B8756EBEFE499C71_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xBA278E0)
#define CLASS_2_B8756EBEFE499C71_METHOD_2_295B0FA1282F1A6E_OFFSET UNITYSDK_OFFSET(0xBA27A20)
#define CLASS_2_B8756EBEFE499C71_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA273E0)
#define CLASS_2_B8756EBEFE499C71_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA27660)
#define CLASS_2_B8756EBEFE499C71_TICK_OFFSET UNITYSDK_OFFSET(0xBA277A0)
#define CLASS_2_B8756EBEFE499C71__CTOR_OFFSET UNITYSDK_OFFSET(0xBA27070)

inline static constexpr unsigned int Class_2_B8756EBEFE499C71_TypeDefinitionIndex = 58785;

class Class_2_B8756EBEFE499C71 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* IKNPCLDDCDI; // 0x18
	::RPG::GameCore::ShowEnterPasswordPage* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::Class_3_07C3C4D2990C49EE* CDDKIBEMBOM; // 0x30
	::Class_3_07C3C4D2990C49EE* BJLJHFHKDCA; // 0x38
	::Class_3_07C3C4D2990C49EE* GNHLFKDFLKO; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEnterPasswordPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEnterPasswordPage*))((::PBYTE)hIl2Cpp + CLASS_2_B8756EBEFE499C71__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8756EBEFE499C71_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8756EBEFE499C71_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8756EBEFE499C71_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B8756EBEFE499C71_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8756EBEFE499C71_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_295B0FA1282F1A6E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B8756EBEFE499C71_METHOD_2_295B0FA1282F1A6E_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D7638DBC93E5002_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8756EBEFE499C71_METHOD_2_0D7638DBC93E5002_1_OFFSET))(this);
	}
};

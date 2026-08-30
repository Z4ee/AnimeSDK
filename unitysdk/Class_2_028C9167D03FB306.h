#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueTakeInitialScore; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_028C9167D03FB306_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A01710)
#define CLASS_2_028C9167D03FB306_METHOD_2_AE05FAC67B64BC50_OFFSET UNITYSDK_OFFSET(0x18A018D0)
#define CLASS_2_028C9167D03FB306_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18A01830)
#define CLASS_2_028C9167D03FB306_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18A01880)
#define CLASS_2_028C9167D03FB306_TICK_OFFSET UNITYSDK_OFFSET(0x18A017D0)
#define CLASS_2_028C9167D03FB306__CTOR_OFFSET UNITYSDK_OFFSET(0x18A01700)

inline static constexpr unsigned int Class_2_028C9167D03FB306_TypeDefinitionIndex = 58623;

class Class_2_028C9167D03FB306 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::RogueTakeInitialScore* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTakeInitialScore* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTakeInitialScore*))((::PBYTE)hIl2Cpp + CLASS_2_028C9167D03FB306__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_028C9167D03FB306_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_028C9167D03FB306_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_028C9167D03FB306_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_028C9167D03FB306_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_AE05FAC67B64BC50(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_028C9167D03FB306_METHOD_2_AE05FAC67B64BC50_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnDefineDynamicString; }

#define CLASS_2_92C91B1930AF8D7E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139D4D50)
#define CLASS_2_92C91B1930AF8D7E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139D4D90)
#define CLASS_2_92C91B1930AF8D7E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x139D4F30)
#define CLASS_2_92C91B1930AF8D7E_TICK_OFFSET UNITYSDK_OFFSET(0x139D4F80)
#define CLASS_2_92C91B1930AF8D7E__CTOR_OFFSET UNITYSDK_OFFSET(0x139D4D40)

inline static constexpr unsigned int Class_2_92C91B1930AF8D7E_TypeDefinitionIndex = 52100;

class Class_2_92C91B1930AF8D7E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::UnDefineDynamicString* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnDefineDynamicString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnDefineDynamicString*))((::PBYTE)hIl2Cpp + CLASS_2_92C91B1930AF8D7E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92C91B1930AF8D7E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92C91B1930AF8D7E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92C91B1930AF8D7E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_92C91B1930AF8D7E_TICK_OFFSET))(this, a1);
	}
};

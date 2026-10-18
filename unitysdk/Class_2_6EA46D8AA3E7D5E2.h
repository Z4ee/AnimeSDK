#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"

class Class_0_16E4307DCC419505_501;
namespace RPG::GameCore { class RemoveModifier; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6EA46D8AA3E7D5E2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156CD730)
#define CLASS_2_6EA46D8AA3E7D5E2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156CD770)
#define CLASS_2_6EA46D8AA3E7D5E2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156CDDA0)
#define CLASS_2_6EA46D8AA3E7D5E2_TICK_OFFSET UNITYSDK_OFFSET(0x156CDDF0)
#define CLASS_2_6EA46D8AA3E7D5E2__CTOR_OFFSET UNITYSDK_OFFSET(0x156CD720)

inline static constexpr unsigned int Class_2_6EA46D8AA3E7D5E2_TypeDefinitionIndex = 55310;

class Class_2_6EA46D8AA3E7D5E2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RemoveModifier* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::ArrayPoolWrapper_1<::Class_0_16E4307DCC419505_501*> HEJKAKEJCMP; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveModifier*))((::PBYTE)hIl2Cpp + CLASS_2_6EA46D8AA3E7D5E2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EA46D8AA3E7D5E2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EA46D8AA3E7D5E2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6EA46D8AA3E7D5E2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6EA46D8AA3E7D5E2_TICK_OFFSET))(this, a1);
	}
};

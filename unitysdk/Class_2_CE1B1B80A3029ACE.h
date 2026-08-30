#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetMainLightOffset; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CE1B1B80A3029ACE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7DCCB0)
#define CLASS_2_CE1B1B80A3029ACE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC7DC700)
#define CLASS_2_CE1B1B80A3029ACE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC7DCC00)
#define CLASS_2_CE1B1B80A3029ACE_TICK_OFFSET UNITYSDK_OFFSET(0xC7DCC50)
#define CLASS_2_CE1B1B80A3029ACE__CTOR_OFFSET UNITYSDK_OFFSET(0xC7DC6F0)

inline static constexpr unsigned int Class_2_CE1B1B80A3029ACE_TypeDefinitionIndex = 56597;

class Class_2_CE1B1B80A3029ACE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetMainLightOffset* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMainLightOffset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMainLightOffset*))((::PBYTE)hIl2Cpp + CLASS_2_CE1B1B80A3029ACE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE1B1B80A3029ACE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE1B1B80A3029ACE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CE1B1B80A3029ACE_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE1B1B80A3029ACE_DISPOSE_OFFSET))(this);
	}
};

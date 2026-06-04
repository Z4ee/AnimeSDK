#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MonsterTeamAppear; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6D3B03964E11C963_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA55EB00)
#define CLASS_2_6D3B03964E11C963_METHOD_2_52E581C3710DF4C6_OFFSET UNITYSDK_OFFSET(0xA55EBA0)
#define CLASS_2_6D3B03964E11C963_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA55EB40)
#define CLASS_2_6D3B03964E11C963_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA55EDB0)
#define CLASS_2_6D3B03964E11C963_TICK_OFFSET UNITYSDK_OFFSET(0xA55EE00)
#define CLASS_2_6D3B03964E11C963__CTOR_OFFSET UNITYSDK_OFFSET(0xA55EAF0)

inline static constexpr unsigned int Class_2_6D3B03964E11C963_TypeDefinitionIndex = 54426;

class Class_2_6D3B03964E11C963 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MonsterTeamAppear* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonsterTeamAppear* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonsterTeamAppear*))((::PBYTE)hIl2Cpp + CLASS_2_6D3B03964E11C963__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D3B03964E11C963_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D3B03964E11C963_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D3B03964E11C963_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6D3B03964E11C963_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_52E581C3710DF4C6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D3B03964E11C963_METHOD_2_52E581C3710DF4C6_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowReading; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_57DB7853174FF319_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB048740)
#define CLASS_2_57DB7853174FF319_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB048CC0)
#define CLASS_2_57DB7853174FF319_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB048C40)
#define CLASS_2_57DB7853174FF319_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB048780)
#define CLASS_2_57DB7853174FF319_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB048B90)
#define CLASS_2_57DB7853174FF319_TICK_OFFSET UNITYSDK_OFFSET(0xB048BE0)
#define CLASS_2_57DB7853174FF319__CTOR_OFFSET UNITYSDK_OFFSET(0xB048730)

inline static constexpr unsigned int Class_2_57DB7853174FF319_TypeDefinitionIndex = 54824;

class Class_2_57DB7853174FF319 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ShowReading* Field_2_1; // 0x20
	::RPG::Client::LuaUIController* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowReading* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowReading*))((::PBYTE)hIl2Cpp + CLASS_2_57DB7853174FF319__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57DB7853174FF319_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57DB7853174FF319_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57DB7853174FF319_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_57DB7853174FF319_TICK_OFFSET))(this, a1);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_57DB7853174FF319_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57DB7853174FF319_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

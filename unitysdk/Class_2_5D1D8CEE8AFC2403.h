#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class OnMuseumPerformanceEnd; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_5D1D8CEE8AFC2403_DISPOSE_OFFSET UNITYSDK_OFFSET(0x127D7030)
#define CLASS_2_5D1D8CEE8AFC2403_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x127D7250)
#define CLASS_2_5D1D8CEE8AFC2403_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x127D7070)
#define CLASS_2_5D1D8CEE8AFC2403_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x127D71A0)
#define CLASS_2_5D1D8CEE8AFC2403_TICK_OFFSET UNITYSDK_OFFSET(0x127D71F0)
#define CLASS_2_5D1D8CEE8AFC2403__CTOR_OFFSET UNITYSDK_OFFSET(0x127D7020)

inline static constexpr unsigned int Class_2_5D1D8CEE8AFC2403_TypeDefinitionIndex = 53710;

class Class_2_5D1D8CEE8AFC2403 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::LuaUIController* Field_2_2; // 0x18
	::RPG::GameCore::OnMuseumPerformanceEnd* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OnMuseumPerformanceEnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OnMuseumPerformanceEnd*))((::PBYTE)hIl2Cpp + CLASS_2_5D1D8CEE8AFC2403__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D1D8CEE8AFC2403_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D1D8CEE8AFC2403_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D1D8CEE8AFC2403_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D1D8CEE8AFC2403_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5D1D8CEE8AFC2403_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}
};

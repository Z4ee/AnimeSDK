#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BBD058BB94436C40_6;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8F7371890111B040_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0E2C80)
#define CLASS_2_8F7371890111B040_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB0E3450)
#define CLASS_2_8F7371890111B040_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0E2E70)
#define CLASS_2_8F7371890111B040_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB0E2D70)
#define CLASS_2_8F7371890111B040_TICK_OFFSET UNITYSDK_OFFSET(0xB0E33F0)
#define CLASS_2_8F7371890111B040__CTOR_OFFSET UNITYSDK_OFFSET(0xB0E2C70)

inline static constexpr unsigned int Class_2_8F7371890111B040_TypeDefinitionIndex = 55618;

class Class_2_8F7371890111B040 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BBD058BB94436C40_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BBD058BB94436C40_6*))((::PBYTE)hIl2Cpp + CLASS_2_8F7371890111B040__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F7371890111B040_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F7371890111B040_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F7371890111B040_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8F7371890111B040_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F7371890111B040_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_06CA57680E115A32;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8F7371890111B040_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17CB15B0)
#define CLASS_2_8F7371890111B040_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17CB1AC0)
#define CLASS_2_8F7371890111B040_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17CB17F0)
#define CLASS_2_8F7371890111B040_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17CB16D0)
#define CLASS_2_8F7371890111B040_TICK_OFFSET UNITYSDK_OFFSET(0x17CB1A60)
#define CLASS_2_8F7371890111B040__CTOR_OFFSET UNITYSDK_OFFSET(0x17CB15A0)

inline static constexpr unsigned int Class_2_8F7371890111B040_TypeDefinitionIndex = 55810;

class Class_2_8F7371890111B040 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32*))((::PBYTE)hIl2Cpp + CLASS_2_8F7371890111B040__CTOR_OFFSET))(this, a1, a2);
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

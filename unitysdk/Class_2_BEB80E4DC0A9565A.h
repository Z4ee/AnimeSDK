#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_30854311B33EC439;
class Class_3_5775A4FEC79026BC;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_BEB80E4DC0A9565A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD174E40)
#define CLASS_2_BEB80E4DC0A9565A_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xD174EF0)
#define CLASS_2_BEB80E4DC0A9565A_METHOD_2_9133398E73B9D974_OFFSET UNITYSDK_OFFSET(0xD175190)
#define CLASS_2_BEB80E4DC0A9565A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD174F80)
#define CLASS_2_BEB80E4DC0A9565A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD175080)
#define CLASS_2_BEB80E4DC0A9565A_TICK_OFFSET UNITYSDK_OFFSET(0xD175130)
#define CLASS_2_BEB80E4DC0A9565A__CTOR_OFFSET UNITYSDK_OFFSET(0xD174DB0)

inline static constexpr unsigned int Class_2_BEB80E4DC0A9565A_TypeDefinitionIndex = 42795;

class Class_2_BEB80E4DC0A9565A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_30854311B33EC439* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::RPG::Client::FiveDimGameInstance* Field_2_2; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_30854311B33EC439* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_30854311B33EC439*))((::PBYTE)hIl2Cpp + CLASS_2_BEB80E4DC0A9565A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEB80E4DC0A9565A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEB80E4DC0A9565A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEB80E4DC0A9565A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BEB80E4DC0A9565A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEB80E4DC0A9565A_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_9133398E73B9D974(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BEB80E4DC0A9565A_METHOD_2_9133398E73B9D974_OFFSET))(this, a1);
	}
};

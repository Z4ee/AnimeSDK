#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_06CA57680E115A32_19;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_71206B21D0A90B92_16_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11C30F60)
#define CLASS_2_71206B21D0A90B92_16_METHOD_2_C8F03EB4AC0A2737_OFFSET UNITYSDK_OFFSET(0x11C310E0)
#define CLASS_2_71206B21D0A90B92_16_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11C30FE0)
#define CLASS_2_71206B21D0A90B92_16_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11C30F10)
#define CLASS_2_71206B21D0A90B92_16_TICK_OFFSET UNITYSDK_OFFSET(0x11C30EB0)
#define CLASS_2_71206B21D0A90B92_16__CTOR_OFFSET UNITYSDK_OFFSET(0x11C30EA0)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_16_TypeDefinitionIndex = 53921;

class Class_2_71206B21D0A90B92_16 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_06CA57680E115A32_19* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_19* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_19*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_C8F03EB4AC0A2737(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_16_METHOD_2_C8F03EB4AC0A2737_OFFSET))(this, a1, a2);
	}
};

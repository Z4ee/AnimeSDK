#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitBPEqual; }
namespace System { class Object; }

#define CLASS_2_8BC6B2D59E218F58_DISPOSE_OFFSET UNITYSDK_OFFSET(0xED7BA30)
#define CLASS_2_8BC6B2D59E218F58_METHOD_2_28AC60D2FFA0213B_OFFSET UNITYSDK_OFFSET(0xED7BFB0)
#define CLASS_2_8BC6B2D59E218F58_METHOD_2_6EAC1ED4AC9A1703_OFFSET UNITYSDK_OFFSET(0xED7BBC0)
#define CLASS_2_8BC6B2D59E218F58_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xED7BAF0)
#define CLASS_2_8BC6B2D59E218F58_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xED7BF00)
#define CLASS_2_8BC6B2D59E218F58_TICK_OFFSET UNITYSDK_OFFSET(0xED7BF50)
#define CLASS_2_8BC6B2D59E218F58__CTOR_OFFSET UNITYSDK_OFFSET(0xED7BA20)

inline static constexpr unsigned int Class_2_8BC6B2D59E218F58_TypeDefinitionIndex = 59004;

class Class_2_8BC6B2D59E218F58 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::WaitBPEqual* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitBPEqual* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitBPEqual*))((::PBYTE)hIl2Cpp + CLASS_2_8BC6B2D59E218F58__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BC6B2D59E218F58_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BC6B2D59E218F58_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BC6B2D59E218F58_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8BC6B2D59E218F58_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6EAC1ED4AC9A1703()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BC6B2D59E218F58_METHOD_2_6EAC1ED4AC9A1703_OFFSET))(this);
	}

	::System::Void Method_2_28AC60D2FFA0213B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8BC6B2D59E218F58_METHOD_2_28AC60D2FFA0213B_OFFSET))(this, a1);
	}
};

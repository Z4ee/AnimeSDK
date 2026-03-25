#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitBPEqual; }
namespace System { class Object; }

#define CLASS_2_8BC6B2D59E218F58_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA21D8B0)
#define CLASS_2_8BC6B2D59E218F58_METHOD_2_91B230CF1BA4E824_OFFSET UNITYSDK_OFFSET(0xA21DC40)
#define CLASS_2_8BC6B2D59E218F58_METHOD_2_EC6CE26AB4985D28_OFFSET UNITYSDK_OFFSET(0xA21D9F0)
#define CLASS_2_8BC6B2D59E218F58_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA21D940)
#define CLASS_2_8BC6B2D59E218F58_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA21DB90)
#define CLASS_2_8BC6B2D59E218F58_TICK_OFFSET UNITYSDK_OFFSET(0xA21DBE0)
#define CLASS_2_8BC6B2D59E218F58__CTOR_OFFSET UNITYSDK_OFFSET(0xA21D8A0)

inline static constexpr unsigned int Class_2_8BC6B2D59E218F58_TypeDefinitionIndex = 47525;

class Class_2_8BC6B2D59E218F58 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitBPEqual* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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

	::System::Boolean Method_2_EC6CE26AB4985D28()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BC6B2D59E218F58_METHOD_2_EC6CE26AB4985D28_OFFSET))(this);
	}

	::System::Void Method_2_91B230CF1BA4E824(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8BC6B2D59E218F58_METHOD_2_91B230CF1BA4E824_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayScreenDissolve; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_A8086FA4F82BEB43_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11AACEC0)
#define CLASS_2_A8086FA4F82BEB43_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11AACC20)
#define CLASS_2_A8086FA4F82BEB43_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11AACE70)
#define CLASS_2_A8086FA4F82BEB43_TICK_OFFSET UNITYSDK_OFFSET(0x11AACF00)
#define CLASS_2_A8086FA4F82BEB43__CTOR_OFFSET UNITYSDK_OFFSET(0x11AACC10)

inline static constexpr unsigned int Class_2_A8086FA4F82BEB43_TypeDefinitionIndex = 53750;

class Class_2_A8086FA4F82BEB43 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::RPG::GameCore::PlayScreenDissolve* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayScreenDissolve* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayScreenDissolve*))((::PBYTE)hIl2Cpp + CLASS_2_A8086FA4F82BEB43__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8086FA4F82BEB43_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8086FA4F82BEB43_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8086FA4F82BEB43_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A8086FA4F82BEB43_TICK_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayScreenDissolve; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_A8086FA4F82BEB43_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5D9800)
#define CLASS_2_A8086FA4F82BEB43_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE5D94F0)
#define CLASS_2_A8086FA4F82BEB43_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE5D97B0)
#define CLASS_2_A8086FA4F82BEB43_TICK_OFFSET UNITYSDK_OFFSET(0xE5D9840)
#define CLASS_2_A8086FA4F82BEB43__CTOR_OFFSET UNITYSDK_OFFSET(0xE5D94E0)

inline static constexpr unsigned int Class_2_A8086FA4F82BEB43_TypeDefinitionIndex = 58430;

class Class_2_A8086FA4F82BEB43 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* CAGBCAELNEE; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::PlayScreenDissolve* OFKGLJOAMLD; // 0x20

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetFollowLightDeviceDamp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E30AD93D1A269424_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1D3670)
#define CLASS_2_E30AD93D1A269424_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1D35E0)
#define CLASS_2_E30AD93D1A269424_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC1D36B0)
#define CLASS_2_E30AD93D1A269424_TICK_OFFSET UNITYSDK_OFFSET(0xC1D3700)
#define CLASS_2_E30AD93D1A269424__CTOR_OFFSET UNITYSDK_OFFSET(0xC1D35D0)

inline static constexpr unsigned int Class_2_E30AD93D1A269424_TypeDefinitionIndex = 49371;

class Class_2_E30AD93D1A269424 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetFollowLightDeviceDamp* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFollowLightDeviceDamp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFollowLightDeviceDamp*))((::PBYTE)hIl2Cpp + CLASS_2_E30AD93D1A269424__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E30AD93D1A269424_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E30AD93D1A269424_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E30AD93D1A269424_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E30AD93D1A269424_TICK_OFFSET))(this, a1);
	}
};

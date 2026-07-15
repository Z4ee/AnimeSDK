#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WhiteBoxFuncCommand; }

#define CLASS_2_9526FEF6FBFC4357_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157BD580)
#define CLASS_2_9526FEF6FBFC4357_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157BD5C0)
#define CLASS_2_9526FEF6FBFC4357_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157BD750)
#define CLASS_2_9526FEF6FBFC4357_TICK_OFFSET UNITYSDK_OFFSET(0x157BD7A0)
#define CLASS_2_9526FEF6FBFC4357__CTOR_OFFSET UNITYSDK_OFFSET(0x157BD570)

inline static constexpr unsigned int Class_2_9526FEF6FBFC4357_TypeDefinitionIndex = 53289;

class Class_2_9526FEF6FBFC4357 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::WhiteBoxFuncCommand* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WhiteBoxFuncCommand* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WhiteBoxFuncCommand*))((::PBYTE)hIl2Cpp + CLASS_2_9526FEF6FBFC4357__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9526FEF6FBFC4357_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9526FEF6FBFC4357_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9526FEF6FBFC4357_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9526FEF6FBFC4357_TICK_OFFSET))(this, a1);
	}
};

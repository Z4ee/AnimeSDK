#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class BlockSubmitEvents; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5E35575E64332711_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143452F0)
#define CLASS_2_5E35575E64332711_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14345330)
#define CLASS_2_5E35575E64332711_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x143453C0)
#define CLASS_2_5E35575E64332711_TICK_OFFSET UNITYSDK_OFFSET(0x14345410)
#define CLASS_2_5E35575E64332711__CTOR_OFFSET UNITYSDK_OFFSET(0x143452E0)

inline static constexpr unsigned int Class_2_5E35575E64332711_TypeDefinitionIndex = 49134;

class Class_2_5E35575E64332711 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::BlockSubmitEvents* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BlockSubmitEvents* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BlockSubmitEvents*))((::PBYTE)hIl2Cpp + CLASS_2_5E35575E64332711__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E35575E64332711_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E35575E64332711_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E35575E64332711_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5E35575E64332711_TICK_OFFSET))(this, a1);
	}
};

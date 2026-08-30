#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_B7E1DFC56842FF79;
namespace RPG::GameCore { class SkillData; }

#define STRUCT_2_63A26005F342F189_DISPOSE_OFFSET UNITYSDK_OFFSET(0x901B0)
#define STRUCT_2_63A26005F342F189__CTOR_OFFSET UNITYSDK_OFFSET(0x901A0)

inline static constexpr unsigned int Struct_2_63A26005F342F189_TypeDefinitionIndex = 57824;

struct alignas(8) Struct_2_63A26005F342F189
{
	::Class_1_B7E1DFC56842FF79* IEGBIPMGBPA; // 0x10

	::System::Void _ctor(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + STRUCT_2_63A26005F342F189__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_63A26005F342F189_DISPOSE_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C73CD6C2F6B3B018.h"

class Class_1_843DD6330B22E422;
class Class_5_22335FFF1793F6C2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_C5E8E04ED3F97745_METHOD_4_18A14F961AC502D9_OFFSET UNITYSDK_OFFSET(0x162622A0)
#define CLASS_4_C5E8E04ED3F97745__CTOR_OFFSET UNITYSDK_OFFSET(0x16262290)

inline static constexpr unsigned int Class_4_C5E8E04ED3F97745_TypeDefinitionIndex = 53450;

class Class_4_C5E8E04ED3F97745 : public ::Class_3_C73CD6C2F6B3B018
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_5_22335FFF1793F6C2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_5_22335FFF1793F6C2*))((::PBYTE)hIl2Cpp + CLASS_4_C5E8E04ED3F97745__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_18A14F961AC502D9(::Class_1_843DD6330B22E422*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*&))((::PBYTE)hIl2Cpp + CLASS_4_C5E8E04ED3F97745_METHOD_4_18A14F961AC502D9_OFFSET))(this, a1);
	}
};

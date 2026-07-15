#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B3AFD97860C380C7.h"

class Class_3_9846D5C553A9930F_7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BE6996831E60DB54_1_METHOD_3_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x174D64E0)
#define CLASS_3_BE6996831E60DB54_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x174D6430)
#define CLASS_3_BE6996831E60DB54_1__CTOR_OFFSET UNITYSDK_OFFSET(0x174D6380)

inline static constexpr unsigned int Class_3_BE6996831E60DB54_1_TypeDefinitionIndex = 50920;

class Class_3_BE6996831E60DB54_1 : public ::Class_2_B3AFD97860C380C7
{
public:
	::Class_3_9846D5C553A9930F_7* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9846D5C553A9930F_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9846D5C553A9930F_7*))((::PBYTE)hIl2Cpp + CLASS_3_BE6996831E60DB54_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE6996831E60DB54_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE6996831E60DB54_1_METHOD_3_DC715239B8B98D9C_OFFSET))(this);
	}
};

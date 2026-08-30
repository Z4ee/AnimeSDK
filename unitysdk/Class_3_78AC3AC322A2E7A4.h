#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B3AFD97860C380C7.h"

class Class_1_F3391C70DC37088D;
class Class_3_A00004D7E7AD9D9F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_78AC3AC322A2E7A4_METHOD_3_DC715239B8B98D9C_1_OFFSET UNITYSDK_OFFSET(0xB509B80)
#define CLASS_3_78AC3AC322A2E7A4_METHOD_3_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0xB509B20)
#define CLASS_3_78AC3AC322A2E7A4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB509A20)
#define CLASS_3_78AC3AC322A2E7A4_TICK_OFFSET UNITYSDK_OFFSET(0xB508D50)
#define CLASS_3_78AC3AC322A2E7A4__CTOR_OFFSET UNITYSDK_OFFSET(0xB508CA0)

inline static constexpr unsigned int Class_3_78AC3AC322A2E7A4_TypeDefinitionIndex = 53602;

class Class_3_78AC3AC322A2E7A4 : public ::Class_2_B3AFD97860C380C7
{
public:
	::Class_3_A00004D7E7AD9D9F* IGHAHBNLIJA; // 0x28
	::Class_1_F3391C70DC37088D* MGLGONPDIFK; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A00004D7E7AD9D9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A00004D7E7AD9D9F*))((::PBYTE)hIl2Cpp + CLASS_3_78AC3AC322A2E7A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_78AC3AC322A2E7A4_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78AC3AC322A2E7A4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78AC3AC322A2E7A4_METHOD_3_DC715239B8B98D9C_OFFSET))(this);
	}

	::System::Void Method_3_DC715239B8B98D9C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78AC3AC322A2E7A4_METHOD_3_DC715239B8B98D9C_1_OFFSET))(this);
	}
};

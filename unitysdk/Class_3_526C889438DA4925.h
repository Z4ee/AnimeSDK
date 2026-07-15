#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_RtTask_1.h"

class Class_0_16E4307DCC419505_446;
class Class_1_29BFCB07F104AC1B;
class Class_2_D1346D6684F717E3;
class Class_4_8681963A56F7115F;
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_526C889438DA4925_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14B3EC70)
#define CLASS_3_526C889438DA4925_METHOD_3_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x14B3EDA0)
#define CLASS_3_526C889438DA4925_METHOD_3_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x14B3EB30)
#define CLASS_3_526C889438DA4925_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14B3E960)
#define CLASS_3_526C889438DA4925_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14B3ED40)
#define CLASS_3_526C889438DA4925_TICK_OFFSET UNITYSDK_OFFSET(0x14B3ECC0)
#define CLASS_3_526C889438DA4925__CTOR_OFFSET UNITYSDK_OFFSET(0x14B3E930)

inline static constexpr unsigned int Class_3_526C889438DA4925_TypeDefinitionIndex = 51247;

class Class_3_526C889438DA4925 : public ::RPG::GameCore::ST_RtTask_1<::Class_4_8681963A56F7115F*>
{
public:
	::Class_1_29BFCB07F104AC1B* Field_3_0; // 0x28
	::Class_2_D1346D6684F717E3* Field_3_1; // 0x30
	::System::Action_1<::Class_0_16E4307DCC419505_446*>* Field_3_2; // 0x38
	::System::Boolean Field_3_3; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_8681963A56F7115F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_8681963A56F7115F*))((::PBYTE)hIl2Cpp + CLASS_3_526C889438DA4925__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_526C889438DA4925_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_526C889438DA4925_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_526C889438DA4925_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_526C889438DA4925_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_446* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_446*))((::PBYTE)hIl2Cpp + CLASS_3_526C889438DA4925_METHOD_3_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_3_C081D0F1BA12AC56(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_526C889438DA4925_METHOD_3_C081D0F1BA12AC56_OFFSET))(this, a1);
	}
};

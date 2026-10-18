#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_3_F81631E635166BCD;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_48FF2985DCCC2A5C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD0D960)
#define CLASS_2_48FF2985DCCC2A5C_METHOD_2_57043D1AC87BFD03_OFFSET UNITYSDK_OFFSET(0xBD0DB60)
#define CLASS_2_48FF2985DCCC2A5C_METHOD_2_FF0BED909298199C_OFFSET UNITYSDK_OFFSET(0xBD0D9C0)
#define CLASS_2_48FF2985DCCC2A5C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD0D570)
#define CLASS_2_48FF2985DCCC2A5C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD0D910)
#define CLASS_2_48FF2985DCCC2A5C_TICK_OFFSET UNITYSDK_OFFSET(0xBD0DC40)
#define CLASS_2_48FF2985DCCC2A5C__CTOR_OFFSET UNITYSDK_OFFSET(0xBD0D560)

inline static constexpr unsigned int Class_2_48FF2985DCCC2A5C_TypeDefinitionIndex = 58713;

class Class_2_48FF2985DCCC2A5C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_F81631E635166BCD* OFKGLJOAMLD; // 0x18
	::Class_1_303D5A33D1401D59* KGPIGCAPOCP; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::System::Single PGMIOKKLHIE; // 0x30
	::UnityEngine::Vector3 NLHOJAHIKLL; // 0x34
	::UnityEngine::Vector3 KOGCFJCMFLD; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F81631E635166BCD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F81631E635166BCD*))((::PBYTE)hIl2Cpp + CLASS_2_48FF2985DCCC2A5C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48FF2985DCCC2A5C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48FF2985DCCC2A5C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48FF2985DCCC2A5C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_FF0BED909298199C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48FF2985DCCC2A5C_METHOD_2_FF0BED909298199C_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_48FF2985DCCC2A5C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_57043D1AC87BFD03(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_48FF2985DCCC2A5C_METHOD_2_57043D1AC87BFD03_OFFSET))(this, a1);
	}
};

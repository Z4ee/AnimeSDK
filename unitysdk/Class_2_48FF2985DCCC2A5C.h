#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_3_6B399D161FCD382D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_48FF2985DCCC2A5C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11981500)
#define CLASS_2_48FF2985DCCC2A5C_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x11981560)
#define CLASS_2_48FF2985DCCC2A5C_METHOD_2_85F9AAEEA394BE31_OFFSET UNITYSDK_OFFSET(0x11981760)
#define CLASS_2_48FF2985DCCC2A5C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11981150)
#define CLASS_2_48FF2985DCCC2A5C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x119814B0)
#define CLASS_2_48FF2985DCCC2A5C_TICK_OFFSET UNITYSDK_OFFSET(0x119818A0)
#define CLASS_2_48FF2985DCCC2A5C__CTOR_OFFSET UNITYSDK_OFFSET(0x11981140)

inline static constexpr unsigned int Class_2_48FF2985DCCC2A5C_TypeDefinitionIndex = 47394;

class Class_2_48FF2985DCCC2A5C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_303D5A33D1401D59* Field_2_0; // 0x18
	::Class_3_6B399D161FCD382D* Field_2_5; // 0x20
	::RPG::GameCore::TaskContext* Field_2_4; // 0x28
	::UnityEngine::Vector3 Field_2_2; // 0x30
	::UnityEngine::Vector3 Field_2_1; // 0x3C
	::System::Single Field_2_3; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6B399D161FCD382D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6B399D161FCD382D*))((::PBYTE)hIl2Cpp + CLASS_2_48FF2985DCCC2A5C__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48FF2985DCCC2A5C_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_48FF2985DCCC2A5C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_85F9AAEEA394BE31(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_48FF2985DCCC2A5C_METHOD_2_85F9AAEEA394BE31_OFFSET))(this, a1);
	}
};

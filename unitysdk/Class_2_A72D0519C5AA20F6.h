#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_037EA204E69EBC75;

#define CLASS_2_A72D0519C5AA20F6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187B08D0)
#define CLASS_2_A72D0519C5AA20F6_METHOD_2_521267F2AEE4A422_OFFSET UNITYSDK_OFFSET(0x187B12F0)
#define CLASS_2_A72D0519C5AA20F6_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x187B0980)
#define CLASS_2_A72D0519C5AA20F6__CTOR_OFFSET UNITYSDK_OFFSET(0x187B08C0)

inline static constexpr unsigned int Class_2_A72D0519C5AA20F6_TypeDefinitionIndex = 40304;

class Class_2_A72D0519C5AA20F6 : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::Class_2_037EA204E69EBC75* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::UInt32 Field_2_2; // 0x24
	::UnityEngine::Vector3 Field_2_3; // 0x28
	::UnityEngine::Vector3 Field_2_4; // 0x34
	::System::Boolean Field_2_5; // 0x40
	::System::Boolean Field_2_6; // 0x41
	::System::Boolean Field_2_7; // 0x42

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}

	::System::Void Method_2_521267F2AEE4A422(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A72D0519C5AA20F6_METHOD_2_521267F2AEE4A422_OFFSET))(this, a1);
	}
};

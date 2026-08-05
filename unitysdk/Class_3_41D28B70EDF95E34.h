#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7808BF09EBF8C35A.h"
#include "unitysdk/Struct_2_9CA189FF4A6EA6EE.h"

namespace UnityEngine { class Transform; }

#define CLASS_3_41D28B70EDF95E34_METHOD_3_13E8B1F3F0042AA5_OFFSET UNITYSDK_OFFSET(0x12833460)
#define CLASS_3_41D28B70EDF95E34_METHOD_3_3E6AC14EE28F55D4_OFFSET UNITYSDK_OFFSET(0x128335B0)
#define CLASS_3_41D28B70EDF95E34_METHOD_3_60CD0479C3A8133D_OFFSET UNITYSDK_OFFSET(0x128332E0)
#define CLASS_3_41D28B70EDF95E34__CTOR_OFFSET UNITYSDK_OFFSET(0x12833290)

inline static constexpr unsigned int Class_3_41D28B70EDF95E34_TypeDefinitionIndex = 55321;

class Class_3_41D28B70EDF95E34 : public ::Class_2_7808BF09EBF8C35A
{
public:
	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_41D28B70EDF95E34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_60CD0479C3A8133D(::Struct_2_9CA189FF4A6EA6EE a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_9CA189FF4A6EA6EE))((::PBYTE)hIl2Cpp + CLASS_3_41D28B70EDF95E34_METHOD_3_60CD0479C3A8133D_OFFSET))(this, a1);
	}

	::System::Void Method_3_13E8B1F3F0042AA5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_41D28B70EDF95E34_METHOD_3_13E8B1F3F0042AA5_OFFSET))(this, a1);
	}

	::System::Void Method_3_3E6AC14EE28F55D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41D28B70EDF95E34_METHOD_3_3E6AC14EE28F55D4_OFFSET))(this);
	}
};

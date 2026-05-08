#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_132.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_536.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D7D7D0448208446B_METHOD_2_1E8882F46274F4C2_OFFSET UNITYSDK_OFFSET(0x11F682B0)
#define CLASS_2_D7D7D0448208446B_METHOD_2_B2C516028280828B_OFFSET UNITYSDK_OFFSET(0x11F68420)
#define CLASS_2_D7D7D0448208446B__CTOR_OFFSET UNITYSDK_OFFSET(0x11F68280)

inline static constexpr unsigned int Class_2_D7D7D0448208446B_TypeDefinitionIndex = 16737;

class Class_2_D7D7D0448208446B : public ::Class_1_5DA2E7556103D5A3_132
{
public:
	::System::Boolean Field_2_0; // 0x90
	::UnityEngine::Vector3 Field_2_1; // 0x94

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_536 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_536, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_D7D7D0448208446B__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_1E8882F46274F4C2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7D7D0448208446B_METHOD_2_1E8882F46274F4C2_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_2_B2C516028280828B(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D7D7D0448208446B_METHOD_2_B2C516028280828B_OFFSET))(a1);
	}
};

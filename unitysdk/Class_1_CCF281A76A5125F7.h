#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MdbComponent; }

#define CLASS_1_CCF281A76A5125F7_METHOD_1_D926AB0071D1C01E_OFFSET UNITYSDK_OFFSET(0x12F0C7A0)
#define CLASS_1_CCF281A76A5125F7_METHOD_1_F8FC50E7C58BC371_OFFSET UNITYSDK_OFFSET(0x12F0C700)

inline static constexpr unsigned int Class_1_CCF281A76A5125F7_TypeDefinitionIndex = 89779;

class Class_1_CCF281A76A5125F7 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_7; // 0x0

	static ::System::Void Method_1_F8FC50E7C58BC371(::UnityEngine::MdbComponent* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::MdbComponent*, ::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CCF281A76A5125F7_METHOD_1_F8FC50E7C58BC371_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_D926AB0071D1C01E(::UnityEngine::MdbComponent* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::MdbComponent*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CCF281A76A5125F7_METHOD_1_D926AB0071D1C01E_OFFSET))(a1, a2);
	}
};

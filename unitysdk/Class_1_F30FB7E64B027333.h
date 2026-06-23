#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_F30FB7E64B027333_METHOD_1_251FE50AEDB4A1C2_OFFSET UNITYSDK_OFFSET(0x12681720)
#define CLASS_1_F30FB7E64B027333_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x126816C0)
#define CLASS_1_F30FB7E64B027333_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x126815E0)
#define CLASS_1_F30FB7E64B027333__CTOR_OFFSET UNITYSDK_OFFSET(0x126815D0)

inline static constexpr unsigned int Class_1_F30FB7E64B027333_TypeDefinitionIndex = 67844;

class Class_1_F30FB7E64B027333 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_2; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x1C
	::System::Single Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F30FB7E64B027333__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F30FB7E64B027333_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_1_251FE50AEDB4A1C2(::System::UInt32 a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F30FB7E64B027333_METHOD_1_251FE50AEDB4A1C2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F30FB7E64B027333_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};

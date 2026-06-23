#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_D0732A9EE482521E_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x790300)
#define STRUCT_2_D0732A9EE482521E__CCTOR_OFFSET UNITYSDK_OFFSET(0x125C2A20)

inline static constexpr unsigned int Struct_2_D0732A9EE482521E_TypeDefinitionIndex = 48560;

struct alignas(4) Struct_2_D0732A9EE482521E
{
	static ::Struct_2_D0732A9EE482521E* StaticGet_Field_2_3()
	{
		return (::Struct_2_D0732A9EE482521E*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_D0732A9EE482521E_TypeDefinitionIndex)->GetStaticField(0xC4C0);
	}
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::UnityEngine::Vector3 Field_2_2; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_D0732A9EE482521E__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D0732A9EE482521E_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4561C29B96A890D9.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_5119F8C34F295015_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x7F2900)
#define STRUCT_2_5119F8C34F295015__CCTOR_OFFSET UNITYSDK_OFFSET(0x141CAE40)

inline static constexpr unsigned int Struct_2_5119F8C34F295015_TypeDefinitionIndex = 87752;

struct alignas(8) Struct_2_5119F8C34F295015
{
	static ::Struct_2_5119F8C34F295015* StaticGet_Field_2_1()
	{
		return (::Struct_2_5119F8C34F295015*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_5119F8C34F295015_TypeDefinitionIndex)->GetStaticField(0x337F0);
	}
	::System::Int32 Field_2_0; // 0x10
	::Struct_2_4561C29B96A890D9 Field_2_7; // 0x18
	::UnityEngine::Vector3 Field_2_6; // 0x78
	::UnityEngine::Vector3 Field_2_5; // 0x84

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_5119F8C34F295015__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5119F8C34F295015_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}
};

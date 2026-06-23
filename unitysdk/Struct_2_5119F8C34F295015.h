#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E0D0A34AE1807B71.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_5119F8C34F295015_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x6829A0)
#define STRUCT_2_5119F8C34F295015__CCTOR_OFFSET UNITYSDK_OFFSET(0xFBE59C0)

inline static constexpr unsigned int Struct_2_5119F8C34F295015_TypeDefinitionIndex = 44626;

struct alignas(8) Struct_2_5119F8C34F295015
{
	static ::Struct_2_5119F8C34F295015* StaticGet_Field_2_0()
	{
		return (::Struct_2_5119F8C34F295015*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_5119F8C34F295015_TypeDefinitionIndex)->GetStaticField(0x470C0);
	}
	::System::Int32 Field_2_1; // 0x10
	::Struct_2_E0D0A34AE1807B71 Field_2_2; // 0x18
	::UnityEngine::Vector3 Field_2_3; // 0x70
	::UnityEngine::Vector3 Field_2_4; // 0x7C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_5119F8C34F295015__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5119F8C34F295015_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}
};

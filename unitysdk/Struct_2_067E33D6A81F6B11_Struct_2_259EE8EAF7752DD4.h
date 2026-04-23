#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Light; }

#define STRUCT_2_067E33D6A81F6B11_STRUCT_2_259EE8EAF7752DD4_METHOD_2_6253F98A9BE81EBE_OFFSET UNITYSDK_OFFSET(0xCE290)
#define STRUCT_2_067E33D6A81F6B11_STRUCT_2_259EE8EAF7752DD4_METHOD_2_75C729540B06DD85_OFFSET UNITYSDK_OFFSET(0xCE2A0)

inline static constexpr unsigned int Struct_2_067E33D6A81F6B11_Struct_2_259EE8EAF7752DD4_TypeDefinitionIndex = 64315;

struct alignas(4) Struct_2_067E33D6A81F6B11_Struct_2_259EE8EAF7752DD4
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Color Field_2_1; // 0x1C
	::System::Single Field_2_2; // 0x2C

	::System::Boolean Method_2_6253F98A9BE81EBE(::UnityEngine::Light* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_STRUCT_2_259EE8EAF7752DD4_METHOD_2_6253F98A9BE81EBE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_75C729540B06DD85(::Struct_2_067E33D6A81F6B11_Struct_2_259EE8EAF7752DD4 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_067E33D6A81F6B11_Struct_2_259EE8EAF7752DD4))((::PBYTE)hIl2Cpp + STRUCT_2_067E33D6A81F6B11_STRUCT_2_259EE8EAF7752DD4_METHOD_2_75C729540B06DD85_OFFSET))(this, a1);
	}
};

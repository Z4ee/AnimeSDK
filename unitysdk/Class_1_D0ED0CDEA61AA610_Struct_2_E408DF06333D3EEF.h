#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define CLASS_1_D0ED0CDEA61AA610_STRUCT_2_E408DF06333D3EEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x3A9A370)
#define CLASS_1_D0ED0CDEA61AA610_STRUCT_2_E408DF06333D3EEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A9A380)

inline static constexpr unsigned int Class_1_D0ED0CDEA61AA610_Struct_2_E408DF06333D3EEF_TypeDefinitionIndex = 70646;

struct alignas(8) Class_1_D0ED0CDEA61AA610_Struct_2_E408DF06333D3EEF
{
	::System::Int32 ELBDFOOMPON; // 0x10
	::System::Int32 DHGKOHEFAID; // 0x14
	::UnityEngine::Vector3 NPHAFNPMMDF; // 0x18
	::UnityEngine::Vector2 HMAGPLNGNMP; // 0x24
	::UnityEngine::Vector3 NDFPBNPAHNA; // 0x2C
	::Il2CppArray<::System::Int32>* FOMNGCINLNE; // 0x38

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_STRUCT_2_E408DF06333D3EEF_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_STRUCT_2_E408DF06333D3EEF_GETHASHCODE_OFFSET))(this);
	}
};

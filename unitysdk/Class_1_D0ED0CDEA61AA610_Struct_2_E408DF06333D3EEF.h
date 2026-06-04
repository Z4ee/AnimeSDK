#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define CLASS_1_D0ED0CDEA61AA610_STRUCT_2_E408DF06333D3EEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x2BCBE30)
#define CLASS_1_D0ED0CDEA61AA610_STRUCT_2_E408DF06333D3EEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2BCBE40)
#define CLASS_1_D0ED0CDEA61AA610_STRUCT_2_E408DF06333D3EEF___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x2BCBEA0)
#define CLASS_1_D0ED0CDEA61AA610_STRUCT_2_E408DF06333D3EEF___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2BCBF20)

inline static constexpr unsigned int Class_1_D0ED0CDEA61AA610_Struct_2_E408DF06333D3EEF_TypeDefinitionIndex = 66098;

struct alignas(8) Class_1_D0ED0CDEA61AA610_Struct_2_E408DF06333D3EEF
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::UnityEngine::Vector3 Field_2_2; // 0x18
	::UnityEngine::Vector2 Field_2_3; // 0x24
	::UnityEngine::Vector3 Field_2_4; // 0x2C
	::Il2CppArray<::System::Int32>* Field_2_5; // 0x38

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_STRUCT_2_E408DF06333D3EEF_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_STRUCT_2_E408DF06333D3EEF_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_STRUCT_2_E408DF06333D3EEF___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_STRUCT_2_E408DF06333D3EEF___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};

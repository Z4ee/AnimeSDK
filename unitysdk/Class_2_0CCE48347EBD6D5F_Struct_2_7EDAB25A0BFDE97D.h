#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_2_0CCE48347EBD6D5F_STRUCT_2_7EDAB25A0BFDE97D_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x7D8010)
#define CLASS_2_0CCE48347EBD6D5F_STRUCT_2_7EDAB25A0BFDE97D_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x701700)
#define CLASS_2_0CCE48347EBD6D5F_STRUCT_2_7EDAB25A0BFDE97D__CTOR_OFFSET UNITYSDK_OFFSET(0x7D7FD0)

inline static constexpr unsigned int Class_2_0CCE48347EBD6D5F_Struct_2_7EDAB25A0BFDE97D_TypeDefinitionIndex = 67208;

struct alignas(8) Class_2_0CCE48347EBD6D5F_Struct_2_7EDAB25A0BFDE97D
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Quaternion Field_2_1; // 0x1C
	::System::Nullable_1<::System::Single> Field_2_2; // 0x2C
	::System::String* Field_2_3; // 0x38

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_STRUCT_2_7EDAB25A0BFDE97D__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_STRUCT_2_7EDAB25A0BFDE97D_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_STRUCT_2_7EDAB25A0BFDE97D_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}
};

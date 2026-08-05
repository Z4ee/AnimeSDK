#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_MONOGAMEPADBASELIST_STRUCT_2_7CDFE46055FBE556_METHOD_2_4352ABC79FD159A3_OFFSET UNITYSDK_OFFSET(0x7F93E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadBaseList_Struct_2_7CDFE46055FBE556_TypeDefinitionIndex = 72811;

	struct alignas(8) MonoGamepadBaseList_Struct_2_7CDFE46055FBE556
	{
		::System::Int32 Field_2_1; // 0x10
		::System::Int32 Field_2_0; // 0x14
		::System::Int32 Field_2_7; // 0x18
		::UnityEngine::RectTransform_Axis Field_2_6; // 0x1C
		::UnityEngine::RectTransform_Axis Field_2_5; // 0x20
		::System::Func_2<::System::Int32, ::System::Boolean>* Field_2_4; // 0x28

		::System::Boolean Method_2_4352ABC79FD159A3(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_STRUCT_2_7CDFE46055FBE556_METHOD_2_4352ABC79FD159A3_OFFSET))(this, a1);
		}
	};
}

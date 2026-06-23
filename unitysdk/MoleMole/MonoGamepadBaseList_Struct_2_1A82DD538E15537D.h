#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_MONOGAMEPADBASELIST_STRUCT_2_1A82DD538E15537D_METHOD_2_A4DB7961B504DCE5_OFFSET UNITYSDK_OFFSET(0x741570)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadBaseList_Struct_2_1A82DD538E15537D_TypeDefinitionIndex = 62502;

	struct alignas(8) MonoGamepadBaseList_Struct_2_1A82DD538E15537D
	{
		::System::Int32 Field_2_0; // 0x10
		::System::Int32 Field_2_1; // 0x14
		::System::Int32 Field_2_2; // 0x18
		::UnityEngine::RectTransform_Axis Field_2_3; // 0x1C
		::UnityEngine::RectTransform_Axis Field_2_4; // 0x20
		::System::Func_2<::System::Int32, ::System::Boolean>* Field_2_5; // 0x28

		::System::Boolean Method_2_A4DB7961B504DCE5(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_STRUCT_2_1A82DD538E15537D_METHOD_2_A4DB7961B504DCE5_OFFSET))(this, a1);
		}
	};
}

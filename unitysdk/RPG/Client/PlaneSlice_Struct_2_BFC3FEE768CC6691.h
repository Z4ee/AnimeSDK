#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_PLANESLICE_STRUCT_2_BFC3FEE768CC6691__CTOR_OFFSET UNITYSDK_OFFSET(0x82AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlaneSlice_Struct_2_BFC3FEE768CC6691_TypeDefinitionIndex = 57901;

	struct alignas(4) PlaneSlice_Struct_2_BFC3FEE768CC6691
	{
		::System::Int32 Field_2_0; // 0x10
		::UnityEngine::Vector3 Field_2_1; // 0x14
		::System::Int32 Field_2_2; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_STRUCT_2_BFC3FEE768CC6691__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}

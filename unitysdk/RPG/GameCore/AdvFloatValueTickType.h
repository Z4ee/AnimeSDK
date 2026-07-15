#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_METHOD_2_9750A64F52DF433B_OFFSET UNITYSDK_OFFSET(0x1BE1CB20)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_METHOD_2_A185CD19061B6ED6_OFFSET UNITYSDK_OFFSET(0x1BE1D520)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE1D580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvFloatValueTickType_TypeDefinitionIndex = 20231;

	class AdvFloatValueTickType : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9750A64F52DF433B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvFloatValueTickType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvFloatValueTickType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_METHOD_2_9750A64F52DF433B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A185CD19061B6ED6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvFloatValueTickType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvFloatValueTickType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_METHOD_2_A185CD19061B6ED6_OFFSET))(a1, a2);
		}
	};
}

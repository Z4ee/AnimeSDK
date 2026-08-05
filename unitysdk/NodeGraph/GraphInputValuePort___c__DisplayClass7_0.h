#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/System/Object.h"

#define NODEGRAPH_GRAPHINPUTVALUEPORT___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17CCB7C0)
#define NODEGRAPH_GRAPHINPUTVALUEPORT___C__DISPLAYCLASS7_0__SETVALUE_B__0_OFFSET UNITYSDK_OFFSET(0x17CCB7D0)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphInputValuePort___c__DisplayClass7_0_TypeDefinitionIndex = 82849;

	class GraphInputValuePort___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::Struct_2_A47ACAABA9AAFE92 value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTVALUEPORT___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::Struct_2_A47ACAABA9AAFE92 _SetValue_b__0()
		{
			return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTVALUEPORT___C__DISPLAYCLASS7_0__SETVALUE_B__0_OFFSET))(this);
		}
	};
}

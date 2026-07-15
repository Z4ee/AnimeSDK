#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_7ED93EDF030C1F5D_7_METHOD_3_00A92F7113D927DF_OFFSET UNITYSDK_OFFSET(0x1BF46950)
#define CLASS_3_7ED93EDF030C1F5D_7_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x1BF46990)
#define CLASS_3_7ED93EDF030C1F5D_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF46980)

inline static constexpr unsigned int Class_3_7ED93EDF030C1F5D_7_TypeDefinitionIndex = 22034;

class Class_3_7ED93EDF030C1F5D_7 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7ED93EDF030C1F5D_7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_00A92F7113D927DF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7ED93EDF030C1F5D_7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7ED93EDF030C1F5D_7*&))((::PBYTE)hIl2Cpp + CLASS_3_7ED93EDF030C1F5D_7_METHOD_3_00A92F7113D927DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7ED93EDF030C1F5D_7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7ED93EDF030C1F5D_7*))((::PBYTE)hIl2Cpp + CLASS_3_7ED93EDF030C1F5D_7_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_7ED93EDF030C1F5D_2_METHOD_3_00A92F7113D927DF_OFFSET UNITYSDK_OFFSET(0x1CAB0240)
#define CLASS_3_7ED93EDF030C1F5D_2_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x1CAB0280)
#define CLASS_3_7ED93EDF030C1F5D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB0270)

inline static constexpr unsigned int Class_3_7ED93EDF030C1F5D_2_TypeDefinitionIndex = 20299;

class Class_3_7ED93EDF030C1F5D_2 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* KMELNDFGMDH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7ED93EDF030C1F5D_2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_00A92F7113D927DF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7ED93EDF030C1F5D_2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7ED93EDF030C1F5D_2*&))((::PBYTE)hIl2Cpp + CLASS_3_7ED93EDF030C1F5D_2_METHOD_3_00A92F7113D927DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7ED93EDF030C1F5D_2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7ED93EDF030C1F5D_2*))((::PBYTE)hIl2Cpp + CLASS_3_7ED93EDF030C1F5D_2_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}
};

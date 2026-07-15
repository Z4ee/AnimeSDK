#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_8B26808C73AFBC57_METHOD_3_00A92F7113D927DF_OFFSET UNITYSDK_OFFSET(0x1B58FC20)
#define CLASS_3_8B26808C73AFBC57_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x1B58FC70)
#define CLASS_3_8B26808C73AFBC57__CTOR_OFFSET UNITYSDK_OFFSET(0x1B58FC60)

inline static constexpr unsigned int Class_3_8B26808C73AFBC57_TypeDefinitionIndex = 19176;

class Class_3_8B26808C73AFBC57 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Int32 Field_3_0; // 0x18
	::System::Single Field_3_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B26808C73AFBC57__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_00A92F7113D927DF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8B26808C73AFBC57*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8B26808C73AFBC57*&))((::PBYTE)hIl2Cpp + CLASS_3_8B26808C73AFBC57_METHOD_3_00A92F7113D927DF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8B26808C73AFBC57* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8B26808C73AFBC57*))((::PBYTE)hIl2Cpp + CLASS_3_8B26808C73AFBC57_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}
};

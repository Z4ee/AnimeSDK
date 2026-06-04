#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/STTaskExecutePhase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_4_13C1105688678353_1_METHOD_4_61ACBD6DF6FE15E4_OFFSET UNITYSDK_OFFSET(0x19EC7100)
#define CLASS_4_13C1105688678353_1_METHOD_4_D0DFE8D5305B9B00_OFFSET UNITYSDK_OFFSET(0x19EC71D0)
#define CLASS_4_13C1105688678353_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19EC7180)

inline static constexpr unsigned int Class_4_13C1105688678353_1_TypeDefinitionIndex = 21220;

class Class_4_13C1105688678353_1 : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::String* Field_4_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_4_1; // 0x20
	::RPG::GameCore::STTaskExecutePhase Field_4_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_13C1105688678353_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_61ACBD6DF6FE15E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_13C1105688678353_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_13C1105688678353_1*&))((::PBYTE)hIl2Cpp + CLASS_4_13C1105688678353_1_METHOD_4_61ACBD6DF6FE15E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_D0DFE8D5305B9B00(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_13C1105688678353_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_13C1105688678353_1*))((::PBYTE)hIl2Cpp + CLASS_4_13C1105688678353_1_METHOD_4_D0DFE8D5305B9B00_OFFSET))(a1, a2);
	}
};

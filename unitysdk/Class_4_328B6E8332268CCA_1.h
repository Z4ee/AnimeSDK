#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/STTaskExecutePhase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_4_328B6E8332268CCA_1_METHOD_4_5C65AE94D5D93795_OFFSET UNITYSDK_OFFSET(0x1B525F70)
#define CLASS_4_328B6E8332268CCA_1_METHOD_4_D0DFE8D5305B9B00_OFFSET UNITYSDK_OFFSET(0x1B525FB0)
#define CLASS_4_328B6E8332268CCA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B525FA0)

inline static constexpr unsigned int Class_4_328B6E8332268CCA_1_TypeDefinitionIndex = 21635;

class Class_4_328B6E8332268CCA_1 : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::String* Field_4_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_4_1; // 0x20
	::RPG::GameCore::STTaskExecutePhase Field_4_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_328B6E8332268CCA_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_5C65AE94D5D93795(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_328B6E8332268CCA_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_328B6E8332268CCA_1*&))((::PBYTE)hIl2Cpp + CLASS_4_328B6E8332268CCA_1_METHOD_4_5C65AE94D5D93795_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_D0DFE8D5305B9B00(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_328B6E8332268CCA_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_328B6E8332268CCA_1*))((::PBYTE)hIl2Cpp + CLASS_4_328B6E8332268CCA_1_METHOD_4_D0DFE8D5305B9B00_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/STTaskExecutePhase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_4_328B6E8332268CCA_METHOD_4_5C65AE94D5D93795_OFFSET UNITYSDK_OFFSET(0x1CF5B630)
#define CLASS_4_328B6E8332268CCA_METHOD_4_D0DFE8D5305B9B00_OFFSET UNITYSDK_OFFSET(0x1CF5B670)
#define CLASS_4_328B6E8332268CCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF5B660)

inline static constexpr unsigned int Class_4_328B6E8332268CCA_TypeDefinitionIndex = 22194;

class Class_4_328B6E8332268CCA : public ::RPG::GameCore::STTaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* MNDFOPKBHKP; // 0x18
	::System::String* LLOBIMGOPOP; // 0x20
	::RPG::GameCore::STTaskExecutePhase PPOIJHJIMLL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_328B6E8332268CCA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_5C65AE94D5D93795(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_328B6E8332268CCA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_328B6E8332268CCA*&))((::PBYTE)hIl2Cpp + CLASS_4_328B6E8332268CCA_METHOD_4_5C65AE94D5D93795_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_D0DFE8D5305B9B00(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_328B6E8332268CCA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_328B6E8332268CCA*))((::PBYTE)hIl2Cpp + CLASS_4_328B6E8332268CCA_METHOD_4_D0DFE8D5305B9B00_OFFSET))(a1, a2);
	}
};

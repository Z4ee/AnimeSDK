#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_85AC304C554D1558_21_METHOD_3_59E52142EB73E32E_OFFSET UNITYSDK_OFFSET(0x1878E8A0)
#define CLASS_3_85AC304C554D1558_21_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1878E920)
#define CLASS_3_85AC304C554D1558_21__CTOR_OFFSET UNITYSDK_OFFSET(0x1878E8F0)

inline static constexpr unsigned int Class_3_85AC304C554D1558_21_TypeDefinitionIndex = 23401;

class Class_3_85AC304C554D1558_21 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85AC304C554D1558_21__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_59E52142EB73E32E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_85AC304C554D1558_21*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_85AC304C554D1558_21*&))((::PBYTE)hIl2Cpp + CLASS_3_85AC304C554D1558_21_METHOD_3_59E52142EB73E32E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_85AC304C554D1558_21* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_85AC304C554D1558_21*))((::PBYTE)hIl2Cpp + CLASS_3_85AC304C554D1558_21_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_85AC304C554D1558_9_METHOD_3_59E52142EB73E32E_OFFSET UNITYSDK_OFFSET(0x182E4F30)
#define CLASS_3_85AC304C554D1558_9_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x182E4FB0)
#define CLASS_3_85AC304C554D1558_9__CTOR_OFFSET UNITYSDK_OFFSET(0x182E4F80)

inline static constexpr unsigned int Class_3_85AC304C554D1558_9_TypeDefinitionIndex = 20354;

class Class_3_85AC304C554D1558_9 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85AC304C554D1558_9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_59E52142EB73E32E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_85AC304C554D1558_9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_85AC304C554D1558_9*&))((::PBYTE)hIl2Cpp + CLASS_3_85AC304C554D1558_9_METHOD_3_59E52142EB73E32E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_85AC304C554D1558_9* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_85AC304C554D1558_9*))((::PBYTE)hIl2Cpp + CLASS_3_85AC304C554D1558_9_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};

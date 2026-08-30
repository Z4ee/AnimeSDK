#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_A406659BC3B2A585_2_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1D5C76D0)
#define CLASS_3_A406659BC3B2A585_2_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1D5C7720)
#define CLASS_3_A406659BC3B2A585_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C7710)

inline static constexpr unsigned int Class_3_A406659BC3B2A585_2_TypeDefinitionIndex = 10209;

class Class_3_A406659BC3B2A585_2 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean EHEIJCAOOKO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A406659BC3B2A585_2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A406659BC3B2A585_2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A406659BC3B2A585_2*&))((::PBYTE)hIl2Cpp + CLASS_3_A406659BC3B2A585_2_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A406659BC3B2A585_2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A406659BC3B2A585_2*))((::PBYTE)hIl2Cpp + CLASS_3_A406659BC3B2A585_2_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};

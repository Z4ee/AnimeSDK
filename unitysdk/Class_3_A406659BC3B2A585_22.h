#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_A406659BC3B2A585_22_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1DC79C90)
#define CLASS_3_A406659BC3B2A585_22_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1DC79CD0)
#define CLASS_3_A406659BC3B2A585_22__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC79CC0)

inline static constexpr unsigned int Class_3_A406659BC3B2A585_22_TypeDefinitionIndex = 22906;

class Class_3_A406659BC3B2A585_22 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean FLONKDDGCFC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A406659BC3B2A585_22__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A406659BC3B2A585_22*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A406659BC3B2A585_22*&))((::PBYTE)hIl2Cpp + CLASS_3_A406659BC3B2A585_22_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A406659BC3B2A585_22* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A406659BC3B2A585_22*))((::PBYTE)hIl2Cpp + CLASS_3_A406659BC3B2A585_22_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};

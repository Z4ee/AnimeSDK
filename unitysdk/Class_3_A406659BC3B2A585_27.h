#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_A406659BC3B2A585_27_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0xCA33110)
#define CLASS_3_A406659BC3B2A585_27_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0xCA33150)
#define CLASS_3_A406659BC3B2A585_27__CTOR_OFFSET UNITYSDK_OFFSET(0xCA33140)

inline static constexpr unsigned int Class_3_A406659BC3B2A585_27_TypeDefinitionIndex = 24032;

class Class_3_A406659BC3B2A585_27 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean KDHCICFNAOC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A406659BC3B2A585_27__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A406659BC3B2A585_27*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A406659BC3B2A585_27*&))((::PBYTE)hIl2Cpp + CLASS_3_A406659BC3B2A585_27_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A406659BC3B2A585_27* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A406659BC3B2A585_27*))((::PBYTE)hIl2Cpp + CLASS_3_A406659BC3B2A585_27_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};

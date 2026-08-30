#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_A406659BC3B2A585_29_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1D0E31F0)
#define CLASS_3_A406659BC3B2A585_29_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1D0E3240)
#define CLASS_3_A406659BC3B2A585_29__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E3230)

inline static constexpr unsigned int Class_3_A406659BC3B2A585_29_TypeDefinitionIndex = 24108;

class Class_3_A406659BC3B2A585_29 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean KDHCICFNAOC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A406659BC3B2A585_29__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A406659BC3B2A585_29*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A406659BC3B2A585_29*&))((::PBYTE)hIl2Cpp + CLASS_3_A406659BC3B2A585_29_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A406659BC3B2A585_29* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A406659BC3B2A585_29*))((::PBYTE)hIl2Cpp + CLASS_3_A406659BC3B2A585_29_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};

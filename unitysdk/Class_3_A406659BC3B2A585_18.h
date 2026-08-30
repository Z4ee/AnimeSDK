#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_A406659BC3B2A585_18_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1CE9AB50)
#define CLASS_3_A406659BC3B2A585_18_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1CE9AB90)
#define CLASS_3_A406659BC3B2A585_18__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9AB80)

inline static constexpr unsigned int Class_3_A406659BC3B2A585_18_TypeDefinitionIndex = 22139;

class Class_3_A406659BC3B2A585_18 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Boolean BHEPDKPEPNO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A406659BC3B2A585_18__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A406659BC3B2A585_18*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A406659BC3B2A585_18*&))((::PBYTE)hIl2Cpp + CLASS_3_A406659BC3B2A585_18_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A406659BC3B2A585_18* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A406659BC3B2A585_18*))((::PBYTE)hIl2Cpp + CLASS_3_A406659BC3B2A585_18_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};

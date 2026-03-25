#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_2_68C34B5C1C40C2FF_METHOD_2_95BA474848C12124_OFFSET UNITYSDK_OFFSET(0x16DE1CB0)
#define CLASS_2_68C34B5C1C40C2FF_METHOD_2_977C49415F9EE2B0_OFFSET UNITYSDK_OFFSET(0x16DE1A90)
#define CLASS_2_68C34B5C1C40C2FF__CTOR_OFFSET UNITYSDK_OFFSET(0x16DE1CA0)

inline static constexpr unsigned int Class_2_68C34B5C1C40C2FF_TypeDefinitionIndex = 20838;

class Class_2_68C34B5C1C40C2FF : public ::RPG::GameCore::JsonConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68C34B5C1C40C2FF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_977C49415F9EE2B0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_68C34B5C1C40C2FF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_68C34B5C1C40C2FF*&))((::PBYTE)hIl2Cpp + CLASS_2_68C34B5C1C40C2FF_METHOD_2_977C49415F9EE2B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_95BA474848C12124(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_68C34B5C1C40C2FF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_68C34B5C1C40C2FF*))((::PBYTE)hIl2Cpp + CLASS_2_68C34B5C1C40C2FF_METHOD_2_95BA474848C12124_OFFSET))(a1, a2);
	}
};

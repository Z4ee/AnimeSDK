#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_658CB85CAB79AA8E;

#define CLASS_2_EF79B40F86BE9C39_METHOD_2_2F4B6108E2917C18_OFFSET UNITYSDK_OFFSET(0x18312420)
#define CLASS_2_EF79B40F86BE9C39__CTOR_OFFSET UNITYSDK_OFFSET(0x18312570)

inline static constexpr unsigned int Class_2_EF79B40F86BE9C39_TypeDefinitionIndex = 15918;

class Class_2_EF79B40F86BE9C39 : public ::RPG::GameCore::JsonConfig
{
public:
	::Class_2_658CB85CAB79AA8E* Field_2_2; // 0x10
	::System::Single Field_2_1; // 0x18
	::System::UInt64 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF79B40F86BE9C39__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_2F4B6108E2917C18(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_EF79B40F86BE9C39*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_EF79B40F86BE9C39*&))((::PBYTE)hIl2Cpp + CLASS_2_EF79B40F86BE9C39_METHOD_2_2F4B6108E2917C18_OFFSET))(a1, a2);
	}
};

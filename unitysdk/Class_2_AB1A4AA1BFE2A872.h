#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_054A3A0CD96788EA;

#define CLASS_2_AB1A4AA1BFE2A872_METHOD_2_14532D71051D97BC_OFFSET UNITYSDK_OFFSET(0x16C6CAE0)
#define CLASS_2_AB1A4AA1BFE2A872__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6CCB0)

inline static constexpr unsigned int Class_2_AB1A4AA1BFE2A872_TypeDefinitionIndex = 15398;

class Class_2_AB1A4AA1BFE2A872 : public ::RPG::GameCore::JsonConfig
{
public:
	::Class_2_054A3A0CD96788EA* Field_2_2; // 0x10
	::System::Single Field_2_1; // 0x18
	::System::UInt64 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB1A4AA1BFE2A872__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_14532D71051D97BC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_AB1A4AA1BFE2A872*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_AB1A4AA1BFE2A872*&))((::PBYTE)hIl2Cpp + CLASS_2_AB1A4AA1BFE2A872_METHOD_2_14532D71051D97BC_OFFSET))(a1, a2);
	}
};

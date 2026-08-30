#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_02A2FB8CC5CF6CC0;

#define CLASS_2_AB1A4AA1BFE2A872_METHOD_2_14532D71051D97BC_OFFSET UNITYSDK_OFFSET(0x1CC30BF0)
#define CLASS_2_AB1A4AA1BFE2A872__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC30DC0)

inline static constexpr unsigned int Class_2_AB1A4AA1BFE2A872_TypeDefinitionIndex = 16637;

class Class_2_AB1A4AA1BFE2A872 : public ::RPG::GameCore::JsonConfig
{
public:
	::Class_2_02A2FB8CC5CF6CC0* BLNDPOKLJAK; // 0x10
	::System::UInt64 NIJMKCCGEHK; // 0x18
	::System::Single JMBHCPLJNNM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB1A4AA1BFE2A872__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_14532D71051D97BC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_AB1A4AA1BFE2A872*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_AB1A4AA1BFE2A872*&))((::PBYTE)hIl2Cpp + CLASS_2_AB1A4AA1BFE2A872_METHOD_2_14532D71051D97BC_OFFSET))(a1, a2);
	}
};

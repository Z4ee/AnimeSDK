#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_AB1A4AA1BFE2A872;

#define CLASS_2_2096632F31B627D7_METHOD_2_1A31ED6C317B4D6D_OFFSET UNITYSDK_OFFSET(0x192F5FD0)
#define CLASS_2_2096632F31B627D7__CTOR_OFFSET UNITYSDK_OFFSET(0x192F6170)

inline static constexpr unsigned int Class_2_2096632F31B627D7_TypeDefinitionIndex = 15972;

class Class_2_2096632F31B627D7 : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::Struct_2_331ACDD60B60D2E3>* Field_2_0; // 0x10
	::Il2CppArray<::Class_2_AB1A4AA1BFE2A872*>* Field_2_1; // 0x18
	::System::UInt64 Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2096632F31B627D7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_1A31ED6C317B4D6D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_2096632F31B627D7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_2096632F31B627D7*&))((::PBYTE)hIl2Cpp + CLASS_2_2096632F31B627D7_METHOD_2_1A31ED6C317B4D6D_OFFSET))(a1, a2);
	}
};

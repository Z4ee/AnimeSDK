#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E8293664BB5E691F.h"

class Class_1_EED1D87C81F7C2A6;
class Class_2_01F4079471966D8C;
namespace RPG::GameCore { class MunicipalChatActionPropAnimation; }

#define CLASS_2_E6945A7903BB177C_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x18753E70)
#define CLASS_2_E6945A7903BB177C_METHOD_2_1B477E0F5238A8BB_OFFSET UNITYSDK_OFFSET(0x18753DD0)
#define CLASS_2_E6945A7903BB177C_METHOD_2_585F9C6EF5BC90C0_OFFSET UNITYSDK_OFFSET(0x18753FA0)
#define CLASS_2_E6945A7903BB177C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18753E20)
#define CLASS_2_E6945A7903BB177C__CTOR_OFFSET UNITYSDK_OFFSET(0x18753DC0)

inline static constexpr unsigned int Class_2_E6945A7903BB177C_TypeDefinitionIndex = 69160;

class Class_2_E6945A7903BB177C : public ::Class_1_E8293664BB5E691F
{
public:
	::Class_2_01F4079471966D8C* KCIMJOOHMKC; // 0x30

	::System::Void _ctor(::Class_1_EED1D87C81F7C2A6* a1, ::RPG::GameCore::MunicipalChatActionPropAnimation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EED1D87C81F7C2A6*, ::RPG::GameCore::MunicipalChatActionPropAnimation*))((::PBYTE)hIl2Cpp + CLASS_2_E6945A7903BB177C__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::MunicipalChatActionPropAnimation* Method_2_1B477E0F5238A8BB()
	{
		return ((::RPG::GameCore::MunicipalChatActionPropAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6945A7903BB177C_METHOD_2_1B477E0F5238A8BB_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6945A7903BB177C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6945A7903BB177C_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_585F9C6EF5BC90C0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E6945A7903BB177C_METHOD_2_585F9C6EF5BC90C0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8CBFD02F2AE45A55.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

class Class_1_D17272E82AE804C2_224;
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueFormulaInfo; }

#define CLASS_3_49812EB510FE2B29_METHOD_3_0860F812E446AE7C_OFFSET UNITYSDK_OFFSET(0x179F3760)
#define CLASS_3_49812EB510FE2B29_METHOD_3_C1C5AB73E443B1B4_OFFSET UNITYSDK_OFFSET(0x179F3A90)
#define CLASS_3_49812EB510FE2B29_METHOD_3_E2030E810407E26B_OFFSET UNITYSDK_OFFSET(0x179F3AD0)
#define CLASS_3_49812EB510FE2B29__CTOR_OFFSET UNITYSDK_OFFSET(0x179F19E0)

inline static constexpr unsigned int Class_3_49812EB510FE2B29_TypeDefinitionIndex = 64079;

class Class_3_49812EB510FE2B29 : public ::Class_2_8CBFD02F2AE45A55
{
public:
	::RPG::Client::RogueFormulaInfo* Field_3_0; // 0x28
	::Class_1_D17272E82AE804C2_224* Field_3_1; // 0x30

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::RogueBuffInfo* a2, ::RPG::Client::RogueFormulaInfo* a3, ::Class_1_D17272E82AE804C2_224* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::RogueBuffInfo*, ::RPG::Client::RogueFormulaInfo*, ::Class_1_D17272E82AE804C2_224*))((::PBYTE)hIl2Cpp + CLASS_3_49812EB510FE2B29__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_0860F812E446AE7C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49812EB510FE2B29_METHOD_3_0860F812E446AE7C_OFFSET))(this);
	}

	static ::System::Boolean Method_3_C1C5AB73E443B1B4(::Enum_3_63BCB6C405BA8A1D_3 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_63BCB6C405BA8A1D_3))((::PBYTE)hIl2Cpp + CLASS_3_49812EB510FE2B29_METHOD_3_C1C5AB73E443B1B4_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_E2030E810407E26B(::Enum_3_63BCB6C405BA8A1D_3 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_63BCB6C405BA8A1D_3))((::PBYTE)hIl2Cpp + CLASS_3_49812EB510FE2B29_METHOD_3_E2030E810407E26B_OFFSET))(a1);
	}
};

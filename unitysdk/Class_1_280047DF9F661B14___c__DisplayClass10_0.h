#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_478;
class Class_1_280047DF9F661B14;
class Class_1_B6A8A062463EFFDD;
class Class_2_458E5D5F1916A1AE;

#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8A4B230)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS10_0__STARTFORLUAHOTFIX_B__0_OFFSET UNITYSDK_OFFSET(0x8A5C0C0)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS10_0__STARTFORLUAHOTFIX_B__1_OFFSET UNITYSDK_OFFSET(0x8A5C0E0)

inline static constexpr unsigned int Class_1_280047DF9F661B14___c__DisplayClass10_0_TypeDefinitionIndex = 48145;

class Class_1_280047DF9F661B14___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_2_458E5D5F1916A1AE* luaData; // 0x10
	::Class_1_280047DF9F661B14* __4__this; // 0x18
	::Class_1_B6A8A062463EFFDD* queue; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForLuaHotfix_b__0(::Class_0_16E4307DCC419505_478* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS10_0__STARTFORLUAHOTFIX_B__0_OFFSET))(this, prog);
	}

	::System::Void _StartForLuaHotfix_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS10_0__STARTFORLUAHOTFIX_B__1_OFFSET))(this);
	}
};

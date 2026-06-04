#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F5924891E2C8D3BA.h"
#include "unitysdk/RPG/GameCore/BattleHintToastStyle.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_7DEC9BD02C7849CF_METHOD_4_2791DE6ED1CC688B_OFFSET UNITYSDK_OFFSET(0x191D01B0)
#define CLASS_4_7DEC9BD02C7849CF_METHOD_4_EAAA010B0BDC9B14_OFFSET UNITYSDK_OFFSET(0x191D01F0)
#define CLASS_4_7DEC9BD02C7849CF__CTOR_OFFSET UNITYSDK_OFFSET(0x191D01E0)

inline static constexpr unsigned int Class_4_7DEC9BD02C7849CF_TypeDefinitionIndex = 22061;

class Class_4_7DEC9BD02C7849CF : public ::Class_3_F5924891E2C8D3BA
{
public:
	::RPG::GameCore::BattleHintToastStyle Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7DEC9BD02C7849CF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_2791DE6ED1CC688B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_7DEC9BD02C7849CF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_7DEC9BD02C7849CF*&))((::PBYTE)hIl2Cpp + CLASS_4_7DEC9BD02C7849CF_METHOD_4_2791DE6ED1CC688B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_EAAA010B0BDC9B14(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_7DEC9BD02C7849CF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_7DEC9BD02C7849CF*))((::PBYTE)hIl2Cpp + CLASS_4_7DEC9BD02C7849CF_METHOD_4_EAAA010B0BDC9B14_OFFSET))(a1, a2);
	}
};

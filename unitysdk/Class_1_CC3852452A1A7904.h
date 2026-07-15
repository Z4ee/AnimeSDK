#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamTowersBossSkillGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_CC3852452A1A7904_METHOD_1_975B9AC31CF05C24_OFFSET UNITYSDK_OFFSET(0x1B58E040)
#define CLASS_1_CC3852452A1A7904__CTOR_OFFSET UNITYSDK_OFFSET(0x1B58E1A0)

inline static constexpr unsigned int Class_1_CC3852452A1A7904_TypeDefinitionIndex = 12023;

class Class_1_CC3852452A1A7904 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::RPG::GameCore::TeamTowersBossSkillGroupType Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC3852452A1A7904__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_975B9AC31CF05C24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_CC3852452A1A7904*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_CC3852452A1A7904*&))((::PBYTE)hIl2Cpp + CLASS_1_CC3852452A1A7904_METHOD_1_975B9AC31CF05C24_OFFSET))(a1, a2);
	}
};

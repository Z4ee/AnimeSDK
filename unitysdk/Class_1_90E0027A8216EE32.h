#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1296;
class Class_0_16E4307DCC419505_1297;
class Class_0_16E4307DCC419505_1298;
class Class_0_16E4307DCC419505_1299;
class Class_1_2CFFBE92D294C889;
class Class_1_5C85CC607D791BFF;
class Class_1_F248B058F5A06B98;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define CLASS_1_90E0027A8216EE32_METHOD_1_2BE72590D877FF44_OFFSET UNITYSDK_OFFSET(0x16475420)
#define CLASS_1_90E0027A8216EE32_METHOD_1_95AD58BBBDAA61B6_OFFSET UNITYSDK_OFFSET(0x16475D70)
#define CLASS_1_90E0027A8216EE32__CTOR_OFFSET UNITYSDK_OFFSET(0x164752B0)

inline static constexpr unsigned int Class_1_90E0027A8216EE32_TypeDefinitionIndex = 76270;

class Class_1_90E0027A8216EE32 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1298* Field_1_0; // 0x10
	::Class_1_F248B058F5A06B98* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_1297* Field_1_2; // 0x20
	::Class_0_16E4307DCC419505_1296* Field_1_3; // 0x28
	::Class_0_16E4307DCC419505_1299* Field_1_4; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_1296* a1, ::Class_0_16E4307DCC419505_1298* a2, ::Class_0_16E4307DCC419505_1297* a3, ::Class_0_16E4307DCC419505_1299* a4, ::Class_1_F248B058F5A06B98* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1296*, ::Class_0_16E4307DCC419505_1298*, ::Class_0_16E4307DCC419505_1297*, ::Class_0_16E4307DCC419505_1299*, ::Class_1_F248B058F5A06B98*))((::PBYTE)hIl2Cpp + CLASS_1_90E0027A8216EE32__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_2BE72590D877FF44(::Class_1_2CFFBE92D294C889* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CFFBE92D294C889*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_90E0027A8216EE32_METHOD_1_2BE72590D877FF44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_95AD58BBBDAA61B6(::Class_1_5C85CC607D791BFF* a1, ::RPG::GameCore::SkillData* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5C85CC607D791BFF*, ::RPG::GameCore::SkillData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_90E0027A8216EE32_METHOD_1_95AD58BBBDAA61B6_OFFSET))(this, a1, a2, a3);
	}
};

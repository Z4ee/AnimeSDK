#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_649B7D3FAC2110AE.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"

namespace RPG::Client { class CharacterRootMotionBakedData; }

#define CLASS_2_A84ABBC8679C9DC6_METHOD_2_6E592B4936604A4B_OFFSET UNITYSDK_OFFSET(0x11663660)
#define CLASS_2_A84ABBC8679C9DC6__CTOR_OFFSET UNITYSDK_OFFSET(0x116637D0)

inline static constexpr unsigned int Class_2_A84ABBC8679C9DC6_TypeDefinitionIndex = 51153;

class Class_2_A84ABBC8679C9DC6 : public ::Class_1_649B7D3FAC2110AE
{
public:
	::RPG::Client::CharacterRootMotionBakedData* Field_2_0; // 0x48

	::System::Void _ctor(::RPG::GameCore::NPCBodySize a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_2_A84ABBC8679C9DC6__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_2_6E592B4936604A4B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A84ABBC8679C9DC6_METHOD_2_6E592B4936604A4B_OFFSET))(this);
	}
};

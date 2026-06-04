#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_649B7D3FAC2110AE.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"

namespace RPG::Client { class CharacterRootMotionBakedData; }

#define CLASS_2_A84ABBC8679C9DC6_METHOD_2_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x145FBD80)
#define CLASS_2_A84ABBC8679C9DC6_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x145FBF90)
#define CLASS_2_A84ABBC8679C9DC6__CTOR_OFFSET UNITYSDK_OFFSET(0x145FBE90)

inline static constexpr unsigned int Class_2_A84ABBC8679C9DC6_TypeDefinitionIndex = 50071;

class Class_2_A84ABBC8679C9DC6 : public ::Class_1_649B7D3FAC2110AE
{
public:
	::RPG::Client::CharacterRootMotionBakedData* Field_2_0; // 0x48

	::System::Void _ctor(::RPG::GameCore::NPCBodySize a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_2_A84ABBC8679C9DC6__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_2_1EDDD623459E1A71()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A84ABBC8679C9DC6_METHOD_2_1EDDD623459E1A71_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A84ABBC8679C9DC6_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}
};

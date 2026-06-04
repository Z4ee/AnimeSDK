#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_649B7D3FAC2110AE.h"
#include "unitysdk/RPG/GameCore/BodySize.h"

namespace RPG::Client { class CharacterRootMotionBakedData; }

#define CLASS_2_0EF1F7E1FAABB306_METHOD_2_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x13687C00)
#define CLASS_2_0EF1F7E1FAABB306_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x13687E10)
#define CLASS_2_0EF1F7E1FAABB306__CTOR_OFFSET UNITYSDK_OFFSET(0x13687D10)

inline static constexpr unsigned int Class_2_0EF1F7E1FAABB306_TypeDefinitionIndex = 50070;

class Class_2_0EF1F7E1FAABB306 : public ::Class_1_649B7D3FAC2110AE
{
public:
	::RPG::Client::CharacterRootMotionBakedData* Field_2_0; // 0x48

	::System::Void _ctor(::RPG::GameCore::BodySize a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BodySize))((::PBYTE)hIl2Cpp + CLASS_2_0EF1F7E1FAABB306__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_2_1EDDD623459E1A71()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EF1F7E1FAABB306_METHOD_2_1EDDD623459E1A71_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EF1F7E1FAABB306_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}
};

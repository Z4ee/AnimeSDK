#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_649B7D3FAC2110AE.h"
#include "unitysdk/RPG/GameCore/BodySize.h"

namespace RPG::Client { class CharacterRootMotionBakedData; }

#define CLASS_2_0EF1F7E1FAABB306_METHOD_2_6E592B4936604A4B_OFFSET UNITYSDK_OFFSET(0x1537AF40)
#define CLASS_2_0EF1F7E1FAABB306__CTOR_OFFSET UNITYSDK_OFFSET(0x1537B0B0)

inline static constexpr unsigned int Class_2_0EF1F7E1FAABB306_TypeDefinitionIndex = 53836;

class Class_2_0EF1F7E1FAABB306 : public ::Class_1_649B7D3FAC2110AE
{
public:
	::RPG::Client::CharacterRootMotionBakedData* APPIHABBCGK; // 0x48

	::System::Void _ctor(::RPG::GameCore::BodySize a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BodySize))((::PBYTE)hIl2Cpp + CLASS_2_0EF1F7E1FAABB306__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_2_6E592B4936604A4B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EF1F7E1FAABB306_METHOD_2_6E592B4936604A4B_OFFSET))(this);
	}
};

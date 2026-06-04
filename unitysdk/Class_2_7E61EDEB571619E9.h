#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_5.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class CheckCurrentAIPhaseAxis; }

#define CLASS_2_7E61EDEB571619E9_METHOD_2_512073A5E70F4E39_OFFSET UNITYSDK_OFFSET(0xA762E30)
#define CLASS_2_7E61EDEB571619E9_METHOD_2_CE2B4CF74BC3468E_OFFSET UNITYSDK_OFFSET(0xA762D60)
#define CLASS_2_7E61EDEB571619E9__CTOR_OFFSET UNITYSDK_OFFSET(0xA762D50)

inline static constexpr unsigned int Class_2_7E61EDEB571619E9_TypeDefinitionIndex = 50811;

class Class_2_7E61EDEB571619E9 : public ::Class_1_F9FBCC956DFCF137_5
{
public:
	::RPG::GameCore::CheckCurrentAIPhaseAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckCurrentAIPhaseAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckCurrentAIPhaseAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_7E61EDEB571619E9__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_CE2B4CF74BC3468E()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E61EDEB571619E9_METHOD_2_CE2B4CF74BC3468E_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_512073A5E70F4E39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E61EDEB571619E9_METHOD_2_512073A5E70F4E39_OFFSET))(this);
	}
};

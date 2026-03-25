#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleByIsAttacker; }

#define CLASS_3_4F49E7BD399B4D1D_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16947A80)
#define CLASS_3_4F49E7BD399B4D1D__CTOR_OFFSET UNITYSDK_OFFSET(0x16947A70)

inline static constexpr unsigned int Class_3_4F49E7BD399B4D1D_TypeDefinitionIndex = 33196;

class Class_3_4F49E7BD399B4D1D : public ::Class_2_A047D65884258648
{
public:
	::System::Void _ctor(::RPG::GameCore::MarbleByIsAttacker* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByIsAttacker*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_3_4F49E7BD399B4D1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F49E7BD399B4D1D_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}
};

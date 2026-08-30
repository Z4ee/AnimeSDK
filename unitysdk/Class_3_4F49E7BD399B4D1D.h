#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleByIsAttacker; }

#define CLASS_3_4F49E7BD399B4D1D_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1D03E8F0)
#define CLASS_3_4F49E7BD399B4D1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D03E8E0)

inline static constexpr unsigned int Class_3_4F49E7BD399B4D1D_TypeDefinitionIndex = 41501;

class Class_3_4F49E7BD399B4D1D : public ::Class_2_A047D65884258648
{
public:
	::System::Void _ctor(::RPG::GameCore::MarbleByIsAttacker* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByIsAttacker*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_3_4F49E7BD399B4D1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F49E7BD399B4D1D_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}
};

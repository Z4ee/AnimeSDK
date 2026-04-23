#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_D37BADBAF66E56C6;
namespace RPG::GameCore { class MarbleByExtraRound; }

#define CLASS_3_AFCE729056D8F41F_METHOD_3_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x17ED9C80)
#define CLASS_3_AFCE729056D8F41F__CTOR_OFFSET UNITYSDK_OFFSET(0x17ED9C60)

inline static constexpr unsigned int Class_3_AFCE729056D8F41F_TypeDefinitionIndex = 39002;

class Class_3_AFCE729056D8F41F : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByExtraRound* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByExtraRound* a1, ::Class_1_D37BADBAF66E56C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByExtraRound*, ::Class_1_D37BADBAF66E56C6*))((::PBYTE)hIl2Cpp + CLASS_3_AFCE729056D8F41F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFCE729056D8F41F_METHOD_3_0B1EB5C9B94BAB66_OFFSET))(this);
	}
};

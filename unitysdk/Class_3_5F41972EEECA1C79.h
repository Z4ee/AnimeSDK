#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleByHitLeft; }

#define CLASS_3_5F41972EEECA1C79_METHOD_3_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x1C33D030)
#define CLASS_3_5F41972EEECA1C79__CTOR_OFFSET UNITYSDK_OFFSET(0x1C33D010)

inline static constexpr unsigned int Class_3_5F41972EEECA1C79_TypeDefinitionIndex = 41512;

class Class_3_5F41972EEECA1C79 : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByHitLeft* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByHitLeft* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByHitLeft*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_3_5F41972EEECA1C79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F41972EEECA1C79_METHOD_3_507A5122CD01412B_OFFSET))(this);
	}
};

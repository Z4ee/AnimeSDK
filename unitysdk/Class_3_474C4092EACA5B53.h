#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleByCompareBuffCount; }

#define CLASS_3_474C4092EACA5B53_METHOD_3_1C298FA6BB9350FA_OFFSET UNITYSDK_OFFSET(0x1CAC5950)
#define CLASS_3_474C4092EACA5B53__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAC5930)

inline static constexpr unsigned int Class_3_474C4092EACA5B53_TypeDefinitionIndex = 43147;

class Class_3_474C4092EACA5B53 : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByCompareBuffCount* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByCompareBuffCount* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCompareBuffCount*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_3_474C4092EACA5B53__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1C298FA6BB9350FA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_474C4092EACA5B53_METHOD_3_1C298FA6BB9350FA_OFFSET))(this);
	}
};

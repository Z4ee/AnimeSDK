#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleByAnd; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5A0BE00A19A9BDCF_METHOD_3_DDB0310B80AE817B_OFFSET UNITYSDK_OFFSET(0x1C965EC0)
#define CLASS_3_5A0BE00A19A9BDCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C965D10)

inline static constexpr unsigned int Class_3_5A0BE00A19A9BDCF_TypeDefinitionIndex = 43136;

class Class_3_5A0BE00A19A9BDCF : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByAnd* IGHAHBNLIJA; // 0x30
	::System::Collections::Generic::List_1<::Class_2_A047D65884258648*>* HLOLHEMPFHF; // 0x38

	::System::Void _ctor(::RPG::GameCore::MarbleByAnd* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByAnd*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_3_5A0BE00A19A9BDCF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_DDB0310B80AE817B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A0BE00A19A9BDCF_METHOD_3_DDB0310B80AE817B_OFFSET))(this);
	}
};

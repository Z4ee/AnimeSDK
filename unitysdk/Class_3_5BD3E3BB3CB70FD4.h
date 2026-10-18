#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleByCompareValue; }

#define CLASS_3_5BD3E3BB3CB70FD4_METHOD_3_34659C288538AEDA_OFFSET UNITYSDK_OFFSET(0x1CB66480)
#define CLASS_3_5BD3E3BB3CB70FD4__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB66460)

inline static constexpr unsigned int Class_3_5BD3E3BB3CB70FD4_TypeDefinitionIndex = 43146;

class Class_3_5BD3E3BB3CB70FD4 : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByCompareValue* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByCompareValue* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCompareValue*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_3_5BD3E3BB3CB70FD4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_34659C288538AEDA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5BD3E3BB3CB70FD4_METHOD_3_34659C288538AEDA_OFFSET))(this);
	}
};

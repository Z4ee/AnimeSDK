#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_5816B66AC6910205;
namespace RPG::GameCore { class MarbleByCompareValue; }

#define CLASS_3_5BD3E3BB3CB70FD4_METHOD_3_E5E107455A104BAC_OFFSET UNITYSDK_OFFSET(0x18E43AD0)
#define CLASS_3_5BD3E3BB3CB70FD4__CTOR_OFFSET UNITYSDK_OFFSET(0x18E43AB0)

inline static constexpr unsigned int Class_3_5BD3E3BB3CB70FD4_TypeDefinitionIndex = 39761;

class Class_3_5BD3E3BB3CB70FD4 : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByCompareValue* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByCompareValue* a1, ::Class_1_5816B66AC6910205* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCompareValue*, ::Class_1_5816B66AC6910205*))((::PBYTE)hIl2Cpp + CLASS_3_5BD3E3BB3CB70FD4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_E5E107455A104BAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5BD3E3BB3CB70FD4_METHOD_3_E5E107455A104BAC_OFFSET))(this);
	}
};

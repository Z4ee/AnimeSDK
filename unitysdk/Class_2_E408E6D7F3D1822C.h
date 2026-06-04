#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_2_E408E6D7F3D1822C_CLEAR_OFFSET UNITYSDK_OFFSET(0x137CFE10)
#define CLASS_2_E408E6D7F3D1822C__CTOR_OFFSET UNITYSDK_OFFSET(0x137CFEA0)
#define CLASS_2_E408E6D7F3D1822C___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x137CFEB0)

inline static constexpr unsigned int Class_2_E408E6D7F3D1822C_TypeDefinitionIndex = 61548;

class Class_2_E408E6D7F3D1822C : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::MatchThreeBoard* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E408E6D7F3D1822C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E408E6D7F3D1822C_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E408E6D7F3D1822C___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};

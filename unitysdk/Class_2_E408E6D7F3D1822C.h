#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_2_E408E6D7F3D1822C_CLEAR_OFFSET UNITYSDK_OFFSET(0x9A40FA0)
#define CLASS_2_E408E6D7F3D1822C__CTOR_OFFSET UNITYSDK_OFFSET(0x9A388F0)
#define CLASS_2_E408E6D7F3D1822C___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x9A41030)

inline static constexpr unsigned int Class_2_E408E6D7F3D1822C_TypeDefinitionIndex = 60614;

class Class_2_E408E6D7F3D1822C : public ::Class_1_7ACCB923E979A908
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

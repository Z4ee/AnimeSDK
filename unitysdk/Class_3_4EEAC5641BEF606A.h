#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_4EEAC5641BEF606A_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0xCBDC0C0)
#define CLASS_3_4EEAC5641BEF606A_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0xCBDC270)
#define CLASS_3_4EEAC5641BEF606A_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xCBDC140)
#define CLASS_3_4EEAC5641BEF606A_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCBDC190)
#define CLASS_3_4EEAC5641BEF606A__CTOR_OFFSET UNITYSDK_OFFSET(0xCBDC2C0)
#define CLASS_3_4EEAC5641BEF606A___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xCBDC2D0)
#define CLASS_3_4EEAC5641BEF606A___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCBDC330)

inline static constexpr unsigned int Class_3_4EEAC5641BEF606A_TypeDefinitionIndex = 61558;

class Class_3_4EEAC5641BEF606A : public ::Class_2_E408E6D7F3D1822C
{
public:
	::System::UInt32 Field_3_0; // 0x28
	::RPG::Client::LittleGame::Match3::OpponentRole Field_3_1; // 0x2C
	::UnityEngine::Vector2 Field_3_2; // 0x30
	::System::Boolean Field_3_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EEAC5641BEF606A__CTOR_OFFSET))(this);
	}

	static ::Class_3_4EEAC5641BEF606A* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_4EEAC5641BEF606A*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_4EEAC5641BEF606A_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EEAC5641BEF606A_ONCLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EEAC5641BEF606A_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EEAC5641BEF606A_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EEAC5641BEF606A___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EEAC5641BEF606A___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};

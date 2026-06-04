#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_AB478A52B78732B2_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0xA8125C0)
#define CLASS_3_AB478A52B78732B2_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0xA812760)
#define CLASS_3_AB478A52B78732B2_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA812640)
#define CLASS_3_AB478A52B78732B2_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA812690)
#define CLASS_3_AB478A52B78732B2__CTOR_OFFSET UNITYSDK_OFFSET(0xA8127B0)
#define CLASS_3_AB478A52B78732B2___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA8127C0)
#define CLASS_3_AB478A52B78732B2___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA812800)

inline static constexpr unsigned int Class_3_AB478A52B78732B2_TypeDefinitionIndex = 61560;

class Class_3_AB478A52B78732B2 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::RPG::Client::LittleGame::Match3::OpponentRole Field_3_0; // 0x28
	::System::UInt32 Field_3_1; // 0x2C
	::System::UInt32 Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB478A52B78732B2__CTOR_OFFSET))(this);
	}

	static ::Class_3_AB478A52B78732B2* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_AB478A52B78732B2*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_AB478A52B78732B2_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB478A52B78732B2_ONCLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB478A52B78732B2_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB478A52B78732B2_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB478A52B78732B2___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB478A52B78732B2___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};

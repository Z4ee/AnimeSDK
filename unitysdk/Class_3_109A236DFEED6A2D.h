#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_109A236DFEED6A2D_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0xA97CA30)
#define CLASS_3_109A236DFEED6A2D_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0xA97CBE0)
#define CLASS_3_109A236DFEED6A2D_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA97CAB0)
#define CLASS_3_109A236DFEED6A2D_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA97CB00)
#define CLASS_3_109A236DFEED6A2D__CTOR_OFFSET UNITYSDK_OFFSET(0xA97CC30)
#define CLASS_3_109A236DFEED6A2D___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA97CC40)
#define CLASS_3_109A236DFEED6A2D___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA97CCA0)

inline static constexpr unsigned int Class_3_109A236DFEED6A2D_TypeDefinitionIndex = 61559;

class Class_3_109A236DFEED6A2D : public ::Class_2_E408E6D7F3D1822C
{
public:
	::System::UInt32 Field_3_0; // 0x28
	::UnityEngine::Vector2 Field_3_1; // 0x2C
	::RPG::Client::LittleGame::Match3::OpponentRole Field_3_2; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_109A236DFEED6A2D__CTOR_OFFSET))(this);
	}

	static ::Class_3_109A236DFEED6A2D* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_109A236DFEED6A2D*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_109A236DFEED6A2D_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_109A236DFEED6A2D_ONCLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_109A236DFEED6A2D_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_109A236DFEED6A2D_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_109A236DFEED6A2D___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_109A236DFEED6A2D___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};

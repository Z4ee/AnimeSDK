#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_109A236DFEED6A2D_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0xCD13F40)
#define CLASS_3_109A236DFEED6A2D_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0xCD13DB0)
#define CLASS_3_109A236DFEED6A2D_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xCD13E30)
#define CLASS_3_109A236DFEED6A2D_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCD13E80)
#define CLASS_3_109A236DFEED6A2D__CTOR_OFFSET UNITYSDK_OFFSET(0xCD13F90)
#define CLASS_3_109A236DFEED6A2D___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xCD13FA0)
#define CLASS_3_109A236DFEED6A2D___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCD14000)

inline static constexpr unsigned int Class_3_109A236DFEED6A2D_TypeDefinitionIndex = 60625;

class Class_3_109A236DFEED6A2D : public ::Class_2_E408E6D7F3D1822C
{
public:
	::System::UInt32 Field_3_1; // 0x28
	::RPG::Client::LittleGame::Match3::OpponentRole Field_3_2; // 0x2C
	::UnityEngine::Vector2 Field_3_0; // 0x30

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

	::System::Void Method_3_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_109A236DFEED6A2D_METHOD_3_61929A3103595552_OFFSET))(this);
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

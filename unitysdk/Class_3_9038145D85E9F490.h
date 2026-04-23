#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_9038145D85E9F490_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x124B3390)
#define CLASS_3_9038145D85E9F490_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x124B3480)
#define CLASS_3_9038145D85E9F490_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x124B3410)
#define CLASS_3_9038145D85E9F490__CTOR_OFFSET UNITYSDK_OFFSET(0x124B34E0)
#define CLASS_3_9038145D85E9F490___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x124B3550)
#define CLASS_3_9038145D85E9F490___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x124B34F0)

inline static constexpr unsigned int Class_3_9038145D85E9F490_TypeDefinitionIndex = 60635;

class Class_3_9038145D85E9F490 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::UnityEngine::Vector2 Field_3_0; // 0x28
	::System::UInt32 Field_3_1; // 0x30
	::System::UInt32 Field_3_3; // 0x34
	::RPG::GameCore::Match3::BombType Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9038145D85E9F490__CTOR_OFFSET))(this);
	}

	static ::Class_3_9038145D85E9F490* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_9038145D85E9F490*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_9038145D85E9F490_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9038145D85E9F490_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9038145D85E9F490_ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9038145D85E9F490___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9038145D85E9F490___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};

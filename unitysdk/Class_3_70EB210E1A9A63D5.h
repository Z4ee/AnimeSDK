#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_70EB210E1A9A63D5_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x9A38890)
#define CLASS_3_70EB210E1A9A63D5_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x9A38750)
#define CLASS_3_70EB210E1A9A63D5_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x9A387D0)
#define CLASS_3_70EB210E1A9A63D5__CTOR_OFFSET UNITYSDK_OFFSET(0x9A388E0)
#define CLASS_3_70EB210E1A9A63D5___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x9A38900)

inline static constexpr unsigned int Class_3_70EB210E1A9A63D5_TypeDefinitionIndex = 60630;

class Class_3_70EB210E1A9A63D5 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::UnityEngine::Vector2Int Field_3_1; // 0x28
	::UnityEngine::Vector2Int Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5__CTOR_OFFSET))(this);
	}

	static ::Class_3_70EB210E1A9A63D5* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_70EB210E1A9A63D5*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5_METHOD_3_61929A3103595552_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70EB210E1A9A63D5___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_A68E2F9B8ECA8EC4_METHOD_3_B009EDD65A2C43CD_OFFSET UNITYSDK_OFFSET(0xDD77640)
#define CLASS_3_A68E2F9B8ECA8EC4_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0xDD778D0)
#define CLASS_3_A68E2F9B8ECA8EC4_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xDD77820)
#define CLASS_3_A68E2F9B8ECA8EC4_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xDD77760)
#define CLASS_3_A68E2F9B8ECA8EC4__CTOR_OFFSET UNITYSDK_OFFSET(0xDD77920)

inline static constexpr unsigned int Class_3_A68E2F9B8ECA8EC4_TypeDefinitionIndex = 65902;

class Class_3_A68E2F9B8ECA8EC4 : public ::Class_2_980BB27C20DEC196
{
public:
	::RPG::PoolList_1<::UnityEngine::Vector2Int>* IPKCFNKIDMB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A68E2F9B8ECA8EC4__CTOR_OFFSET))(this);
	}

	static ::Class_3_A68E2F9B8ECA8EC4* Method_3_B009EDD65A2C43CD(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_A68E2F9B8ECA8EC4*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_A68E2F9B8ECA8EC4_METHOD_3_B009EDD65A2C43CD_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A68E2F9B8ECA8EC4_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A68E2F9B8ECA8EC4_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A68E2F9B8ECA8EC4_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};

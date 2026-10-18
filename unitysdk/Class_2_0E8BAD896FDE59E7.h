#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_38A71F76592AF3BC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AnchorInfo; }

#define CLASS_2_0E8BAD896FDE59E7_METHOD_2_FC71E831AFECCAFC_OFFSET UNITYSDK_OFFSET(0x154ED510)
#define CLASS_2_0E8BAD896FDE59E7__CTOR_OFFSET UNITYSDK_OFFSET(0x154ED660)

inline static constexpr unsigned int Class_2_0E8BAD896FDE59E7_TypeDefinitionIndex = 57317;

class Class_2_0E8BAD896FDE59E7 : public ::Class_1_38A71F76592AF3BC
{
public:
	::RPG::GameCore::AnchorInfo* MOGKHAKCONH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E8BAD896FDE59E7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_FC71E831AFECCAFC(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_0E8BAD896FDE59E7_METHOD_2_FC71E831AFECCAFC_OFFSET))(this, a1);
	}
};

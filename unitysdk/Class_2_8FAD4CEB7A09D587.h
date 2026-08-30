#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_38A71F76592AF3BC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_8FAD4CEB7A09D587_METHOD_2_6270D564028DED48_OFFSET UNITYSDK_OFFSET(0x15819DB0)
#define CLASS_2_8FAD4CEB7A09D587__CTOR_OFFSET UNITYSDK_OFFSET(0x1581A020)

inline static constexpr unsigned int Class_2_8FAD4CEB7A09D587_TypeDefinitionIndex = 57474;

class Class_2_8FAD4CEB7A09D587 : public ::Class_1_38A71F76592AF3BC
{
public:
	::System::String* BAHLDFMIJFG; // 0x20
	::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FAD4CEB7A09D587__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_6270D564028DED48(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_8FAD4CEB7A09D587_METHOD_2_6270D564028DED48_OFFSET))(this, a1);
	}
};

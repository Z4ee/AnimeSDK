#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_38A71F76592AF3BC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_8FAD4CEB7A09D587_METHOD_2_6270D564028DED48_OFFSET UNITYSDK_OFFSET(0x13A07730)
#define CLASS_2_8FAD4CEB7A09D587_METHOD_2_68AC62F249F8561A_OFFSET UNITYSDK_OFFSET(0x13A079C0)
#define CLASS_2_8FAD4CEB7A09D587__CTOR_OFFSET UNITYSDK_OFFSET(0x13A079B0)

inline static constexpr unsigned int Class_2_8FAD4CEB7A09D587_TypeDefinitionIndex = 53537;

class Class_2_8FAD4CEB7A09D587 : public ::Class_1_38A71F76592AF3BC
{
public:
	::System::String* Field_2_0; // 0x20
	::RPG::GameCore::GameEntity* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FAD4CEB7A09D587__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_6270D564028DED48(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_8FAD4CEB7A09D587_METHOD_2_6270D564028DED48_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_68AC62F249F8561A(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_8FAD4CEB7A09D587_METHOD_2_68AC62F249F8561A_OFFSET))(this, a1);
	}
};

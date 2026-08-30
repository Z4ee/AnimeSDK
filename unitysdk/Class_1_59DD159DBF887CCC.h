#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }

#define CLASS_1_59DD159DBF887CCC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179E81D0)
#define CLASS_1_59DD159DBF887CCC_METHOD_1_FE05356E47D9A94A_OFFSET UNITYSDK_OFFSET(0x179E8010)
#define CLASS_1_59DD159DBF887CCC__CTOR_OFFSET UNITYSDK_OFFSET(0x179E7F10)

inline static constexpr unsigned int Class_1_59DD159DBF887CCC_TypeDefinitionIndex = 60359;

class Class_1_59DD159DBF887CCC : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* OALILMALLAI; // 0x10
	::RPG::GameCore::GameWorld* JEOADHBDKMO; // 0x18

	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_59DD159DBF887CCC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_FE05356E47D9A94A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_59DD159DBF887CCC_METHOD_1_FE05356E47D9A94A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59DD159DBF887CCC_DISPOSE_OFFSET))(this);
	}
};

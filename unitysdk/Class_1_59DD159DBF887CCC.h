#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }

#define CLASS_1_59DD159DBF887CCC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14D15020)
#define CLASS_1_59DD159DBF887CCC_METHOD_1_FE05356E47D9A94A_OFFSET UNITYSDK_OFFSET(0x14D14E60)
#define CLASS_1_59DD159DBF887CCC__CTOR_OFFSET UNITYSDK_OFFSET(0x14D14D60)

inline static constexpr unsigned int Class_1_59DD159DBF887CCC_TypeDefinitionIndex = 57542;

class Class_1_59DD159DBF887CCC : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::GameWorld* Field_1_1; // 0x18

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

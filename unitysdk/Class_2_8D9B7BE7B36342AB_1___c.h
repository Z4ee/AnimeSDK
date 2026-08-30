#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_8D9B7BE7B36342AB_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4FBAE0)
#define CLASS_2_8D9B7BE7B36342AB_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB4FBB20)
#define CLASS_2_8D9B7BE7B36342AB_1___C__TRANSFORM_B__1_0_OFFSET UNITYSDK_OFFSET(0xB4FBB30)

inline static constexpr unsigned int Class_2_8D9B7BE7B36342AB_1___c_TypeDefinitionIndex = 59301;

class Class_2_8D9B7BE7B36342AB_1___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8D9B7BE7B36342AB_1___c_TypeDefinitionIndex)->GetStaticField(0x5DAD0);
	}
	static ::Class_2_8D9B7BE7B36342AB_1___c** StaticGet___9()
	{
		return (::Class_2_8D9B7BE7B36342AB_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8D9B7BE7B36342AB_1___c_TypeDefinitionIndex)->GetStaticField(0x5DAD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8D9B7BE7B36342AB_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D9B7BE7B36342AB_1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Transform_b__1_0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8D9B7BE7B36342AB_1___C__TRANSFORM_B__1_0_OFFSET))(this, a1);
	}
};

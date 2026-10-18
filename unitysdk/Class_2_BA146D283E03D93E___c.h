#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_BA146D283E03D93E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB330940)
#define CLASS_2_BA146D283E03D93E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB330970)
#define CLASS_2_BA146D283E03D93E___C__TRANSFORM_B__1_0_OFFSET UNITYSDK_OFFSET(0xB330980)

inline static constexpr unsigned int Class_2_BA146D283E03D93E___c_TypeDefinitionIndex = 59154;

class Class_2_BA146D283E03D93E___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BA146D283E03D93E___c_TypeDefinitionIndex)->GetStaticField(0x34D30);
	}
	static ::Class_2_BA146D283E03D93E___c** StaticGet___9()
	{
		return (::Class_2_BA146D283E03D93E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BA146D283E03D93E___c_TypeDefinitionIndex)->GetStaticField(0x34D38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BA146D283E03D93E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA146D283E03D93E___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Transform_b__1_0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BA146D283E03D93E___C__TRANSFORM_B__1_0_OFFSET))(this, a1);
	}
};

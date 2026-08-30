#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_B92D31ACF788CA3E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F8A480)
#define CLASS_1_B92D31ACF788CA3E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F8A4B0)
#define CLASS_1_B92D31ACF788CA3E___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x18F8A4C0)

inline static constexpr unsigned int Class_1_B92D31ACF788CA3E___c_TypeDefinitionIndex = 60594;

class Class_1_B92D31ACF788CA3E___c : public ::System::Object
{
public:
	static ::Class_1_B92D31ACF788CA3E___c** StaticGet___9()
	{
		return (::Class_1_B92D31ACF788CA3E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B92D31ACF788CA3E___c_TypeDefinitionIndex)->GetStaticField(0x1C200);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__37_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B92D31ACF788CA3E___C___CCTOR_B__37_0_OFFSET))(this, a1, a2);
	}
};

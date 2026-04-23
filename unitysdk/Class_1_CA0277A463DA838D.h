#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class OpenTimeRewindSnapPageParam; }
namespace System { class Action; }

#define CLASS_1_CA0277A463DA838D_METHOD_1_1247FC7BD65C0F7D_OFFSET UNITYSDK_OFFSET(0x12116A50)
#define CLASS_1_CA0277A463DA838D_METHOD_1_849DB7FB6F2930E6_OFFSET UNITYSDK_OFFSET(0x12116980)
#define CLASS_1_CA0277A463DA838D_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x12116B30)
#define CLASS_1_CA0277A463DA838D_METHOD_1_C5569225D28C7C2E_OFFSET UNITYSDK_OFFSET(0x12116BE0)
#define CLASS_1_CA0277A463DA838D__CCTOR_OFFSET UNITYSDK_OFFSET(0x12116EC0)

inline static constexpr unsigned int Class_1_CA0277A463DA838D_TypeDefinitionIndex = 56110;

class Class_1_CA0277A463DA838D : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA0277A463DA838D_TypeDefinitionIndex)->GetStaticField(0x10200);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA0277A463DA838D__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_849DB7FB6F2930E6(::RPG::GameCore::GameEntity* a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA0277A463DA838D_METHOD_1_849DB7FB6F2930E6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1247FC7BD65C0F7D(::RPG::GameCore::GameEntity* a1, ::System::Action* a2, ::RPG::GameCore::OpenTimeRewindSnapPageParam* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Action*, ::RPG::GameCore::OpenTimeRewindSnapPageParam*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA0277A463DA838D_METHOD_1_1247FC7BD65C0F7D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA0277A463DA838D_METHOD_1_BBA49FAB086F388D_OFFSET))();
	}

	static ::System::Void Method_1_C5569225D28C7C2E(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::GameEntityList* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_CA0277A463DA838D_METHOD_1_C5569225D28C7C2E_OFFSET))(a1, a2, a3);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class OpenTimeRewindSnapPageParam; }
namespace System { class Action; }

#define CLASS_1_CA0277A463DA838D_METHOD_1_1247FC7BD65C0F7D_OFFSET UNITYSDK_OFFSET(0x1A7A11F0)
#define CLASS_1_CA0277A463DA838D_METHOD_1_A49A8A4FAD003DB9_OFFSET UNITYSDK_OFFSET(0x1A7A1380)
#define CLASS_1_CA0277A463DA838D_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x1A7A12D0)
#define CLASS_1_CA0277A463DA838D_METHOD_1_DF199972AF15EAB4_OFFSET UNITYSDK_OFFSET(0x1A7A1120)
#define CLASS_1_CA0277A463DA838D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7A16D0)

inline static constexpr unsigned int Class_1_CA0277A463DA838D_TypeDefinitionIndex = 60946;

class Class_1_CA0277A463DA838D : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_KMFBDEHCLFG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA0277A463DA838D_TypeDefinitionIndex)->GetStaticField(0xFB40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA0277A463DA838D__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_DF199972AF15EAB4(::RPG::GameCore::GameEntity* a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA0277A463DA838D_METHOD_1_DF199972AF15EAB4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1247FC7BD65C0F7D(::RPG::GameCore::GameEntity* a1, ::System::Action* a2, ::RPG::GameCore::OpenTimeRewindSnapPageParam* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Action*, ::RPG::GameCore::OpenTimeRewindSnapPageParam*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA0277A463DA838D_METHOD_1_1247FC7BD65C0F7D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA0277A463DA838D_METHOD_1_BBA49FAB086F388D_OFFSET))();
	}

	static ::System::Void Method_1_A49A8A4FAD003DB9(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::GameEntityList* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_1_CA0277A463DA838D_METHOD_1_A49A8A4FAD003DB9_OFFSET))(a1, a2, a3);
	}
};

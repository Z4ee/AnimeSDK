#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_709C4C5FB0270D6D_Class_1_317CDD276CB8C912;
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_709C4C5FB0270D6D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10601C70)
#define CLASS_1_709C4C5FB0270D6D_METHOD_1_006EF7FF09C45353_OFFSET UNITYSDK_OFFSET(0x10602220)
#define CLASS_1_709C4C5FB0270D6D_METHOD_1_226842F6044F973B_OFFSET UNITYSDK_OFFSET(0x10601CC0)
#define CLASS_1_709C4C5FB0270D6D_METHOD_1_57463EAF62638A1C_OFFSET UNITYSDK_OFFSET(0x10601E30)
#define CLASS_1_709C4C5FB0270D6D_METHOD_1_654E186F29967F71_OFFSET UNITYSDK_OFFSET(0x10602A20)
#define CLASS_1_709C4C5FB0270D6D_METHOD_1_8EA3DD3D2884C0BF_OFFSET UNITYSDK_OFFSET(0x10602CF0)
#define CLASS_1_709C4C5FB0270D6D_METHOD_1_9333253040407D39_OFFSET UNITYSDK_OFFSET(0x106028B0)
#define CLASS_1_709C4C5FB0270D6D_METHOD_1_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x10601DC0)
#define CLASS_1_709C4C5FB0270D6D_METHOD_1_E9EBE847C2A79912_OFFSET UNITYSDK_OFFSET(0x10602290)
#define CLASS_1_709C4C5FB0270D6D_METHOD_1_FEDE09C198114DBE_OFFSET UNITYSDK_OFFSET(0x10602D70)
#define CLASS_1_709C4C5FB0270D6D__CTOR_OFFSET UNITYSDK_OFFSET(0x10601C30)

inline static constexpr unsigned int Class_1_709C4C5FB0270D6D_TypeDefinitionIndex = 45761;

class Class_1_709C4C5FB0270D6D : public ::System::Object
{
public:
	::RPG::GameCore::AvatarDataComponent* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_709C4C5FB0270D6D_Class_1_317CDD276CB8C912*>* Field_1_2; // 0x18
	::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_1_3; // 0x20
	::System::UInt32 Field_1_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::AvatarDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_709C4C5FB0270D6D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_709C4C5FB0270D6D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_709C4C5FB0270D6D_METHOD_1_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_1_006EF7FF09C45353(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_709C4C5FB0270D6D_METHOD_1_006EF7FF09C45353_OFFSET))(this, a1);
	}

	::System::Void Method_1_654E186F29967F71(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_709C4C5FB0270D6D_METHOD_1_654E186F29967F71_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9EBE847C2A79912(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_709C4C5FB0270D6D_METHOD_1_E9EBE847C2A79912_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8EA3DD3D2884C0BF(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_709C4C5FB0270D6D_METHOD_1_8EA3DD3D2884C0BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_57463EAF62638A1C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_709C4C5FB0270D6D_METHOD_1_57463EAF62638A1C_OFFSET))(this, a1);
	}

	::System::Void Method_1_9333253040407D39(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_709C4C5FB0270D6D_METHOD_1_9333253040407D39_OFFSET))(this, a1);
	}

	::System::Void Method_1_226842F6044F973B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_709C4C5FB0270D6D_METHOD_1_226842F6044F973B_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_FEDE09C198114DBE()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_709C4C5FB0270D6D_METHOD_1_FEDE09C198114DBE_OFFSET))(this);
	}
};

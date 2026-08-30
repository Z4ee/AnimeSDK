#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4B0859209F16852_Class_1_317CDD276CB8C912;
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B4B0859209F16852_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1641A6B0)
#define CLASS_1_B4B0859209F16852_METHOD_1_0C476E7FDD0A7AA1_OFFSET UNITYSDK_OFFSET(0x1641A890)
#define CLASS_1_B4B0859209F16852_METHOD_1_3C111959D3BB5616_OFFSET UNITYSDK_OFFSET(0x1641B5E0)
#define CLASS_1_B4B0859209F16852_METHOD_1_56FB8E42255FAC9B_OFFSET UNITYSDK_OFFSET(0x1641B480)
#define CLASS_1_B4B0859209F16852_METHOD_1_76BE3743B42F1B89_OFFSET UNITYSDK_OFFSET(0x1641ACB0)
#define CLASS_1_B4B0859209F16852_METHOD_1_8EA3DD3D2884C0BF_OFFSET UNITYSDK_OFFSET(0x1641B8C0)
#define CLASS_1_B4B0859209F16852_METHOD_1_930073A6194C4594_OFFSET UNITYSDK_OFFSET(0x1641A700)
#define CLASS_1_B4B0859209F16852_METHOD_1_9AB045C54EC604F2_OFFSET UNITYSDK_OFFSET(0x1641AD20)
#define CLASS_1_B4B0859209F16852_METHOD_1_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x1641A820)
#define CLASS_1_B4B0859209F16852_METHOD_1_FEDE09C198114DBE_OFFSET UNITYSDK_OFFSET(0x1641B940)
#define CLASS_1_B4B0859209F16852__CTOR_OFFSET UNITYSDK_OFFSET(0x1641A670)

inline static constexpr unsigned int Class_1_B4B0859209F16852_TypeDefinitionIndex = 57051;

class Class_1_B4B0859209F16852 : public ::System::Object
{
public:
	::RPG::GameCore::AvatarDataComponent* ACDJAKOGPPD; // 0x10
	::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>* KPFHDLMEFHN; // 0x18
	::System::Collections::Generic::List_1<::Class_1_B4B0859209F16852_Class_1_317CDD276CB8C912*>* OOMDGPLMNOH; // 0x20
	::System::UInt32 MNIPJEALGNJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::AvatarDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_B4B0859209F16852__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4B0859209F16852_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B4B0859209F16852_METHOD_1_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_1_76BE3743B42F1B89(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B4B0859209F16852_METHOD_1_76BE3743B42F1B89_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C111959D3BB5616(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B4B0859209F16852_METHOD_1_3C111959D3BB5616_OFFSET))(this, a1);
	}

	::System::Void Method_1_9AB045C54EC604F2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B4B0859209F16852_METHOD_1_9AB045C54EC604F2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8EA3DD3D2884C0BF(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_B4B0859209F16852_METHOD_1_8EA3DD3D2884C0BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C476E7FDD0A7AA1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B4B0859209F16852_METHOD_1_0C476E7FDD0A7AA1_OFFSET))(this, a1);
	}

	::System::Void Method_1_56FB8E42255FAC9B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B4B0859209F16852_METHOD_1_56FB8E42255FAC9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_930073A6194C4594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4B0859209F16852_METHOD_1_930073A6194C4594_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_FEDE09C198114DBE()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4B0859209F16852_METHOD_1_FEDE09C198114DBE_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FA235D967ABB4798_Struct_2_AD9C7534A8CF01E1_1.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_82358141EE0289ED.h"

namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class CharacterModelScaleEventParam; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FA235D967ABB4798_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB525150)
#define CLASS_2_FA235D967ABB4798_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB525750)
#define CLASS_2_FA235D967ABB4798_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB5257C0)
#define CLASS_2_FA235D967ABB4798_METHOD_2_2F4D11C084A27447_OFFSET UNITYSDK_OFFSET(0xB5251D0)
#define CLASS_2_FA235D967ABB4798_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xB524F90)
#define CLASS_2_FA235D967ABB4798_METHOD_2_68A2CA32DC720C44_OFFSET UNITYSDK_OFFSET(0xB525820)
#define CLASS_2_FA235D967ABB4798_METHOD_2_924C62BE8591D2FD_OFFSET UNITYSDK_OFFSET(0xB525280)
#define CLASS_2_FA235D967ABB4798_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xB525930)
#define CLASS_2_FA235D967ABB4798_TICK_OFFSET UNITYSDK_OFFSET(0xB5256E0)
#define CLASS_2_FA235D967ABB4798__CTOR_OFFSET UNITYSDK_OFFSET(0xB525940)

inline static constexpr unsigned int Class_2_FA235D967ABB4798_TypeDefinitionIndex = 56962;

class Class_2_FA235D967ABB4798 : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* POPHIILFKAA; // 0x0
	::RPG::GameCore::CharacterModelScaleEventParam* GJMEBCMNPMK; // 0x18
	::UnityEngine::Transform* DMOMBMJBBNP; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* AJBAMNPFGIB; // 0x28
	::RPG::GameCore::GameEntity* DPDJLGOIALF; // 0x30
	::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x38
	::Class_2_FA235D967ABB4798_Struct_2_AD9C7534A8CF01E1_1 ENHJFLBIELP; // 0x40
	::System::Boolean IKCMMJAPKPC; // 0x44
	::System::Boolean MNMOPFJLDCJ; // 0x45

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA235D967ABB4798__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA235D967ABB4798_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA235D967ABB4798_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2F4D11C084A27447(::Struct_2_82358141EE0289ED& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_82358141EE0289ED&))((::PBYTE)hIl2Cpp + CLASS_2_FA235D967ABB4798_METHOD_2_2F4D11C084A27447_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FA235D967ABB4798_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FA235D967ABB4798_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA235D967ABB4798_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_924C62BE8591D2FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA235D967ABB4798_METHOD_2_924C62BE8591D2FD_OFFSET))(this);
	}

	::System::Single Method_2_68A2CA32DC720C44()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA235D967ABB4798_METHOD_2_68A2CA32DC720C44_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA235D967ABB4798_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}
};

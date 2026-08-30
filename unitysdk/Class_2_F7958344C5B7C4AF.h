#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F7958344C5B7C4AF_Struct_2_AD9C7534A8CF01E1_1.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_82358141EE0289ED.h"

namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class CharacterModelScaleEventParam; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F7958344C5B7C4AF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB687EC0)
#define CLASS_2_F7958344C5B7C4AF_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB6884F0)
#define CLASS_2_F7958344C5B7C4AF_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB688560)
#define CLASS_2_F7958344C5B7C4AF_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xB687D00)
#define CLASS_2_F7958344C5B7C4AF_METHOD_2_68A2CA32DC720C44_OFFSET UNITYSDK_OFFSET(0xB6885C0)
#define CLASS_2_F7958344C5B7C4AF_METHOD_2_84415F48959FD9A3_OFFSET UNITYSDK_OFFSET(0xB687F40)
#define CLASS_2_F7958344C5B7C4AF_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xB6886D0)
#define CLASS_2_F7958344C5B7C4AF_METHOD_2_BF9BB9E2BBF3B6F4_OFFSET UNITYSDK_OFFSET(0xB687FF0)
#define CLASS_2_F7958344C5B7C4AF_TICK_OFFSET UNITYSDK_OFFSET(0xB688480)
#define CLASS_2_F7958344C5B7C4AF__CTOR_OFFSET UNITYSDK_OFFSET(0xB6886E0)

inline static constexpr unsigned int Class_2_F7958344C5B7C4AF_TypeDefinitionIndex = 57129;

class Class_2_F7958344C5B7C4AF : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* POPHIILFKAA; // 0x0
	::RPG::GameCore::CharacterModelScaleEventParam* GJMEBCMNPMK; // 0x18
	::RPG::GameCore::GameEntity* DPDJLGOIALF; // 0x20
	::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x28
	::UnityEngine::Transform* DMOMBMJBBNP; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* AJBAMNPFGIB; // 0x38
	::Class_2_F7958344C5B7C4AF_Struct_2_AD9C7534A8CF01E1_1 ENHJFLBIELP; // 0x40
	::System::Boolean MNMOPFJLDCJ; // 0x44
	::System::Boolean IKCMMJAPKPC; // 0x45

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7958344C5B7C4AF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7958344C5B7C4AF_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7958344C5B7C4AF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_84415F48959FD9A3(::Struct_2_82358141EE0289ED& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_82358141EE0289ED&))((::PBYTE)hIl2Cpp + CLASS_2_F7958344C5B7C4AF_METHOD_2_84415F48959FD9A3_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F7958344C5B7C4AF_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F7958344C5B7C4AF_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7958344C5B7C4AF_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_BF9BB9E2BBF3B6F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7958344C5B7C4AF_METHOD_2_BF9BB9E2BBF3B6F4_OFFSET))(this);
	}

	::System::Single Method_2_68A2CA32DC720C44()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7958344C5B7C4AF_METHOD_2_68A2CA32DC720C44_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7958344C5B7C4AF_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}
};

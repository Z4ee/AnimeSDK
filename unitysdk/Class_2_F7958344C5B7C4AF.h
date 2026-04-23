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

#define CLASS_2_F7958344C5B7C4AF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12905E90)
#define CLASS_2_F7958344C5B7C4AF_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12906490)
#define CLASS_2_F7958344C5B7C4AF_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x12906500)
#define CLASS_2_F7958344C5B7C4AF_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x12905D90)
#define CLASS_2_F7958344C5B7C4AF_METHOD_2_68A2CA32DC720C44_OFFSET UNITYSDK_OFFSET(0x12906560)
#define CLASS_2_F7958344C5B7C4AF_METHOD_2_84415F48959FD9A3_OFFSET UNITYSDK_OFFSET(0x12905F10)
#define CLASS_2_F7958344C5B7C4AF_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x12906670)
#define CLASS_2_F7958344C5B7C4AF_METHOD_2_BF9BB9E2BBF3B6F4_OFFSET UNITYSDK_OFFSET(0x12905FC0)
#define CLASS_2_F7958344C5B7C4AF_TICK_OFFSET UNITYSDK_OFFSET(0x12906420)
#define CLASS_2_F7958344C5B7C4AF__CTOR_OFFSET UNITYSDK_OFFSET(0x12906680)
#define CLASS_2_F7958344C5B7C4AF___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x129066B0)
#define CLASS_2_F7958344C5B7C4AF___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x129066A0)

inline static constexpr unsigned int Class_2_F7958344C5B7C4AF_TypeDefinitionIndex = 52493;

class Class_2_F7958344C5B7C4AF : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::CharacterModelComponent* Field_2_1; // 0x18
	::RPG::GameCore::CharacterModelScaleEventParam* Field_2_8; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::UnityEngine::Transform* Field_2_3; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* Field_2_7; // 0x38
	::Class_2_F7958344C5B7C4AF_Struct_2_AD9C7534A8CF01E1_1 Field_2_4; // 0x40
	::System::Boolean Field_2_5; // 0x44
	::System::Boolean Field_2_6; // 0x45

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

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F7958344C5B7C4AF___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F7958344C5B7C4AF___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}
};

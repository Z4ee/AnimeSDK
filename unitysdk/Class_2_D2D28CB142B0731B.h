#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BattleAvatarUltraSkillEnergyFlyEffectType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_61DEFB22BCDE7465;
class Class_1_B18A907A8E4C5C9C;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D2D28CB142B0731B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x146962B0)
#define CLASS_2_D2D28CB142B0731B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x14696380)
#define CLASS_2_D2D28CB142B0731B_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x14695CC0)
#define CLASS_2_D2D28CB142B0731B_METHOD_2_5603548911B89039_OFFSET UNITYSDK_OFFSET(0x14696140)
#define CLASS_2_D2D28CB142B0731B_METHOD_2_6E9680175C0D6857_OFFSET UNITYSDK_OFFSET(0x14695C40)
#define CLASS_2_D2D28CB142B0731B_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x146959C0)
#define CLASS_2_D2D28CB142B0731B_METHOD_2_A0BF5729B5768209_OFFSET UNITYSDK_OFFSET(0x14695E00)
#define CLASS_2_D2D28CB142B0731B_METHOD_2_E8F71BC8471C5469_OFFSET UNITYSDK_OFFSET(0x14695A20)
#define CLASS_2_D2D28CB142B0731B_METHOD_2_F26CE4FC4BEDB222_OFFSET UNITYSDK_OFFSET(0x14695AA0)
#define CLASS_2_D2D28CB142B0731B_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x146961F0)
#define CLASS_2_D2D28CB142B0731B_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x14695BA0)
#define CLASS_2_D2D28CB142B0731B_ONRETURN_OFFSET UNITYSDK_OFFSET(0x14695BF0)
#define CLASS_2_D2D28CB142B0731B__CTOR_OFFSET UNITYSDK_OFFSET(0x14696420)
#define CLASS_2_D2D28CB142B0731B__ONBIND_OFFSET UNITYSDK_OFFSET(0x14695970)
#define CLASS_2_D2D28CB142B0731B__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x14695B50)

inline static constexpr unsigned int Class_2_D2D28CB142B0731B_TypeDefinitionIndex = 68253;

class Class_2_D2D28CB142B0731B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_1_B18A907A8E4C5C9C* Field_2_1; // 0x60
	::UnityEngine::Transform* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_3; // 0x70
	::RPG::GameCore::GameEntity* Field_2_4; // 0x78
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType, ::System::String*>* Field_2_5; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_E8F71BC8471C5469()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B_METHOD_2_E8F71BC8471C5469_OFFSET))(this);
	}

	::System::Void Method_2_F26CE4FC4BEDB222(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B_METHOD_2_F26CE4FC4BEDB222_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B__ONDISPOSE_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_6E9680175C0D6857(::Class_1_61DEFB22BCDE7465* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_61DEFB22BCDE7465*))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B_METHOD_2_6E9680175C0D6857_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void Method_2_A0BF5729B5768209(::Class_1_61DEFB22BCDE7465* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_61DEFB22BCDE7465*))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B_METHOD_2_A0BF5729B5768209_OFFSET))(this, a1);
	}

	::System::String* Method_2_5603548911B89039(::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B_METHOD_2_5603548911B89039_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

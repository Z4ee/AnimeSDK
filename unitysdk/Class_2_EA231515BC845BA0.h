#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_2AA304B71C6E8B6D;
class Class_1_95EEF67A826E14FF;
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_EA231515BC845BA0_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x16776470)
#define CLASS_2_EA231515BC845BA0_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x167760D0)
#define CLASS_2_EA231515BC845BA0_METHOD_2_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0x1684FE10)
#define CLASS_2_EA231515BC845BA0_METHOD_2_33F9F106A44C0A33_OFFSET UNITYSDK_OFFSET(0x16776180)
#define CLASS_2_EA231515BC845BA0_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1684FCC0)
#define CLASS_2_EA231515BC845BA0_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x1684FD10)
#define CLASS_2_EA231515BC845BA0_METHOD_2_7C7377C794E8973C_OFFSET UNITYSDK_OFFSET(0x16850110)
#define CLASS_2_EA231515BC845BA0_METHOD_2_892F9DA89D0163F2_OFFSET UNITYSDK_OFFSET(0x1684FE90)
#define CLASS_2_EA231515BC845BA0_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x1684FAE0)
#define CLASS_2_EA231515BC845BA0_METHOD_2_9ABB05A86049A37F_OFFSET UNITYSDK_OFFSET(0x16775FA0)
#define CLASS_2_EA231515BC845BA0_METHOD_2_9E576C1940EC1162_OFFSET UNITYSDK_OFFSET(0x16776490)
#define CLASS_2_EA231515BC845BA0_METHOD_2_A552F4F9172D480A_OFFSET UNITYSDK_OFFSET(0x167762B0)
#define CLASS_2_EA231515BC845BA0_METHOD_2_CF71A7F45118B88C_OFFSET UNITYSDK_OFFSET(0x16775E90)
#define CLASS_2_EA231515BC845BA0_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x16776350)
#define CLASS_2_EA231515BC845BA0_METHOD_2_E41B6A823556FEEA_1_OFFSET UNITYSDK_OFFSET(0x1684FB50)
#define CLASS_2_EA231515BC845BA0_METHOD_2_E41B6A823556FEEA_2_OFFSET UNITYSDK_OFFSET(0x16850180)
#define CLASS_2_EA231515BC845BA0_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x16776250)
#define CLASS_2_EA231515BC845BA0_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x16776130)
#define CLASS_2_EA231515BC845BA0_SET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x16776480)
#define CLASS_2_EA231515BC845BA0__CTOR_OFFSET UNITYSDK_OFFSET(0x168501E0)
#define CLASS_2_EA231515BC845BA0__ONBIND_OFFSET UNITYSDK_OFFSET(0x16775E20)
#define CLASS_2_EA231515BC845BA0__ONTICK_OFFSET UNITYSDK_OFFSET(0x1684FBA0)

inline static constexpr unsigned int Class_2_EA231515BC845BA0_TypeDefinitionIndex = 68307;

class Class_2_EA231515BC845BA0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::CharacterVisibleComponent* Field_2_0; // 0x60
	::UnityEngine::RectTransform* Field_2_1; // 0x68
	::RPG::Client::UIFollow3DTarget* Field_2_2; // 0x70
	::RPG::GameCore::GameEntity* Field_2_3; // 0x78
	::System::Boolean Field_2_4; // 0x80
	::System::Boolean Field_2_5; // 0x81
	::System::Boolean Field_2_6; // 0x82
	::System::Single Field_2_7; // 0x84
	::System::Single Field_2_8; // 0x88
	::RPG::GameCore::FloatMessageType _MessageType_k__BackingField; // 0x8C
	::System::Single Field_2_10; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CF71A7F45118B88C(::RPG::GameCore::GameEntity* a1, ::Class_1_2AA304B71C6E8B6D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_2AA304B71C6E8B6D*))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_CF71A7F45118B88C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9ABB05A86049A37F(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_9ABB05A86049A37F_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_95EEF67A826E14FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_33F9F106A44C0A33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_33F9F106A44C0A33_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Boolean Method_2_A552F4F9172D480A(::RPG::GameCore::FloatMessageType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_A552F4F9172D480A_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::RPG::GameCore::FloatMessageType get_MessageType()
	{
		return ((::RPG::GameCore::FloatMessageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_GET_MESSAGETYPE_OFFSET))(this);
	}

	::System::Void set_MessageType(::RPG::GameCore::FloatMessageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_SET_MESSAGETYPE_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_9E576C1940EC1162(::RPG::GameCore::FloatMessageType a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_9E576C1940EC1162_OFFSET))(a1);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_E41B6A823556FEEA_1_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0__ONTICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_2E47F09A457E7E05(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_2E47F09A457E7E05_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_892F9DA89D0163F2(::RPG::GameCore::GameEntity* a1, ::Class_1_2AA304B71C6E8B6D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_2AA304B71C6E8B6D*))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_892F9DA89D0163F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7C7377C794E8973C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_7C7377C794E8973C_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_E41B6A823556FEEA_2_OFFSET))(this);
	}
};

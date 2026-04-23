#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_69D7459C7F6EC835;
class Class_1_95EEF67A826E14FF;
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_EA231515BC845BA0_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x9291180)
#define CLASS_2_EA231515BC845BA0_METHOD_2_01B78B6B0E7CB7E5_OFFSET UNITYSDK_OFFSET(0x9290EA0)
#define CLASS_2_EA231515BC845BA0_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x9291060)
#define CLASS_2_EA231515BC845BA0_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x9290DF0)
#define CLASS_2_EA231515BC845BA0_METHOD_2_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0x9291520)
#define CLASS_2_EA231515BC845BA0_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x92913E0)
#define CLASS_2_EA231515BC845BA0_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x92919F0)
#define CLASS_2_EA231515BC845BA0_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x9291430)
#define CLASS_2_EA231515BC845BA0_METHOD_2_775B6D644F07B554_1_OFFSET UNITYSDK_OFFSET(0x9291270)
#define CLASS_2_EA231515BC845BA0_METHOD_2_775B6D644F07B554_2_OFFSET UNITYSDK_OFFSET(0x9291890)
#define CLASS_2_EA231515BC845BA0_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x9290F60)
#define CLASS_2_EA231515BC845BA0_METHOD_2_7C7377C794E8973C_OFFSET UNITYSDK_OFFSET(0x9291820)
#define CLASS_2_EA231515BC845BA0_METHOD_2_892F9DA89D0163F2_OFFSET UNITYSDK_OFFSET(0x92915A0)
#define CLASS_2_EA231515BC845BA0_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x9291200)
#define CLASS_2_EA231515BC845BA0_METHOD_2_95CC87529CF8C38A_OFFSET UNITYSDK_OFFSET(0x9290CD0)
#define CLASS_2_EA231515BC845BA0_METHOD_2_9E576C1940EC1162_OFFSET UNITYSDK_OFFSET(0x92911A0)
#define CLASS_2_EA231515BC845BA0_METHOD_2_A552F4F9172D480A_OFFSET UNITYSDK_OFFSET(0x9290FC0)
#define CLASS_2_EA231515BC845BA0_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x9291980)
#define CLASS_2_EA231515BC845BA0_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x9290E50)
#define CLASS_2_EA231515BC845BA0_METHOD_2_F1ED73672864E72F_OFFSET UNITYSDK_OFFSET(0x9290BC0)
#define CLASS_2_EA231515BC845BA0_SET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x9291190)
#define CLASS_2_EA231515BC845BA0__CTOR_OFFSET UNITYSDK_OFFSET(0x92918F0)
#define CLASS_2_EA231515BC845BA0__ONBIND_OFFSET UNITYSDK_OFFSET(0x9290B50)
#define CLASS_2_EA231515BC845BA0__ONTICK_OFFSET UNITYSDK_OFFSET(0x92912C0)
#define CLASS_2_EA231515BC845BA0___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x9291920)
#define CLASS_2_EA231515BC845BA0___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x9291A50)

inline static constexpr unsigned int Class_2_EA231515BC845BA0_TypeDefinitionIndex = 65932;

class Class_2_EA231515BC845BA0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::CharacterVisibleComponent* Field_2_4; // 0x60
	::RPG::Client::UIFollow3DTarget* Field_2_0; // 0x68
	::RPG::GameCore::GameEntity* Field_2_3; // 0x70
	::UnityEngine::RectTransform* Field_2_1; // 0x78
	::System::Single Field_2_8; // 0x80
	::RPG::GameCore::FloatMessageType _MessageType_k__BackingField; // 0x84
	::System::Single Field_2_9; // 0x88
	::System::Single Field_2_10; // 0x8C
	::System::Boolean Field_2_7; // 0x90
	::System::Boolean Field_2_5; // 0x91
	::System::Boolean Field_2_6; // 0x92

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_F1ED73672864E72F(::RPG::GameCore::GameEntity* a1, ::Class_1_69D7459C7F6EC835* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_69D7459C7F6EC835*))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_F1ED73672864E72F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_95CC87529CF8C38A(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_95CC87529CF8C38A_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_95EEF67A826E14FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_01B78B6B0E7CB7E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_01B78B6B0E7CB7E5_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Boolean Method_2_A552F4F9172D480A(::RPG::GameCore::FloatMessageType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_A552F4F9172D480A_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::RPG::GameCore::FloatMessageType get_MessageType()
	{
		return ((::RPG::GameCore::FloatMessageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_GET_MESSAGETYPE_OFFSET))(this);
	}

	::System::Void set_MessageType(::RPG::GameCore::FloatMessageType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_SET_MESSAGETYPE_OFFSET))(this, value);
	}

	static ::System::String* Method_2_9E576C1940EC1162(::RPG::GameCore::FloatMessageType a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_9E576C1940EC1162_OFFSET))(a1);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_775B6D644F07B554_1_OFFSET))(this);
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

	::System::Void Method_2_892F9DA89D0163F2(::RPG::GameCore::GameEntity* a1, ::Class_1_69D7459C7F6EC835* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_69D7459C7F6EC835*))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_892F9DA89D0163F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7C7377C794E8973C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_7C7377C794E8973C_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_775B6D644F07B554_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EA231515BC845BA0___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}
};

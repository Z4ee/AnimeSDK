#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitEffectConfig; }
namespace RPG::Client { class PlanetFesPileToast; }
namespace RPG::Client { class PlanetFesToastItem; }
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace XLua { class LuaTable; }

#define CLASS_2_377FC780C60D5111_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x10941BF0)
#define CLASS_2_377FC780C60D5111_METHOD_2_1B8A7D152370AD2C_OFFSET UNITYSDK_OFFSET(0x10941AD0)
#define CLASS_2_377FC780C60D5111_METHOD_2_375AA4A361D732F3_OFFSET UNITYSDK_OFFSET(0x10941FA0)
#define CLASS_2_377FC780C60D5111_METHOD_2_4FAC1D5038CE3FDC_OFFSET UNITYSDK_OFFSET(0x10941F50)
#define CLASS_2_377FC780C60D5111_METHOD_2_63470AE8D1FE95CC_OFFSET UNITYSDK_OFFSET(0x10942240)
#define CLASS_2_377FC780C60D5111_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x109420F0)
#define CLASS_2_377FC780C60D5111_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x109419B0)
#define CLASS_2_377FC780C60D5111_METHOD_2_B214F97C7AAA732F_OFFSET UNITYSDK_OFFSET(0x10941D50)
#define CLASS_2_377FC780C60D5111_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x10941C40)
#define CLASS_2_377FC780C60D5111_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x10942530)
#define CLASS_2_377FC780C60D5111_METHOD_2_D148B5D9B2EC21BB_OFFSET UNITYSDK_OFFSET(0x10941A00)
#define CLASS_2_377FC780C60D5111_METHOD_2_D63735FB49794316_OFFSET UNITYSDK_OFFSET(0x109421C0)
#define CLASS_2_377FC780C60D5111_METHOD_2_E5D433C7A574E387_OFFSET UNITYSDK_OFFSET(0x10941E00)
#define CLASS_2_377FC780C60D5111_METHOD_2_EBAE36A6264F45D6_OFFSET UNITYSDK_OFFSET(0x10941CC0)
#define CLASS_2_377FC780C60D5111_METHOD_2_EC6F2129CCB4BAB4_OFFSET UNITYSDK_OFFSET(0x10941790)
#define CLASS_2_377FC780C60D5111__CTOR_OFFSET UNITYSDK_OFFSET(0x109423F0)
#define CLASS_2_377FC780C60D5111__ONBIND_OFFSET UNITYSDK_OFFSET(0x10940C10)
#define CLASS_2_377FC780C60D5111___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x109424D0)
#define CLASS_2_377FC780C60D5111___ONBIND_B__1_0_OFFSET UNITYSDK_OFFSET(0x10942460)
#define CLASS_2_377FC780C60D5111___ONBIND_B__1_1_OFFSET UNITYSDK_OFFSET(0x10942480)

inline static constexpr unsigned int Class_2_377FC780C60D5111_TypeDefinitionIndex = 59206;

class Class_2_377FC780C60D5111 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_22 = 0x4; // 0x0
	::UnityEngine::UI::Text* Field_2_11; // 0x60
	::System::String* Field_2_24; // 0x68
	::RPG::Client::SPProgress* Field_2_14; // 0x70
	::UnityEngine::UI::Text* Field_2_3; // 0x78
	::UnityEngine::Animation* Field_2_5; // 0x80
	::UnityEngine::UI::Text* Field_2_4; // 0x88
	::UnityEngine::UI::Image* Field_2_2; // 0x90
	::RPG::Client::PlanetFesPileToast* Field_2_16; // 0x98
	::UnityEngine::UI::Text* Field_2_9; // 0xA0
	::UnityEngine::Transform* Field_2_10; // 0xA8
	::RPG::GameCore::BattleGridFightTeamTraitData* Field_2_18; // 0xB0
	::UnityEngine::UI::Text* Field_2_8; // 0xB8
	::RPG::Client::AnimatorButton* Field_2_1; // 0xC0
	::UnityEngine::UI::Text* Field_2_6; // 0xC8
	::System::Action_1<::System::Object*>* Field_2_23; // 0xD0
	::UnityEngine::Transform* Field_2_12; // 0xD8
	::RPG::Client::PlanetFesPileToast* Field_2_17; // 0xE0
	::RPG::Client::GridFightTrait* Field_2_19; // 0xE8
	::RPG::Client::GridFightTraitEffectConfig* Field_2_21; // 0xF0
	::UnityEngine::Animation* Field_2_15; // 0xF8
	::UnityEngine::Transform* Field_2_13; // 0x100
	::UnityEngine::Transform* Field_2_7; // 0x108
	::RPG::Client::GridFightTraitConfigBase* Field_2_20; // 0x110
	::System::String* Field_2_25; // 0x118

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_EC6F2129CCB4BAB4(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111_METHOD_2_EC6F2129CCB4BAB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_D148B5D9B2EC21BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111_METHOD_2_D148B5D9B2EC21BB_OFFSET))(this);
	}

	::System::Void Method_2_1B8A7D152370AD2C(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111_METHOD_2_1B8A7D152370AD2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_EBAE36A6264F45D6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111_METHOD_2_EBAE36A6264F45D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_B214F97C7AAA732F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111_METHOD_2_B214F97C7AAA732F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E5D433C7A574E387(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111_METHOD_2_E5D433C7A574E387_OFFSET))(this, a1);
	}

	::System::Void Method_2_4FAC1D5038CE3FDC(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111_METHOD_2_4FAC1D5038CE3FDC_OFFSET))(this, a1);
	}

	::System::Void Method_2_375AA4A361D732F3(::RPG::Client::TextID a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111_METHOD_2_375AA4A361D732F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_D63735FB49794316(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111_METHOD_2_D63735FB49794316_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_63470AE8D1FE95CC(::XLua::LuaTable* a1, ::RPG::Client::PlanetFesToastItem* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111_METHOD_2_63470AE8D1FE95CC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __OnBind_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111___ONBIND_B__1_0_OFFSET))(this);
	}

	::System::Void __OnBind_b__1_1(::UnityEngine::GameObject* _)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111___ONBIND_B__1_1_OFFSET))(this, _);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}
};

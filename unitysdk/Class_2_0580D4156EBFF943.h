#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_3FF51CE8B91EFA1B;
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

#define CLASS_2_0580D4156EBFF943_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x188F8C40)
#define CLASS_2_0580D4156EBFF943_METHOD_2_0A7D2AAE8FDADFC4_OFFSET UNITYSDK_OFFSET(0x188F8F70)
#define CLASS_2_0580D4156EBFF943_METHOD_2_1A8781DDDA9A3E25_OFFSET UNITYSDK_OFFSET(0x188F8D10)
#define CLASS_2_0580D4156EBFF943_METHOD_2_1BD63EC50F3374F5_OFFSET UNITYSDK_OFFSET(0x188F8B20)
#define CLASS_2_0580D4156EBFF943_METHOD_2_4FAC1D5038CE3FDC_OFFSET UNITYSDK_OFFSET(0x188F8F20)
#define CLASS_2_0580D4156EBFF943_METHOD_2_51365A33D4539460_OFFSET UNITYSDK_OFFSET(0x188F9190)
#define CLASS_2_0580D4156EBFF943_METHOD_2_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x188F8E40)
#define CLASS_2_0580D4156EBFF943_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x188F9040)
#define CLASS_2_0580D4156EBFF943_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x188F8990)
#define CLASS_2_0580D4156EBFF943_METHOD_2_85716B31A539E826_OFFSET UNITYSDK_OFFSET(0x188F8620)
#define CLASS_2_0580D4156EBFF943_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x188F8C90)
#define CLASS_2_0580D4156EBFF943_METHOD_2_B4FEB1F5D516A801_OFFSET UNITYSDK_OFFSET(0x188F89E0)
#define CLASS_2_0580D4156EBFF943_METHOD_2_D54ACFE24264490F_OFFSET UNITYSDK_OFFSET(0x188F8DA0)
#define CLASS_2_0580D4156EBFF943_METHOD_2_D63735FB49794316_OFFSET UNITYSDK_OFFSET(0x188F9110)
#define CLASS_2_0580D4156EBFF943__CTOR_OFFSET UNITYSDK_OFFSET(0x188F93D0)
#define CLASS_2_0580D4156EBFF943__ONBIND_OFFSET UNITYSDK_OFFSET(0x188F7D90)
#define CLASS_2_0580D4156EBFF943___ONBIND_B__1_0_OFFSET UNITYSDK_OFFSET(0x188F9440)
#define CLASS_2_0580D4156EBFF943___ONBIND_B__1_1_OFFSET UNITYSDK_OFFSET(0x188F9460)
#define CLASS_2_0580D4156EBFF943___ONBIND_B__1_2_OFFSET UNITYSDK_OFFSET(0x188F94B0)

inline static constexpr unsigned int Class_2_0580D4156EBFF943_TypeDefinitionIndex = 72219;

class Class_2_0580D4156EBFF943 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::Int32 MOIKPPOCGOO = 0x4; // 0x0
	::UnityEngine::UI::Text* JBMFLIDFHCC; // 0x60
	::RPG::Client::GridFightTraitConfigBase* AJDMLJMMPMJ; // 0x68
	::Class_1_3FF51CE8B91EFA1B* CDMFHPLLFEC; // 0x70
	::RPG::Client::GridFightTraitEffectConfig* HECGJKBHOMI; // 0x78
	::UnityEngine::Transform* AMAEADENAGL; // 0x80
	::RPG::Client::PlanetFesPileToast* CCGOIGGGPBP; // 0x88
	::UnityEngine::Animation* HBEEFKHLPGJ; // 0x90
	::UnityEngine::Transform* EOHPFMPALCM; // 0x98
	::RPG::Client::AnimatorButton* NHNPPHCCPGA; // 0xA0
	::System::String* CGNGHKIIGCM; // 0xA8
	::UnityEngine::Animation* CKKPBOJLMGN; // 0xB0
	::UnityEngine::UI::Text* OMFNCCFLLCJ; // 0xB8
	::RPG::Client::SPProgress* MFABGPCLCEE; // 0xC0
	::UnityEngine::UI::Text* BMNOOHFKLDB; // 0xC8
	::UnityEngine::UI::Image* LPMHMLOGPPN; // 0xD0
	::UnityEngine::UI::Text* HHCKFCILELK; // 0xD8
	::RPG::GameCore::BattleGridFightTeamTraitData* NHDBMHJLKNF; // 0xE0
	::RPG::Client::GridFightTrait* ENFAMOIAMGL; // 0xE8
	::RPG::Client::PlanetFesPileToast* FBBAMPDHMMJ; // 0xF0
	::UnityEngine::UI::Text* GKAOKENILKM; // 0xF8
	::UnityEngine::Transform* IPBNIJLCAHL; // 0x100
	::System::String* IIFENECAOBG; // 0x108
	::System::Action_1<::System::Object*>* AMIEOPJOEIJ; // 0x110
	::UnityEngine::Transform* GBGMCPAPOOH; // 0x118
	::UnityEngine::UI::Text* KPICPMEANJJ; // 0x120

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_85716B31A539E826(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_85716B31A539E826_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_B4FEB1F5D516A801()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_B4FEB1F5D516A801_OFFSET))(this);
	}

	::System::Void Method_2_1BD63EC50F3374F5(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_1BD63EC50F3374F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_1A8781DDDA9A3E25(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_1A8781DDDA9A3E25_OFFSET))(this, a1);
	}

	::System::Void Method_2_D54ACFE24264490F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_D54ACFE24264490F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_4FAC1D5038CE3FDC(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_4FAC1D5038CE3FDC_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A7D2AAE8FDADFC4(::RPG::Client::TextID a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_0A7D2AAE8FDADFC4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_D63735FB49794316(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_D63735FB49794316_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_51365A33D4539460(::XLua::LuaTable* a1, ::RPG::Client::PlanetFesToastItem* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_51365A33D4539460_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __OnBind_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943___ONBIND_B__1_0_OFFSET))(this);
	}

	::System::Void __OnBind_b__1_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943___ONBIND_B__1_1_OFFSET))(this, a1);
	}

	::System::Void __OnBind_b__1_2(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943___ONBIND_B__1_2_OFFSET))(this, a1);
	}
};

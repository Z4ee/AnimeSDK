#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget_HP.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget_RogueHP_Struct_2_680BF1744D60EED9_4.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"

class Class_1_2BF31F3092BDFD9E;
namespace RPG::Client { class WolfBroGunPlayTarget_Group; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_GET_ROGUEINDEX_OFFSET UNITYSDK_OFFSET(0xB4DCEF0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_INIT_OFFSET UNITYSDK_OFFSET(0xB4DBE70)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB4DCE90)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_ONLOSSHP_OFFSET UNITYSDK_OFFSET(0xB4DCA90)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_SETUPCOINMATERIAL_OFFSET UNITYSDK_OFFSET(0xB4DC090)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_SETUPMIRACLEMATERIAL_OFFSET UNITYSDK_OFFSET(0xB4DC450)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_SET_ROGUEINDEX_OFFSET UNITYSDK_OFFSET(0xB4DCF00)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_SHOWSCORE_OFFSET UNITYSDK_OFFSET(0xB4DCB70)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4DD120)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP__CTOR_OFFSET UNITYSDK_OFFSET(0xB4DCF10)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB4DD230)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP___IFIXBASEPROXY_ONLOSSHP_OFFSET UNITYSDK_OFFSET(0xB4DD2D0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP___IFIXBASEPROXY_SHOWSCORE_OFFSET UNITYSDK_OFFSET(0xB4DD310)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_RogueHP_TypeDefinitionIndex = 63374;

	class WolfBroGunPlayTarget_RogueHP : public ::RPG::Client::WolfBroGunPlayTarget_HP
	{
	public:
		static ::System::Int32* StaticGet_Field_7_11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_RogueHP_TypeDefinitionIndex)->GetStaticField(0xD690);
		}
		static ::System::Int32* StaticGet_Field_7_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_RogueHP_TypeDefinitionIndex)->GetStaticField(0xD694);
		}
		static ::System::Int32* StaticGet_Field_7_13()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_RogueHP_TypeDefinitionIndex)->GetStaticField(0xD698);
		}
		static ::System::Int32* StaticGet_Field_7_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_RogueHP_TypeDefinitionIndex)->GetStaticField(0xD69C);
		}
		static ::System::Int32* StaticGet_Field_7_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_RogueHP_TypeDefinitionIndex)->GetStaticField(0xD6A0);
		}
		static ::System::Int32* StaticGet_Field_7_10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_RogueHP_TypeDefinitionIndex)->GetStaticField(0xD6A4);
		}
		static ::System::Int32* StaticGet_Field_7_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_RogueHP_TypeDefinitionIndex)->GetStaticField(0xD6A8);
		}
		static ::System::Int32* StaticGet_Field_7_12()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_RogueHP_TypeDefinitionIndex)->GetStaticField(0xD6AC);
		}
		static ::System::Int32* StaticGet_Field_7_14()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_RogueHP_TypeDefinitionIndex)->GetStaticField(0xD6B0);
		}
		static ::System::Int32* StaticGet_Field_7_15()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_RogueHP_TypeDefinitionIndex)->GetStaticField(0xD6B4);
		}
		static ::System::Int32* StaticGet_Field_7_9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_RogueHP_TypeDefinitionIndex)->GetStaticField(0xD6B8);
		}
		static ::System::Int32* StaticGet_Field_7_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_RogueHP_TypeDefinitionIndex)->GetStaticField(0xD6BC);
		}
		::UnityEngine::Renderer* Renderer; // 0xF8
		::System::Int32 _RogueIndex_k__BackingField; // 0x100
		::UnityEngine::Texture* Field_7_2; // 0x108
		::UnityEngine::MaterialPropertyBlock* Field_7_3; // 0x110
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMiracleCategory, ::RPG::Client::WolfBroGunPlayTarget_RogueHP_Struct_2_680BF1744D60EED9_4>* Field_7_16; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP__CCTOR_OFFSET))();
		}

		::System::Void Init(::Class_1_2BF31F3092BDFD9E* a1, ::RPG::Client::WolfBroGunPlayTarget_Group* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void SetupCoinMaterial(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_SETUPCOINMATERIAL_OFFSET))(this, a1);
		}

		::System::Void SetupMiracleMaterial(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_SETUPMIRACLEMATERIAL_OFFSET))(this, a1);
		}

		::System::Void OnLossHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_ONLOSSHP_OFFSET))(this);
		}

		::System::Void ShowScore(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_SHOWSCORE_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_ONDESTROY_OFFSET))(this);
		}

		::System::Int32 get_RogueIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_GET_ROGUEINDEX_OFFSET))(this);
		}

		::System::Void set_RogueIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_SET_ROGUEINDEX_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init(::Class_1_2BF31F3092BDFD9E* P0, ::RPG::Client::WolfBroGunPlayTarget_Group* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP___IFIXBASEPROXY_INIT_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnLossHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP___IFIXBASEPROXY_ONLOSSHP_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ShowScore(::System::Single P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP___IFIXBASEPROXY_SHOWSCORE_OFFSET))(this, P0, P1);
		}
	};
}

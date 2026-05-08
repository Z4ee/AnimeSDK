#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ColorHSV.h"
#include "unitysdk/MoleMole/ColorHSV_Struct_2_1C0D1D514F9A1CCA.h"
#include "unitysdk/MoleMole/UIColorTweakerTarget.h"
#include "unitysdk/MoleMole/UIColorTweakerTargetGroup_Struct_2_B6CC7A1324E97FE4.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_GET_LEADERCOLOR_OFFSET UNITYSDK_OFFSET(0x16817640)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16818230)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_METHOD_1_7A0A609FED879DF6_OFFSET UNITYSDK_OFFSET(0x16817B50)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_METHOD_1_B0F2C48B9F11EEB1_OFFSET UNITYSDK_OFFSET(0x16818010)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_METHOD_1_D4E0886303081325_OFFSET UNITYSDK_OFFSET(0x168177C0)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_METHOD_1_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x16818290)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_METHOD_1_EE60F812A0098D6C_OFFSET UNITYSDK_OFFSET(0x16817C00)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP_SET_LEADERCOLOR_OFFSET UNITYSDK_OFFSET(0x16817670)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x16817750)
#define MOLEMOLE_UICOLORTWEAKERTARGETGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x16817740)

namespace MoleMole
{
	inline static constexpr unsigned int UIColorTweakerTargetGroup_TypeDefinitionIndex = 59063;

	class UIColorTweakerTargetGroup : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::MoleMole::UIColorTweakerTargetGroup_Struct_2_B6CC7A1324E97FE4>** StaticGet__cache()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::UIColorTweakerTargetGroup_Struct_2_B6CC7A1324E97FE4>**)Il2CppClass::FromTypeDefinitionIndex(UIColorTweakerTargetGroup_TypeDefinitionIndex)->GetStaticField(0x3ED60);
		}
		::System::String* key; // 0x10
		::Il2CppArray<::MoleMole::UIColorTweakerTarget>* targets; // 0x18
		::MoleMole::ColorHSV _defaultColor; // 0x20
		::MoleMole::ColorHSV_Struct_2_1C0D1D514F9A1CCA _targetOffset; // 0x2C
		::Il2CppArray<::MoleMole::UIColorTweakerTargetGroup_Struct_2_B6CC7A1324E97FE4>* _runtimeTargets; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP__CCTOR_OFFSET))();
		}

		::UnityEngine::Color get_LeaderColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_GET_LEADERCOLOR_OFFSET))(this);
		}

		::System::Void set_LeaderColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_SET_LEADERCOLOR_OFFSET))(this, a1);
		}

		::System::Void Method_1_D4E0886303081325(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_METHOD_1_D4E0886303081325_OFFSET))(this, a1);
		}

		static ::MoleMole::UIColorTweakerTargetGroup_Struct_2_B6CC7A1324E97FE4 Method_1_EE60F812A0098D6C(::MoleMole::UIColorTweakerTarget& a1)
		{
			return ((::MoleMole::UIColorTweakerTargetGroup_Struct_2_B6CC7A1324E97FE4(*)(::MoleMole::UIColorTweakerTarget&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_METHOD_1_EE60F812A0098D6C_OFFSET))(a1);
		}

		::System::Void Method_1_B0F2C48B9F11EEB1(::MoleMole::ColorHSV& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ColorHSV&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_METHOD_1_B0F2C48B9F11EEB1_OFFSET))(this, a1);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_1_DC715239B8B98D9C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_METHOD_1_DC715239B8B98D9C_OFFSET))(this);
		}

		static ::System::Boolean Method_1_7A0A609FED879DF6(::UnityEngine::Color& a1, ::UnityEngine::Color& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOLORTWEAKERTARGETGROUP_METHOD_1_7A0A609FED879DF6_OFFSET))(a1, a2);
		}
	};
}

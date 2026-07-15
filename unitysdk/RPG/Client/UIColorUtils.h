#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTalkColorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class UIColorUtils_HPColorInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_UICOLORUTILS_CHANGEPARTICALSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1721B5A0)
#define RPG_CLIENT_UICOLORUTILS_GETCOLORINROGUETALKTYPE_OFFSET UNITYSDK_OFFSET(0x1721B660)
#define RPG_CLIENT_UICOLORUTILS_GETCOLORWITHORIGINALPHA_OFFSET UNITYSDK_OFFSET(0x1721ADD0)
#define RPG_CLIENT_UICOLORUTILS_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1721ACC0)
#define RPG_CLIENT_UICOLORUTILS_GETHPPERCENTCOLOR_OFFSET UNITYSDK_OFFSET(0x1721AED0)
#define RPG_CLIENT_UICOLORUTILS_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1721AE60)
#define RPG_CLIENT_UICOLORUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1721B780)

namespace RPG::Client
{
	inline static constexpr unsigned int UIColorUtils_TypeDefinitionIndex = 69815;

	class UIColorUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Single>** StaticGet__ShowHPColorMax()
		{
			return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIColorUtils_TypeDefinitionIndex)->GetStaticField(0x26290);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::UIColorUtils_HPColorInfo*>** StaticGet__ShowHPColor()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::UIColorUtils_HPColorInfo*>**)Il2CppClass::FromTypeDefinitionIndex(UIColorUtils_TypeDefinitionIndex)->GetStaticField(0x26298);
		}
		static ::System::String** StaticGet_DEFAULT_COLOR()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIColorUtils_TypeDefinitionIndex)->GetStaticField(0x262A0);
		}
		static ::UnityEngine::Color* StaticGet_Field_1_3()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIColorUtils_TypeDefinitionIndex)->GetStaticField(0x7400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOLORUTILS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Color GetColor(::System::String* a1)
		{
			return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOLORUTILS_GETCOLOR_OFFSET))(a1);
		}

		static ::UnityEngine::Color GetColorWithOriginAlpha(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOLORUTILS_GETCOLORWITHORIGINALPHA_OFFSET))(a1, a2);
		}

		static ::System::String* GetString(::UnityEngine::Color a1)
		{
			return ((::System::String*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOLORUTILS_GETSTRING_OFFSET))(a1);
		}

		static ::RPG::Client::UIColorUtils_HPColorInfo* GetHPPercentColor(::System::Single a1)
		{
			return ((::RPG::Client::UIColorUtils_HPColorInfo*(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOLORUTILS_GETHPPERCENTCOLOR_OFFSET))(a1);
		}

		static ::System::Void ChangeParticalStartColor(::UnityEngine::ParticleSystem* a1, ::UnityEngine::Color a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem*, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOLORUTILS_CHANGEPARTICALSTARTCOLOR_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Color GetColorInRogueTalkType(::RPG::GameCore::RogueTalkColorType a1)
		{
			return ((::UnityEngine::Color(*)(::RPG::GameCore::RogueTalkColorType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOLORUTILS_GETCOLORINROGUETALKTYPE_OFFSET))(a1);
		}
	};
}

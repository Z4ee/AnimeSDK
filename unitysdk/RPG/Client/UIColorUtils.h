#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTalkColorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class UIColorUtils_HPColorInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_UICOLORUTILS_CHANGEPARTICALSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0xB3D3DA0)
#define RPG_CLIENT_UICOLORUTILS_GETCOLORINROGUETALKTYPE_OFFSET UNITYSDK_OFFSET(0xB3D3E60)
#define RPG_CLIENT_UICOLORUTILS_GETCOLORWITHORIGINALPHA_OFFSET UNITYSDK_OFFSET(0xB3D36F0)
#define RPG_CLIENT_UICOLORUTILS_GETCOLOR_OFFSET UNITYSDK_OFFSET(0xB3D35E0)
#define RPG_CLIENT_UICOLORUTILS_GETHPPERCENTCOLOR_OFFSET UNITYSDK_OFFSET(0xB3D37F0)
#define RPG_CLIENT_UICOLORUTILS_GETSTRING_OFFSET UNITYSDK_OFFSET(0xB3D3780)
#define RPG_CLIENT_UICOLORUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3D3F80)

namespace RPG::Client
{
	inline static constexpr unsigned int UIColorUtils_TypeDefinitionIndex = 67374;

	class UIColorUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Single>** StaticGet__ShowHPColorMax()
		{
			return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIColorUtils_TypeDefinitionIndex)->GetStaticField(0x297A0);
		}
		static ::System::String** StaticGet_DEFAULT_COLOR()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIColorUtils_TypeDefinitionIndex)->GetStaticField(0x297A8);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::UIColorUtils_HPColorInfo*>** StaticGet__ShowHPColor()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::UIColorUtils_HPColorInfo*>**)Il2CppClass::FromTypeDefinitionIndex(UIColorUtils_TypeDefinitionIndex)->GetStaticField(0x297B0);
		}
		static ::UnityEngine::Color* StaticGet_Field_1_3()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UIColorUtils_TypeDefinitionIndex)->GetStaticField(0xB0A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOLORUTILS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Color GetColor(::System::String* colorString)
		{
			return ((::UnityEngine::Color(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOLORUTILS_GETCOLOR_OFFSET))(colorString);
		}

		static ::UnityEngine::Color GetColorWithOriginAlpha(::UnityEngine::Color newColor, ::UnityEngine::Color origin)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOLORUTILS_GETCOLORWITHORIGINALPHA_OFFSET))(newColor, origin);
		}

		static ::System::String* GetString(::UnityEngine::Color pColor)
		{
			return ((::System::String*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOLORUTILS_GETSTRING_OFFSET))(pColor);
		}

		static ::RPG::Client::UIColorUtils_HPColorInfo* GetHPPercentColor(::System::Single hpPercent)
		{
			return ((::RPG::Client::UIColorUtils_HPColorInfo*(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOLORUTILS_GETHPPERCENTCOLOR_OFFSET))(hpPercent);
		}

		static ::System::Void ChangeParticalStartColor(::UnityEngine::ParticleSystem* ps, ::UnityEngine::Color min, ::UnityEngine::Color max)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem*, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOLORUTILS_CHANGEPARTICALSTARTCOLOR_OFFSET))(ps, min, max);
		}

		static ::UnityEngine::Color GetColorInRogueTalkType(::RPG::GameCore::RogueTalkColorType colorType)
		{
			return ((::UnityEngine::Color(*)(::RPG::GameCore::RogueTalkColorType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOLORUTILS_GETCOLORINROGUETALKTYPE_OFFSET))(colorType);
		}
	};
}

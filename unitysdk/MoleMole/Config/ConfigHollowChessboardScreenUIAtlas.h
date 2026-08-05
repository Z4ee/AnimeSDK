#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/ProtoScript/ChessUIColor.h"
#include "unitysdk/ProtoScript/ChessUIIconType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ScreenUIAtlasRectData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_TRYGETFONTATLASRECT_OFFSET UNITYSDK_OFFSET(0x14865B30)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_TRYGETFONTBGATLASRECT_OFFSET UNITYSDK_OFFSET(0x14865E10)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_TRYGETICONATLASRECT_OFFSET UNITYSDK_OFFSET(0x14865CA0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0x14865F80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardScreenUIAtlas_TypeDefinitionIndex = 51493;

	class ConfigHollowChessboardScreenUIAtlas : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* BackgroundTexturePath; // 0x58
		::System::String* TextFontTexturePath; // 0x60
		::UnityEngine::Vector2 FontResolution; // 0x68
		::UnityEngine::Vector2 BackgroundResolution; // 0x70
		::MoleMole::Config::ScreenUIAtlasRectData* DefaultAtlasRectData; // 0x78
		::System::Collections::Generic::Dictionary_2<::ProtoScript::ChessUIColor, ::MoleMole::Config::ScreenUIAtlasRectData*>* SkinAtlasRectDict; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetFontAtlasRect(::System::Char key, ::UnityEngine::Vector4& value, ::ProtoScript::ChessUIColor skin)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::UnityEngine::Vector4&, ::ProtoScript::ChessUIColor))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_TRYGETFONTATLASRECT_OFFSET))(this, key, value, skin);
		}

		::System::Boolean TryGetIconAtlasRect(::ProtoScript::ChessUIIconType key, ::UnityEngine::Vector4& value, ::ProtoScript::ChessUIColor skin)
		{
			return ((::System::Boolean(*)(::PVOID, ::ProtoScript::ChessUIIconType, ::UnityEngine::Vector4&, ::ProtoScript::ChessUIColor))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_TRYGETICONATLASRECT_OFFSET))(this, key, value, skin);
		}

		::System::Boolean TryGetFontBGAtlasRect(::System::Int32 key, ::UnityEngine::Vector4& value, ::ProtoScript::ChessUIColor skin)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&, ::ProtoScript::ChessUIColor))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSCREENUIATLAS_TRYGETFONTBGATLASRECT_OFFSET))(this, key, value, skin);
		}
	};
}

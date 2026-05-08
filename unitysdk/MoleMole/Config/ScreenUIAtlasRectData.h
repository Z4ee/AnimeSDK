#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/ChessUIIconType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_SCREENUIATLASRECTDATA_TRYGETFONTATLASRECT_OFFSET UNITYSDK_OFFSET(0x1231B0F0)
#define MOLEMOLE_CONFIG_SCREENUIATLASRECTDATA_TRYGETFONTBGATLASRECT_OFFSET UNITYSDK_OFFSET(0x1231B2C0)
#define MOLEMOLE_CONFIG_SCREENUIATLASRECTDATA_TRYGETICONATLASRECT_OFFSET UNITYSDK_OFFSET(0x1231B1A0)
#define MOLEMOLE_CONFIG_SCREENUIATLASRECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1231B370)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenUIAtlasRectData_TypeDefinitionIndex = 58626;

	class ScreenUIAtlasRectData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::ProtoScript::ChessUIIconType, ::UnityEngine::Vector4>* IconAtlasRect; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Char, ::UnityEngine::Vector4>* FontAtlasRect; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector4>* FontBGAtlasRect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENUIATLASRECTDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetFontAtlasRect(::System::Char key, ::UnityEngine::Vector4& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENUIATLASRECTDATA_TRYGETFONTATLASRECT_OFFSET))(this, key, value);
		}

		::System::Boolean TryGetIconAtlasRect(::ProtoScript::ChessUIIconType key, ::UnityEngine::Vector4& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::ProtoScript::ChessUIIconType, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENUIATLASRECTDATA_TRYGETICONATLASRECT_OFFSET))(this, key, value);
		}

		::System::Boolean TryGetFontBGAtlasRect(::System::Int32 key, ::UnityEngine::Vector4& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENUIATLASRECTDATA_TRYGETFONTBGATLASRECT_OFFSET))(this, key, value);
		}
	};
}

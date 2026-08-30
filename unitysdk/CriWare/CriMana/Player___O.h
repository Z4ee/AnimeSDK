#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare::CriMana { class Player_CuePointCallbackFromNativeDelegate; }
namespace CriWare::CriMana { class Player_SubtitleCallbackFromNativeDelegate; }

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player___O_TypeDefinitionIndex = 38930;

	class Player___O : public ::System::Object
	{
	public:
		static ::CriWare::CriMana::Player_CuePointCallbackFromNativeDelegate** StaticGet__1___CuePointCallbackFromNative()
		{
			return (::CriWare::CriMana::Player_CuePointCallbackFromNativeDelegate**)Il2CppClass::FromTypeDefinitionIndex(Player___O_TypeDefinitionIndex)->GetStaticField(0x5A970);
		}
		static ::CriWare::CriMana::Player_SubtitleCallbackFromNativeDelegate** StaticGet__0___SubtitleCallbackFromNative()
		{
			return (::CriWare::CriMana::Player_SubtitleCallbackFromNativeDelegate**)Il2CppClass::FromTypeDefinitionIndex(Player___O_TypeDefinitionIndex)->GetStaticField(0x5A978);
		}
	};
}

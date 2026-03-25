#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare::CriMana { class Player_CuePointCallbackFromNativeDelegate; }

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player___O_TypeDefinitionIndex = 31241;

	class Player___O : public ::System::Object
	{
	public:
		static ::CriWare::CriMana::Player_CuePointCallbackFromNativeDelegate** StaticGet__0___CuePointCallbackFromNative()
		{
			return (::CriWare::CriMana::Player_CuePointCallbackFromNativeDelegate**)Il2CppClass::FromTypeDefinitionIndex(Player___O_TypeDefinitionIndex)->GetStaticField(0x35260);
		}
	};
}

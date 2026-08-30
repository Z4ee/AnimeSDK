#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EmotionID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EmotionData; }
namespace System { class String; }

#define CLASS_1_F132777AFBDFF108_METHOD_1_829BBB0BC7202A57_OFFSET UNITYSDK_OFFSET(0x18813780)
#define CLASS_1_F132777AFBDFF108__CTOR_OFFSET UNITYSDK_OFFSET(0x188138D0)

inline static constexpr unsigned int Class_1_F132777AFBDFF108_TypeDefinitionIndex = 69384;

class Class_1_F132777AFBDFF108 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F132777AFBDFF108__CTOR_OFFSET))(this);
	}

	::RPG::Client::EmotionData* Method_1_829BBB0BC7202A57(::RPG::GameCore::EmotionID a1, ::System::String* a2)
	{
		return ((::RPG::Client::EmotionData*(*)(::PVOID, ::RPG::GameCore::EmotionID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F132777AFBDFF108_METHOD_1_829BBB0BC7202A57_OFFSET))(this, a1, a2);
	}
};

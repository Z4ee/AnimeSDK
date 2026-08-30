#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEKILLEFFECTPARAMS_METHOD_2_27F693061CBBDBBD_OFFSET UNITYSDK_OFFSET(0x1DD6AF50)
#define RPG_GAMECORE_LITTLEGAMEKILLEFFECTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6B110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameKillEffectParams_TypeDefinitionIndex = 18668;

	class LittleGameKillEffectParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffectName; // 0x10
		::System::String* GlobalUniqueName; // 0x18
		::System::String* EffectPath; // 0x20
		::System::Boolean NeedFade; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEKILLEFFECTPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_27F693061CBBDBBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameKillEffectParams*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameKillEffectParams*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEKILLEFFECTPARAMS_METHOD_2_27F693061CBBDBBD_OFFSET))(a1, a2);
		}
	};
}

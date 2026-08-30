#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIELDEFFECTADAPTIONCONFIG_METHOD_2_CF89422EEF640C75_OFFSET UNITYSDK_OFFSET(0x1D0928A0)
#define RPG_GAMECORE_FIELDEFFECTADAPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D092A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FieldEffectAdaptionConfig_TypeDefinitionIndex = 16338;

	class FieldEffectAdaptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffectPath; // 0x10
		::System::Single Scale; // 0x18
		::RPG::MVector3 PositionOffset; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIELDEFFECTADAPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CF89422EEF640C75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FieldEffectAdaptionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FieldEffectAdaptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIELDEFFECTADAPTIONCONFIG_METHOD_2_CF89422EEF640C75_OFFSET))(a1, a2);
		}
	};
}

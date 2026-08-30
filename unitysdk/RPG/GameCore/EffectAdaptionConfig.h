#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MaterialPropertyAdaptionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_EFFECTADAPTIONCONFIG_METHOD_2_624EF185655418D1_OFFSET UNITYSDK_OFFSET(0x1DB21F50)
#define RPG_GAMECORE_EFFECTADAPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB221D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectAdaptionConfig_TypeDefinitionIndex = 16334;

	class EffectAdaptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffectPath; // 0x10
		::System::String* AliasName; // 0x18
		::System::String* AttachPoint; // 0x20
		::RPG::MVector3 PositionOffset; // 0x28
		::RPG::MVector3 RotationOffset; // 0x34
		::System::Single Scale; // 0x40
		::Il2CppArray<::RPG::GameCore::MaterialPropertyAdaptionConfig*>* OverrideMaterialProperty; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTADAPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_624EF185655418D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectAdaptionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectAdaptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTADAPTIONCONFIG_METHOD_2_624EF185655418D1_OFFSET))(a1, a2);
		}
	};
}

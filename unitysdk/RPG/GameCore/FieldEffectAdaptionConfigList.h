#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FieldEffectAdaptionConfig; }

#define RPG_GAMECORE_FIELDEFFECTADAPTIONCONFIGLIST_METHOD_2_0CBBD730A0B7ADB4_OFFSET UNITYSDK_OFFSET(0x1E0D2FF0)
#define RPG_GAMECORE_FIELDEFFECTADAPTIONCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D30B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FieldEffectAdaptionConfigList_TypeDefinitionIndex = 16339;

	class FieldEffectAdaptionConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FieldEffectAdaptionConfig*>* FieldEffectAdaptionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIELDEFFECTADAPTIONCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0CBBD730A0B7ADB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FieldEffectAdaptionConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FieldEffectAdaptionConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIELDEFFECTADAPTIONCONFIGLIST_METHOD_2_0CBBD730A0B7ADB4_OFFSET))(a1, a2);
		}
	};
}

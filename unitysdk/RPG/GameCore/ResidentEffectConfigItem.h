#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TriggerEffect; }
namespace System { class String; }

#define RPG_GAMECORE_RESIDENTEFFECTCONFIGITEM_METHOD_2_2B2ABB4F2ED95C12_OFFSET UNITYSDK_OFFSET(0x18CAC500)
#define RPG_GAMECORE_RESIDENTEFFECTCONFIGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAC640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResidentEffectConfigItem_TypeDefinitionIndex = 15655;

	class ResidentEffectConfigItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* ConfigKeys; // 0x10
		::Il2CppArray<::RPG::GameCore::TriggerEffect*>* Effects; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTEFFECTCONFIGITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2B2ABB4F2ED95C12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResidentEffectConfigItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResidentEffectConfigItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTEFFECTCONFIGITEM_METHOD_2_2B2ABB4F2ED95C12_OFFSET))(a1, a2);
		}
	};
}

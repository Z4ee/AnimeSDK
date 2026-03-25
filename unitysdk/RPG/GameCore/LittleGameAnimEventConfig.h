#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEANIMEVENTCONFIG_METHOD_3_BE47AEEA8493B7FC_OFFSET UNITYSDK_OFFSET(0x17353DD0)
#define RPG_GAMECORE_LITTLEGAMEANIMEVENTCONFIG_METHOD_3_C5F851B4666CD8B6_OFFSET UNITYSDK_OFFSET(0x17353ED0)
#define RPG_GAMECORE_LITTLEGAMEANIMEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17353E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAnimEventConfig_TypeDefinitionIndex = 17296;

	class LittleGameAnimEventConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean EnableAnimEvent; // 0x10
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x18
		::Il2CppArray<::System::String*>* DisableAnimEventLayers; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEANIMEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BE47AEEA8493B7FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAnimEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAnimEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEANIMEVENTCONFIG_METHOD_3_BE47AEEA8493B7FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C5F851B4666CD8B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAnimEventConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAnimEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEANIMEVENTCONFIG_METHOD_3_C5F851B4666CD8B6_OFFSET))(a1, a2);
		}
	};
}

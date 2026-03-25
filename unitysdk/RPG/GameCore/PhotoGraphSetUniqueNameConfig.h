#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphSetSingleTargetUniqueName; }

#define RPG_GAMECORE_PHOTOGRAPHSETUNIQUENAMECONFIG_METHOD_2_B4A65BECAFC171EE_OFFSET UNITYSDK_OFFSET(0x174AB490)
#define RPG_GAMECORE_PHOTOGRAPHSETUNIQUENAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174AC1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphSetUniqueNameConfig_TypeDefinitionIndex = 19790;

	class PhotoGraphSetUniqueNameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName*>* NpcUniqueNameInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETUNIQUENAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B4A65BECAFC171EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphSetUniqueNameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphSetUniqueNameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETUNIQUENAMECONFIG_METHOD_2_B4A65BECAFC171EE_OFFSET))(a1, a2);
		}
	};
}

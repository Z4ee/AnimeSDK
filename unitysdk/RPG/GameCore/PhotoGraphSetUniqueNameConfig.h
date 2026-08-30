#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphSetSingleTargetUniqueName; }

#define RPG_GAMECORE_PHOTOGRAPHSETUNIQUENAMECONFIG_METHOD_2_2E3515EEAB576122_OFFSET UNITYSDK_OFFSET(0x1D435560)
#define RPG_GAMECORE_PHOTOGRAPHSETUNIQUENAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4362B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphSetUniqueNameConfig_TypeDefinitionIndex = 21381;

	class PhotoGraphSetUniqueNameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName*>* NpcUniqueNameInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETUNIQUENAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2E3515EEAB576122(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphSetUniqueNameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphSetUniqueNameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETUNIQUENAMECONFIG_METHOD_2_2E3515EEAB576122_OFFSET))(a1, a2);
		}
	};
}

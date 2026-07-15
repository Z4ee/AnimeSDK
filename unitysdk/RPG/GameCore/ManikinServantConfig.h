#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ServantBodySize.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MANIKINSERVANTCONFIG_METHOD_2_3B2B39305CD04544_OFFSET UNITYSDK_OFFSET(0x1BCDDD60)
#define RPG_GAMECORE_MANIKINSERVANTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCDDEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinServantConfig_TypeDefinitionIndex = 16775;

	class ManikinServantConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ServantBodySize ServantBodySize; // 0x10
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINSERVANTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3B2B39305CD04544(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ManikinServantConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ManikinServantConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINSERVANTCONFIG_METHOD_2_3B2B39305CD04544_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWHINTNOTIFYCONFIG_METHOD_2_81296F3272A5F40A_OFFSET UNITYSDK_OFFSET(0x1BE431E0)
#define RPG_GAMECORE_SHOWHINTNOTIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE432E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowHintNotifyConfig_TypeDefinitionIndex = 16283;

	class ShowHintNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Visible; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHINTNOTIFYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_81296F3272A5F40A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowHintNotifyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowHintNotifyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHINTNOTIFYCONFIG_METHOD_2_81296F3272A5F40A_OFFSET))(a1, a2);
		}
	};
}

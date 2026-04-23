#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ViewModeSwitchType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_7325FC452131FD85_OFFSET UNITYSDK_OFFSET(0x18763B20)
#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_900B5B20E4D94A5B_OFFSET UNITYSDK_OFFSET(0x18763BF0)
#define RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT__CTOR_OFFSET UNITYSDK_OFFSET(0x18763BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByViewModeSwitchEmptyServant_TypeDefinitionIndex = 21832;

	class ByViewModeSwitchEmptyServant : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ViewModeSwitchType SwitchType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7325FC452131FD85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_7325FC452131FD85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_900B5B20E4D94A5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYVIEWMODESWITCHEMPTYSERVANT_METHOD_4_900B5B20E4D94A5B_OFFSET))(a1, a2);
		}
	};
}

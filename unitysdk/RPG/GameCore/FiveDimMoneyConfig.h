#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMONEYCONFIG_METHOD_3_8003324B0A1A92AA_OFFSET UNITYSDK_OFFSET(0x1890C8F0)
#define RPG_GAMECORE_FIVEDIMMONEYCONFIG_METHOD_3_95A4DF698D8D3C9B_OFFSET UNITYSDK_OFFSET(0x1890C960)
#define RPG_GAMECORE_FIVEDIMMONEYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1890C940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMoneyConfig_TypeDefinitionIndex = 17623;

	class FiveDimMoneyConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsMoney; // 0x10
		::System::Boolean NoPlaceholder; // 0x11
		::System::String* PlaceholderRIStateName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMONEYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8003324B0A1A92AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoneyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoneyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMONEYCONFIG_METHOD_3_8003324B0A1A92AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95A4DF698D8D3C9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoneyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoneyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMONEYCONFIG_METHOD_3_95A4DF698D8D3C9B_OFFSET))(a1, a2);
		}
	};
}

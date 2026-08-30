#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESMISSIONCONFIG_METHOD_2_2475826058D7E31C_OFFSET UNITYSDK_OFFSET(0x1D3A3360)
#define RPG_GAMECORE_RESMISSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A34B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResMissionConfig_TypeDefinitionIndex = 18803;

	class ResMissionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ResName; // 0x10
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESMISSIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2475826058D7E31C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResMissionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResMissionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESMISSIONCONFIG_METHOD_2_2475826058D7E31C_OFFSET))(a1, a2);
		}
	};
}

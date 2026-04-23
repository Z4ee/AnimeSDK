#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENINTERACTWORKCONFIG_METHOD_2_8EA9AB74A8AFB5F6_OFFSET UNITYSDK_OFFSET(0x18A042A0)
#define RPG_GAMECORE_HIPPLENINTERACTWORKCONFIG_METHOD_2_8F389F5F240F0299_OFFSET UNITYSDK_OFFSET(0x18A043F0)
#define RPG_GAMECORE_HIPPLENINTERACTWORKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A00E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenInteractWorkConfig_TypeDefinitionIndex = 15889;

	class HipplenInteractWorkConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 RequireTime; // 0x10
		::System::String* AIConfigPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINTERACTWORKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8EA9AB74A8AFB5F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenInteractWorkConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenInteractWorkConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINTERACTWORKCONFIG_METHOD_2_8EA9AB74A8AFB5F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_8F389F5F240F0299(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenInteractWorkConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenInteractWorkConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINTERACTWORKCONFIG_METHOD_2_8F389F5F240F0299_OFFSET))(a1, a2);
		}
	};
}

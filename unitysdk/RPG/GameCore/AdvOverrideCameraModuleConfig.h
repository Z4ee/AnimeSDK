#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OverrideCameraModuleConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVOVERRIDECAMERAMODULECONFIG_METHOD_3_C59DB69C0F6F0BDB_OFFSET UNITYSDK_OFFSET(0x1D6C22F0)
#define RPG_GAMECORE_ADVOVERRIDECAMERAMODULECONFIG_METHOD_3_FA7920B91F921C55_OFFSET UNITYSDK_OFFSET(0x1D6C22B0)
#define RPG_GAMECORE_ADVOVERRIDECAMERAMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C22E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvOverrideCameraModuleConfig_TypeDefinitionIndex = 21946;

	class AdvOverrideCameraModuleConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::OverrideCameraModuleConfig*>* OverrideConfigs; // 0x18
		::System::Single BlendTime; // 0x20
		::System::String* BlendCurve; // 0x28
		::System::Boolean ClearWhenResetCamera; // 0x30
		::System::Boolean IsReset; // 0x31
		::System::Boolean SetToDefaultYAxis; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDECAMERAMODULECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FA7920B91F921C55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvOverrideCameraModuleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvOverrideCameraModuleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDECAMERAMODULECONFIG_METHOD_3_FA7920B91F921C55_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C59DB69C0F6F0BDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvOverrideCameraModuleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvOverrideCameraModuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDECAMERAMODULECONFIG_METHOD_3_C59DB69C0F6F0BDB_OFFSET))(a1, a2);
		}
	};
}

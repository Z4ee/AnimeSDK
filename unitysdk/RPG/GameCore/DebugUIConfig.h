#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DEBUGUICONFIG_METHOD_2_A56C048941E5BE52_OFFSET UNITYSDK_OFFSET(0x1D01A890)
#define RPG_GAMECORE_DEBUGUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D01AA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebugUIConfig_TypeDefinitionIndex = 16284;

	class DebugUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EnvSystemProfilePaths; // 0x10
		::System::String* DefaultEnvSystemPath; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* MazeStagePaths; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ChapterStagePrefabPaths; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A56C048941E5BE52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebugUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebugUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGUICONFIG_METHOD_2_A56C048941E5BE52_OFFSET))(a1, a2);
		}
	};
}

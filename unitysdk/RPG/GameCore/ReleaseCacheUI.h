#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RELEASECACHEUI_METHOD_3_0620D24DC89C5991_OFFSET UNITYSDK_OFFSET(0x1758A870)
#define RPG_GAMECORE_RELEASECACHEUI_METHOD_3_AF7F0737FE10A838_OFFSET UNITYSDK_OFFSET(0x1758A7F0)
#define RPG_GAMECORE_RELEASECACHEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1758A840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReleaseCacheUI_TypeDefinitionIndex = 19869;

	class ReleaseCacheUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PrefabPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECACHEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AF7F0737FE10A838(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReleaseCacheUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReleaseCacheUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECACHEUI_METHOD_3_AF7F0737FE10A838_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0620D24DC89C5991(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReleaseCacheUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReleaseCacheUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASECACHEUI_METHOD_3_0620D24DC89C5991_OFFSET))(a1, a2);
		}
	};
}

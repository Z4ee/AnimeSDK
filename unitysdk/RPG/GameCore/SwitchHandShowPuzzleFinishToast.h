#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHHANDSHOWPUZZLEFINISHTOAST_METHOD_3_9737C0C66921E131_OFFSET UNITYSDK_OFFSET(0x17795920)
#define RPG_GAMECORE_SWITCHHANDSHOWPUZZLEFINISHTOAST_METHOD_3_DD3292AB9EE17558_OFFSET UNITYSDK_OFFSET(0x177959A0)
#define RPG_GAMECORE_SWITCHHANDSHOWPUZZLEFINISHTOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x17795970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandShowPuzzleFinishToast_TypeDefinitionIndex = 19299;

	class SwitchHandShowPuzzleFinishToast : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsRaid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDSHOWPUZZLEFINISHTOAST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9737C0C66921E131(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandShowPuzzleFinishToast*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandShowPuzzleFinishToast*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDSHOWPUZZLEFINISHTOAST_METHOD_3_9737C0C66921E131_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD3292AB9EE17558(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandShowPuzzleFinishToast* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandShowPuzzleFinishToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDSHOWPUZZLEFINISHTOAST_METHOD_3_DD3292AB9EE17558_OFFSET))(a1, a2);
		}
	};
}

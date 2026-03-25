#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VCAMERANOISECLOSEFORBATTLEDATAVIEW_METHOD_3_DC6A9A0F7B1AA352_OFFSET UNITYSDK_OFFSET(0x178EDF60)
#define RPG_GAMECORE_VCAMERANOISECLOSEFORBATTLEDATAVIEW_METHOD_3_E8458AA8FEBCC5E6_OFFSET UNITYSDK_OFFSET(0x178EDE50)
#define RPG_GAMECORE_VCAMERANOISECLOSEFORBATTLEDATAVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x178EDF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraNoiseCloseForBattleDataView_TypeDefinitionIndex = 21615;

	class VCameraNoiseCloseForBattleDataView : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERANOISECLOSEFORBATTLEDATAVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8458AA8FEBCC5E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraNoiseCloseForBattleDataView*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraNoiseCloseForBattleDataView*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERANOISECLOSEFORBATTLEDATAVIEW_METHOD_3_E8458AA8FEBCC5E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DC6A9A0F7B1AA352(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraNoiseCloseForBattleDataView* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraNoiseCloseForBattleDataView*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERANOISECLOSEFORBATTLEDATAVIEW_METHOD_3_DC6A9A0F7B1AA352_OFFSET))(a1, a2);
		}
	};
}

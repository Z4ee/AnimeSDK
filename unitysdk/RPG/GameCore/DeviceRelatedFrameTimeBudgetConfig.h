#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FrameTimeBudgetInfo; }

#define RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG_METHOD_3_175FBCDD72584A7A_OFFSET UNITYSDK_OFFSET(0x17156C20)
#define RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG_METHOD_3_FD929D5D14DB5C1C_OFFSET UNITYSDK_OFFSET(0x17157400)
#define RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17156C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedFrameTimeBudgetConfig_TypeDefinitionIndex = 15085;

	class DeviceRelatedFrameTimeBudgetConfig : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::RPG::GameCore::FrameTimeBudgetInfo* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FD929D5D14DB5C1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedFrameTimeBudgetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedFrameTimeBudgetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG_METHOD_3_FD929D5D14DB5C1C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_175FBCDD72584A7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceRelatedFrameTimeBudgetConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceRelatedFrameTimeBudgetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDFRAMETIMEBUDGETCONFIG_METHOD_3_175FBCDD72584A7A_OFFSET))(a1, a2);
		}
	};
}

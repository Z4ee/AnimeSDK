#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/QteCatchGhostNotify.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY_METHOD_3_612513333AE261EE_OFFSET UNITYSDK_OFFSET(0x17575CE0)
#define RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY_METHOD_3_C319573700DA185D_OFFSET UNITYSDK_OFFSET(0x17575C60)
#define RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x17575CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QteCatchGhostSendNotify_TypeDefinitionIndex = 20227;

	class QteCatchGhostSendNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::QteCatchGhostNotify NotifyType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C319573700DA185D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QteCatchGhostSendNotify*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QteCatchGhostSendNotify*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY_METHOD_3_C319573700DA185D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_612513333AE261EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QteCatchGhostSendNotify* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QteCatchGhostSendNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY_METHOD_3_612513333AE261EE_OFFSET))(a1, a2);
		}
	};
}

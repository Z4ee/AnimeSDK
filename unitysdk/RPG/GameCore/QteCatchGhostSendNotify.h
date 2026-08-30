#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/QteCatchGhostNotify.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY_METHOD_3_574E0B8F39DB4505_OFFSET UNITYSDK_OFFSET(0x1D18CB50)
#define RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY_METHOD_3_612513333AE261EE_OFFSET UNITYSDK_OFFSET(0x1D18CB90)
#define RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D18CB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QteCatchGhostSendNotify_TypeDefinitionIndex = 21800;

	class QteCatchGhostSendNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::QteCatchGhostNotify NotifyType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_574E0B8F39DB4505(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QteCatchGhostSendNotify*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QteCatchGhostSendNotify*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY_METHOD_3_574E0B8F39DB4505_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_612513333AE261EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::QteCatchGhostSendNotify* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::QteCatchGhostSendNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY_METHOD_3_612513333AE261EE_OFFSET))(a1, a2);
		}
	};
}

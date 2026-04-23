#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CRPVirtualCameraConfig; }

#define RPG_GAMECORE_CRPVIRTUALCAMERACONFIGLIST_METHOD_2_CF7E617EEA94C683_OFFSET UNITYSDK_OFFSET(0x18764850)
#define RPG_GAMECORE_CRPVIRTUALCAMERACONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18764920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CRPVirtualCameraConfigList_TypeDefinitionIndex = 15544;

	class CRPVirtualCameraConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CRPVirtualCameraConfig*>* CameraConfigs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERACONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CF7E617EEA94C683(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CRPVirtualCameraConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CRPVirtualCameraConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERACONFIGLIST_METHOD_2_CF7E617EEA94C683_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE_CANSHOWTOAST_OFFSET UNITYSDK_OFFSET(0x19343B20)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x193435A0)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19343E70)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x19343E50)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__REFRESHACTIVITYICONTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19343DD0)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__TRYSHOWTOAST_OFFSET UNITYSDK_OFFSET(0x19343700)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStartHintModule_TypeDefinitionIndex = 59154;

	class ActivityStartHintModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet__ACTIVITY_UNLOCK_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ActivityStartHintModule_TypeDefinitionIndex)->GetStaticField(0xCA50);
		}
		::UnityEngine::Transform* ActivityIconTransform; // 0x10
		::System::Boolean _IsToastShown; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE__CCTOR_OFFSET))();
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _TryShowToast(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE__TRYSHOWTOAST_OFFSET))(this, a1);
		}

		static ::System::Boolean CanShowToast(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE_CANSHOWTOAST_OFFSET))(a1);
		}

		::System::Void _RefreshActivityIconTransform(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE__REFRESHACTIVITYICONTRANSFORM_OFFSET))(this, a1);
		}
	};
}

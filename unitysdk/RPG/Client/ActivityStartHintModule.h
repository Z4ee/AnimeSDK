#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE_CANSHOWTOAST_OFFSET UNITYSDK_OFFSET(0xB1FA650)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB1FA0D0)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1FA940)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB1FA920)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__REFRESHACTIVITYICONTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB1FA8A0)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__TRYSHOWTOAST_OFFSET UNITYSDK_OFFSET(0xB1FA230)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB1FA950)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStartHintModule_TypeDefinitionIndex = 57888;

	class ActivityStartHintModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet__ACTIVITY_UNLOCK_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ActivityStartHintModule_TypeDefinitionIndex)->GetStaticField(0x11C20);
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

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}

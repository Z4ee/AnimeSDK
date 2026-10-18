#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_90889A2023AB884E_9;
namespace RPG::Client::MechCraft::View { class MechCraftWorkshopStarControlBinder; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD66D3C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_METHOD_5_55F60C84B6E8DDCC_OFFSET UNITYSDK_OFFSET(0xD66D400)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD66C6F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD66D650)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftWorkshopStarControl_TypeDefinitionIndex = 80079;

	class MechCraftWorkshopStarControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_90889A2023AB884E_9* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftWorkshopStarControlBinder* _Binder; // 0x20
		::System::String* _StateActive; // 0x28
		::System::String* _StateUnactive; // 0x30
		::System::String* _StateSwitchActive; // 0x38
		::System::Nullable_1<::System::Boolean> FMNEEONAMNO; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_90889A2023AB884E_9* get_Content()
		{
			return ((::Class_1_90889A2023AB884E_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Class_1_90889A2023AB884E_9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90889A2023AB884E_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void Method_5_55F60C84B6E8DDCC(::Class_1_90889A2023AB884E_9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90889A2023AB884E_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_METHOD_5_55F60C84B6E8DDCC_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_90889A2023AB884E_10;
namespace RPG::Client::MechCraft::View { class MechCraftStarControlBinder; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD65C4B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROL_METHOD_5_EF2B018840867312_OFFSET UNITYSDK_OFFSET(0xD65C550)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD65C4F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD65C750)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftStarControl_TypeDefinitionIndex = 80019;

	class MechCraftStarControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_90889A2023AB884E_10* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftStarControlBinder* _Binder; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_90889A2023AB884E_10* get_Content()
		{
			return ((::Class_1_90889A2023AB884E_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Class_1_90889A2023AB884E_10* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90889A2023AB884E_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void Method_5_EF2B018840867312(::Class_1_90889A2023AB884E_10* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90889A2023AB884E_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSTARCONTROL_METHOD_5_EF2B018840867312_OFFSET))(this, a1);
		}
	};
}

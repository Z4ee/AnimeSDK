#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_04E767430AD06AF5;
namespace RPG::Client::MechCraft::View { class MechCraftTalentedPartnerHeadControlBinder; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD671DD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL_METHOD_5_B85F667AE369605C_OFFSET UNITYSDK_OFFSET(0xD671E70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD671E10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD672510)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentedPartnerHeadControl_TypeDefinitionIndex = 79831;

	class MechCraftTalentedPartnerHeadControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _StateDefault; // 0x18
		::System::String* _StateSpecial; // 0x20
		::Class_1_04E767430AD06AF5* LFGMLJCCPCH; // 0x28
		::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControlBinder* _Binder; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_04E767430AD06AF5* get_Content()
		{
			return ((::Class_1_04E767430AD06AF5*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Class_1_04E767430AD06AF5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_04E767430AD06AF5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void Method_5_B85F667AE369605C(::Class_1_04E767430AD06AF5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_04E767430AD06AF5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL_METHOD_5_B85F667AE369605C_OFFSET))(this, a1);
		}
	};
}

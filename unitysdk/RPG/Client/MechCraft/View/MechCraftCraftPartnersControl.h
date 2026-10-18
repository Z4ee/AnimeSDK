#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_8A7282DF079FF8B3;
namespace RPG::Client::MechCraft::View { class MechCraftCraftPartnersControlBinder; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentedPartnerHeadControl; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD625710)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_METHOD_5_17C608D95C1179C4_OFFSET UNITYSDK_OFFSET(0xD625EF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_METHOD_5_A8458C1526636349_OFFSET UNITYSDK_OFFSET(0xD625750)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD610BF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD626780)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftPartnersControl_TypeDefinitionIndex = 79908;

	class MechCraftCraftPartnersControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_8A7282DF079FF8B3* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftCraftPartnersControlBinder* _Binder; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl*>* BMCFBDNOCFE; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_8A7282DF079FF8B3* get_Content()
		{
			return ((::Class_1_8A7282DF079FF8B3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::Class_1_8A7282DF079FF8B3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8A7282DF079FF8B3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl*>* Method_5_17C608D95C1179C4()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_METHOD_5_17C608D95C1179C4_OFFSET))(this);
		}

		::System::Void Method_5_A8458C1526636349(::Class_1_8A7282DF079FF8B3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8A7282DF079FF8B3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_METHOD_5_A8458C1526636349_OFFSET))(this, a1);
		}
	};
}
